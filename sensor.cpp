#include <Arduino.h>
#include <Wire.h>
#include <TFLI2C.h>

TFLI2C tflI2C;

int16_t  tfDist;
int16_t  tfAddr = TFL_DEF_ADR;

void setup(){
    Serial.begin(115200);
    Wire.begin();
}

void loop(){
  
    if(tflI2C.getData(tfDist, tfAddr)){
        Serial.println(String(tfDist)+" cm / " + String(tfDist/2.54)+" inches");
    }
    delay(50);
}
