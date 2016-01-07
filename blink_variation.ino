/**
Write a program that causes the built-in LED connected to pin 13 on the Arduino 
to blink, alternating between fast blinks and slow blinks. The LED should blink 
5 times, once every half second, and then it should blink 5 more times, once 
every two seconds. The LED should continue to blink in this alternating fashion 
for as long as the Arduino receives power.
**/

int led = 13;

void setup() { pinMode(led, OUTPUT); }

void blink(int d) 
{
  digitalWrite(led, HIGH); delay(d);
  digitalWrite(led, LOW); delay(d);
}

void loop() 
{
  int i;
  for ( i=0; i<5 ; i++ ) { blink(500); }
  for ( i=0; i<5 ; i++ ) { blink(2000); }
}