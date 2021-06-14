#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"
TMRpcm tmrpcm;

int led = 8;           // the PWM pin the LED is attached to
int randomLevel;
int lightLevel;
int cutoffValue;
int bottomRandom;
long randStartTime;

void setup(){

pinMode(led, OUTPUT);
cutoffValue = 100;
bottomRandom = 0;
randomSeed(analogRead(0));

randStartTime = random(1,6);

switch (randStartTime) {
  case 1:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("raccoon.wav", 0);
    delay(30);
    tmrpcm.stopPlayback();
    break;
  case 2:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("raccoon.wav", 30);
    delay(30);
    tmrpcm.stopPlayback();
    break;

    case 3:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("raccoon.wav", 60);
    delay(30);
    tmrpcm.stopPlayback();
    break;

    case 4:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("raccoon.wav", 90);
    delay(30);
    tmrpcm.stopPlayback();
    break;

    case 5:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("raccoon.wav", 120);
    delay(30);
    tmrpcm.stopPlayback();
    break;

    case 6:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("raccoon.wav", 150);
    delay(30);
    tmrpcm.stopPlayback();
    break;
}
}

void loop(){
//picks a random number that will determine if the light is turned on or off
  randomLevel = random(0,100);
  
  //picks a random number for how bright the light will be if it is turned on
  lightLevel = random(bottomRandom,255);
  
  /*the cutoff level for whether the light is on or off.
  increase this value to have the light turn off more
  of the time. degrease it to have the light on more
  of the time*/
  cutoffValue --;

  /*if randomlevel is greater or equal to cutoffvalue, turn the light on*/
  if (randomLevel >= cutoffValue){
    
  /* set the brightness of the light
  based on a random value chosen btween 100 and 255
 */
  analogWrite(led, lightLevel);
  }
  
  /*if randomlevel is less than cutoffvalue, turn the light off*/
  else {
    analogWrite(led, 0);
    delay(5);

  }
  delay(70);

  if(bottomRandom > 254) {
    bottomRandom = 255;
}
else {
    bottomRandom ++;
}
  

  
  
}
