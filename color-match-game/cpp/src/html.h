/*
* Copyright (c) 2015 - 2017 Intel Corporation.
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to
* permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
* LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
* OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
* WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

static unsigned char index_html[] = {
   0x3c,   0x21,   0x44,   0x4f,   0x43,   0x54,   0x59,   0x50,   0x45,   0x20,   0x68,   0x74,   0x6d,   0x6c,   0x3e,   0x0a,
   0x3c,   0x68,   0x74,   0x6d,   0x6c,   0x20,   0x6c,   0x61,   0x6e,   0x67,   0x3d,   0x22,   0x65,   0x6e,   0x22,   0x3e,
   0x0a,   0x0a,   0x3c,   0x68,   0x65,   0x61,   0x64,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x6d,   0x65,
   0x74,   0x61,   0x20,   0x63,   0x68,   0x61,   0x72,   0x73,   0x65,   0x74,   0x3d,   0x22,   0x55,   0x54,   0x46,   0x2d,
   0x38,   0x22,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x6c,   0x69,   0x6e,   0x6b,   0x20,   0x72,   0x65,
   0x6c,   0x3d,   0x22,   0x73,   0x74,   0x79,   0x6c,   0x65,   0x73,   0x68,   0x65,   0x65,   0x74,   0x22,   0x20,   0x74,
   0x79,   0x70,   0x65,   0x3d,   0x22,   0x74,   0x65,   0x78,   0x74,   0x2f,   0x63,   0x73,   0x73,   0x22,   0x20,   0x68,
   0x72,   0x65,   0x66,   0x3d,   0x22,   0x73,   0x74,   0x61,   0x74,   0x69,   0x63,   0x2f,   0x63,   0x73,   0x73,   0x2e,
   0x63,   0x73,   0x73,   0x22,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x74,   0x69,   0x74,   0x6c,   0x65,
   0x3e,   0x43,   0x6f,   0x6c,   0x6f,   0x72,   0x20,   0x4d,   0x61,   0x74,   0x63,   0x68,   0x20,   0x47,   0x61,   0x6d,
   0x65,   0x3c,   0x2f,   0x74,   0x69,   0x74,   0x6c,   0x65,   0x3e,   0x0a,   0x0a,   0x3c,   0x2f,   0x68,   0x65,   0x61,
   0x64,   0x3e,   0x0a,   0x0a,   0x3c,   0x62,   0x6f,   0x64,   0x79,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,
   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x69,   0x6e,
   0x70,   0x75,   0x74,   0x20,   0x74,   0x79,   0x70,   0x65,   0x3d,   0x22,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,
   0x22,   0x20,   0x69,   0x64,   0x3d,   0x22,   0x62,   0x74,   0x6e,   0x53,   0x74,   0x61,   0x72,   0x74,   0x47,   0x61,
   0x6d,   0x65,   0x22,   0x20,   0x76,   0x61,   0x6c,   0x75,   0x65,   0x3d,   0x22,   0x53,   0x74,   0x61,   0x72,   0x74,
   0x20,   0x67,   0x61,   0x6d,   0x65,   0x22,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x2f,   0x64,   0x69,
   0x76,   0x3e,   0x0a,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x64,   0x69,   0x76,   0x20,   0x63,   0x6c,   0x61,
   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,
   0x20,   0x66,   0x6c,   0x6f,   0x61,   0x74,   0x69,   0x6e,   0x67,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,
   0x22,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x64,   0x69,   0x76,   0x20,
   0x63,   0x6c,   0x61,   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,
   0x74,   0x6f,   0x6e,   0x2d,   0x63,   0x69,   0x72,   0x63,   0x6c,   0x65,   0x20,   0x22,   0x3e,   0x0a,   0x20,   0x20,
   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x61,   0x20,   0x69,   0x64,   0x3d,
   0x22,   0x62,   0x6c,   0x75,   0x65,   0x42,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x20,   0x63,   0x6c,   0x61,
   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,
   0x22,   0x3e,   0x3c,   0x2f,   0x61,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,
   0x2f,   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x2f,   0x64,   0x69,   0x76,   0x3e,
   0x0a,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x64,   0x69,   0x76,   0x20,   0x63,   0x6c,   0x61,   0x73,   0x73,
   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x20,   0x66,
   0x6c,   0x6f,   0x61,   0x74,   0x69,   0x6e,   0x67,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x3e,
   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x64,   0x69,   0x76,   0x20,   0x63,   0x6c,
   0x61,   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,
   0x6e,   0x2d,   0x63,   0x69,   0x72,   0x63,   0x6c,   0x65,   0x22,   0x20,   0x73,   0x74,   0x79,   0x6c,   0x65,   0x3d,
   0x22,   0x62,   0x61,   0x63,   0x6b,   0x67,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x3a,   0x23,   0x34,   0x44,   0x43,
   0x46,   0x34,   0x36,   0x22,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,
   0x20,   0x20,   0x3c,   0x61,   0x20,   0x69,   0x64,   0x3d,   0x22,   0x67,   0x72,   0x65,   0x65,   0x6e,   0x42,   0x75,
   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x20,   0x63,   0x6c,   0x61,   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,
   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x3e,   0x3c,   0x2f,   0x61,   0x3e,   0x0a,
   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x2f,   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x20,
   0x20,   0x20,   0x20,   0x3c,   0x2f,   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,
   0x64,   0x69,   0x76,   0x20,   0x73,   0x74,   0x79,   0x6c,   0x65,   0x3d,   0x22,   0x63,   0x6c,   0x65,   0x61,   0x72,
   0x3a,   0x20,   0x62,   0x6f,   0x74,   0x68,   0x22,   0x3e,   0x3c,   0x2f,   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x0a,
   0x20,   0x20,   0x20,   0x20,   0x3c,   0x64,   0x69,   0x76,   0x20,   0x63,   0x6c,   0x61,   0x73,   0x73,   0x3d,   0x22,
   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x20,   0x66,   0x6c,   0x6f,
   0x61,   0x74,   0x69,   0x6e,   0x67,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x3e,   0x0a,   0x20,
   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x64,   0x69,   0x76,   0x20,   0x63,   0x6c,   0x61,   0x73,
   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x2d,
   0x63,   0x69,   0x72,   0x63,   0x6c,   0x65,   0x22,   0x20,   0x73,   0x74,   0x79,   0x6c,   0x65,   0x3d,   0x22,   0x62,
   0x61,   0x63,   0x6b,   0x67,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x3a,   0x23,   0x45,   0x41,   0x46,   0x35,   0x32,
   0x32,   0x22,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,
   0x3c,   0x61,   0x20,   0x69,   0x64,   0x3d,   0x22,   0x79,   0x65,   0x6c,   0x6c,   0x6f,   0x77,   0x42,   0x75,   0x74,
   0x74,   0x6f,   0x6e,   0x22,   0x20,   0x63,   0x6c,   0x61,   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,
   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x3e,   0x3c,   0x2f,   0x61,   0x3e,   0x0a,   0x20,
   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x2f,   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x20,   0x20,
   0x20,   0x20,   0x3c,   0x2f,   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x64,
   0x69,   0x76,   0x20,   0x63,   0x6c,   0x61,   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,
   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x20,   0x66,   0x6c,   0x6f,   0x61,   0x74,   0x69,   0x6e,   0x67,   0x2d,
   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,
   0x20,   0x3c,   0x64,   0x69,   0x76,   0x20,   0x63,   0x6c,   0x61,   0x73,   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,
   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x2d,   0x63,   0x69,   0x72,   0x63,   0x6c,   0x65,
   0x22,   0x20,   0x73,   0x74,   0x79,   0x6c,   0x65,   0x3d,   0x22,   0x62,   0x61,   0x63,   0x6b,   0x67,   0x72,   0x6f,
   0x75,   0x6e,   0x64,   0x3a,   0x23,   0x46,   0x35,   0x32,   0x32,   0x32,   0x32,   0x22,   0x3e,   0x0a,   0x20,   0x20,
   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x61,   0x20,   0x69,   0x64,   0x3d,
   0x22,   0x72,   0x65,   0x64,   0x42,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,   0x20,   0x63,   0x6c,   0x61,   0x73,
   0x73,   0x3d,   0x22,   0x72,   0x6f,   0x75,   0x6e,   0x64,   0x2d,   0x62,   0x75,   0x74,   0x74,   0x6f,   0x6e,   0x22,
   0x3e,   0x3c,   0x2f,   0x61,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x2f,
   0x64,   0x69,   0x76,   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x2f,   0x64,   0x69,   0x76,   0x3e,   0x0a,
   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x73,   0x63,   0x72,   0x69,   0x70,   0x74,   0x20,   0x73,   0x72,   0x63,
   0x3d,   0x22,   0x73,   0x74,   0x61,   0x74,   0x69,   0x63,   0x2f,   0x6a,   0x71,   0x75,   0x65,   0x72,   0x79,   0x2e,
   0x6d,   0x69,   0x6e,   0x2e,   0x6a,   0x73,   0x22,   0x3e,   0x3c,   0x2f,   0x73,   0x63,   0x72,   0x69,   0x70,   0x74,
   0x3e,   0x0a,   0x20,   0x20,   0x20,   0x20,   0x3c,   0x73,   0x63,   0x72,   0x69,   0x70,   0x74,   0x20,   0x73,   0x72,
   0x63,   0x3d,   0x22,   0x73,   0x74,   0x61,   0x74,   0x69,   0x63,   0x2f,   0x6d,   0x61,   0x69,   0x6e,   0x2e,   0x6a,
   0x73,   0x22,   0x3e,   0x3c,   0x2f,   0x73,   0x63,   0x72,   0x69,   0x70,   0x74,   0x3e,   0x0a,   0x3c,   0x2f,   0x62,
   0x6f,   0x64,   0x79,   0x3e,   0x0a,   0x3c,   0x2f,   0x68,   0x74,   0x6d,   0x6c,   0x3e,   0x0a,
};
