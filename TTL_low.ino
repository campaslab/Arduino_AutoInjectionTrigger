/*
Auto injection

This code puts the desired output to LOW, meaning it stops sending TTL pulses or constant signal (HIGH).

Created by Petr Pospisil on 18 July 2014

*/

int TTL = 10;

void setup() {
  pinMode(TTL, OUTPUT);

}

void loop() {
   digitalWrite(TTL, LOW);
   exit(0);
}
