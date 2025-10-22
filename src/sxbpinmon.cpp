/*
  This section is to convert the .ino file to a CPP project for PlatformIO

  TODO:
    * Instructions here to convert back


  NOTES:
    PlatformIO is weird, before uploading disuconnect serial monitors 
    or upload will fail with a scary warning about the programmer.
*/
#include <Arduino.h>

/********************************************************************************

      WDC W65C02SXB Single board computer pin monitor for Arduino Mega 2560.


TODO: 
  * Define the board address and data pins
  * define any other useful pins; PHI2, RES, IRQB, etc 
  * Read Clock Pulses at 8MHz; 125 Nanosecond resolution needed 

SIGNAL NOTES:


DATA      | Data lines D0-D7          |   One Byte
ADDR      | Address lines A0-A25      |   Two Bytes
VP        | Vector Pull
IRQ       | Interupt Request
NMI       | Non-Maskable Interrupt
RES       | Reset
ML        | Memory Lock
SYNC      | Syncronize
BE        | Bus Enable
RW        | Read/Write
PHI2      | Phase 2 In Clock

HARDWARE CONNECTOR NOTES:

        Signals available on J1/XBus02
  --------------------------------------------------------------------------
  +5v/GND pins are flpped on each end of this connector, don't fuck that up.
  --------------------------------------------------------------------------
  VDD(+5v)           |      P1/P40
  VSS(GND)           |      P2/P39
  --------------------------------------------------------------------------
  D0-7               |      P3-P10
  A0-A15             |      P11-P26  
  VP(B)              |      P30
  IRQ(B)             |      P31
  NMI(B)             |      P32
  RES(B)             |      P33
  ML(B)              |      P34
  SYNC               |      P35
  BE                 |      P36
  RW(B)              |      P37
  PHI2               |      P38
  VSS(GND)           |      P39
  VDD(+5v)           |      P40
********************************************************************************/

// Pin 38 is PHI2 connected to pin 22 on the mega 2560
  uint32_t CLKPin = 22;
  boolean out = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Clock Pulse Detection Test.\n");
  pinMode(22, INPUT);
  
  delay(3000);
}

void loop() {
  
  out = digitalRead(CLKPin);

  if(out) {
    Serial.println(out);
  }
  else {
    Serial.println(out);
  }

  out = false;
}
