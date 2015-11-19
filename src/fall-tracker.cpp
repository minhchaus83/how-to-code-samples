#include <string>
using std::string;
#include <sstream>
#include <iostream>
#include <signal.h>

#include <ctime>
#include <time.h>
#include <vector>
using std::vector;

#include <ssd1308.h>
#define OLED_DEVICE_ADDRESS    0x3C
#define OLED_BUS_NUMBER        0x0
#include <adxl345.h>

#include "../lib/restclient-cpp/include/restclient-cpp/restclient.h"

#include "../lib/twilio-cplusplus/Utils.h"
#include "../lib/twilio-cplusplus/Rest.h"
#include "../lib/twilio-cplusplus/TwiML.h"
using namespace twilio;
const string TWILIO_API_VERSION = "2010-04-01";

using namespace std;

// Send sms message using Twilio api
void send_sms() {
  if (!getenv("TWILIO_SID") || !getenv("TWILIO_TOKEN") ||
      !getenv("TWILIO_TO") || !getenv("TWILIO_FROM")) {
    cerr << "Twilio not configured." << endl;
    return;
  }

  string response;
  vector<Var> vars;

  Rest t(getenv("TWILIO_SID"), getenv("TWILIO_TOKEN"));

  vars.push_back(Var("To", getenv("TWILIO_TO")));
  vars.push_back(Var("From", getenv("TWILIO_FROM")));
  vars.push_back(Var("Body", "Fall detected!"));
  response = t.request("/" + TWILIO_API_VERSION + "/Accounts/" + getenv("TWILIO_SID") + "/SMS/Messages", "POST", vars);
  cout << "SMS Sent" << endl;
  cout << response << endl;
}

// Log the event to the remote datastore
void log(const string& event) {
  cout << event << endl;

  if (!getenv("SERVER") || !getenv("AUTH_TOKEN")) {
    return;
  }

  time_t now = time(NULL);
  char mbstr[sizeof "2011-10-08T07:07:09Z"];
  strftime(mbstr, sizeof(mbstr), "%FT%TZ", localtime(&now));

  stringstream payload;
  payload << "{\"value\":";
  payload << "\"" << event << mbstr << "\"}";

  RestClient::headermap headers;
  headers["X-Auth-Token"] = getenv("AUTH_TOKEN");

  RestClient::response r = RestClient::put(getenv("SERVER"), "text/json", payload.str(), headers);
  cout << "Datastore called. Result:" << r.code << endl;
  cout << r.body << endl;
}

// The hardware devices that the example is going to connect to
struct Devices
{
  upm::SSD1308 *screen;
  upm::Adxl345 *accel;

  float previousX, previousY, previousZ = 0;
  float currentX, currentY, currentZ = 0;

  Devices(){
  };

  // Initialization function
  void init() {
    // screen connected to the default I2C bus
    screen = new upm::SSD1308(OLED_BUS_NUMBER, OLED_DEVICE_ADDRESS);

    // accelerometer also connected via I2C
    accel = new upm::Adxl345(0);
  };

  // Cleanup on exit
  void cleanup() {
    delete screen;
    delete accel;
  }

  // Display a message on the OLED
  void message(const string& input) {
    string text(input);
    text.resize(16, ' ');

    screen->clear();
    screen->home();
    screen->write(text);
  }

  // Reads the current value from accelerometer
  void read_accelerometer() {
    float* acc;
    accel->update();
    acc = accel->getAcceleration();
    currentX = acc[0];
    currentY = acc[1];
    currentZ = acc[2];
  }

  // Checks to see if it looks like the wearer has fallen down
  bool fall_detected() {
    if (previousX - currentX >= 5) {
      fprintf(stdout, "PX: %5.2f g\n", previousX);
      fprintf(stdout, "AccX: %5.2f g\n", currentX);
      return true;
    }
    if (previousY - currentY >= 5) {
      fprintf(stdout, "PY: %5.2f g\n", previousY);
      fprintf(stdout, "AccY: %5.2f g\n", currentY);
      return true;
    }
    if (previousZ - currentZ >= 5) {
      fprintf(stdout, "PZ: %5.2f g\n", previousZ);
      fprintf(stdout, "AccZ: %5.2f g\n", currentZ);
      return true;
    }
    return false;
  }

  void save_values() {
    previousX = currentX;
    previousY = currentY;
    previousZ = currentZ;
  }
};

Devices devices;

void alert(){
  devices.message("Fall Detected!");
  log("Fall detected");
  send_sms();
}

// Exit handler for program
void exit_handler(int param)
{
  devices.cleanup();
  exit(1);
}

// The main function for the example program
int main()
{
  // handles ctrl-c or other orderly exits
  signal(SIGINT, exit_handler);

  // check that we are running on Galileo or Edison
  mraa_platform_t platform = mraa_get_platform_type();
  if ((platform != MRAA_INTEL_GALILEO_GEN1) &&
    (platform != MRAA_INTEL_GALILEO_GEN2) &&
    (platform != MRAA_INTEL_EDISON_FAB_C)) {
    cerr << "ERROR: Unsupported platform" << endl;
    return MRAA_ERROR_INVALID_PLATFORM;
  }

  // create and initialize UPM devices
  devices.init();

  for (;;) {
    devices.read_accelerometer();
    if (devices.fall_detected()) {
      alert();
    }

    devices.save_values();
    usleep(250);
  }

  return MRAA_SUCCESS;
}
