/********************************************************************************

WDC W65C02SXB Single board computer pin monitor for Arduino Mega 2560.


TODO: 
  * Define the board address and data pins
  * define any other useful pins; PHI, RST, IRQB, etc 
  * Read Clock Pulses at 8MHz; 125 Nanosecond resolution needed 

SIGNAL NOTES:

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
void setup() {
  Serial.begin(9600);
  Serial.println("Hellorld\n");


}

void loop() {
  // put your main code here, to run repeatedly:

}
