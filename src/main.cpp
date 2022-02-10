#include <Arduino.h>
#define onbord 13
void setup() {
// write your initialization code here
    pinMode(onbord,OUTPUT);
}

void loop() {
    // write your code here
    digitalWrite(onbord,LOW);
    delay(1000);
    digitalWrite(onbord,HIGH);
}