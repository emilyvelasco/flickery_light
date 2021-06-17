#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"
TMRpcm tmrpcm;
TMRpcm audio;
int led = 3;           // the PWM pin the LED is attached to
int randomLevel;
int lightLevel;
int cutoffValue;
int bottomRandom;
long randStartTime;
long randStartTime2;
void setup(){

pinMode(led, OUTPUT);
cutoffValue = 100;
bottomRandom = 0;
randomSeed(analogRead(0));

randStartTime = random(1,6);
lightLevel = random(55,255);

switch (randStartTime) {
  case 1:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    analogWrite(led, 0);
    tmrpcm.play("counting.wav", 0);
    delay(1500);
    audio.stopPlayback();
    randStartTime2 = random(11,16);
    switch (randStartTime2) {
      case 11:
        tmrpcm.speakerPin = 9;
        //Serial.begin(9600);
        SD.begin(SD_ChipSelectPin);
        tmrpcm.quality(2);
        tmrpcm.setVolume(5);
        tmrpcm.play("counting.wav", 0);
        delay(1500);
        audio.stopPlayback();
        break;
        
      case 12:
        tmrpcm.speakerPin = 9;
        //Serial.begin(9600);
        SD.begin(SD_ChipSelectPin);
        tmrpcm.quality(2);
        tmrpcm.setVolume(5);
        analogWrite(led, 40);
        tmrpcm.play("counting.wav", 2);
        delay(1500);
        audio.stopPlayback();
        break;

        case 13:
        tmrpcm.speakerPin = 9;
        //Serial.begin(9600);
        SD.begin(SD_ChipSelectPin);
        tmrpcm.quality(2);
        tmrpcm.setVolume(5);
        analogWrite(led, 255);
        tmrpcm.play("counting.wav", 4);
        delay(1500);
        audio.stopPlayback();
        break;

        case 14:
        tmrpcm.speakerPin = 9;
        //Serial.begin(9600);
        SD.begin(SD_ChipSelectPin);
        tmrpcm.quality(2);
        tmrpcm.setVolume(5);
        analogWrite(led, 0);
        tmrpcm.play("counting.wav", 6);
        delay(1500);
        audio.stopPlayback();
        break;

        case 15:
        tmrpcm.speakerPin = 9;
        //Serial.begin(9600);
        SD.begin(SD_ChipSelectPin);
        tmrpcm.quality(2);
        tmrpcm.setVolume(5);
        tmrpcm.play("counting.wav", 8);
        delay(1500);
        audio.stopPlayback();
        break;

        case 16:
        tmrpcm.speakerPin = 9;
        //Serial.begin(9600);
        SD.begin(SD_ChipSelectPin);
        tmrpcm.quality(2);
        tmrpcm.setVolume(5);
        tmrpcm.play("counting.wav", 10);
        delay(1500);
        audio.stopPlayback();
        break;
break;
}
    
case 2:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("counting.wav", 2);
    delay(1500);
    audio.stopPlayback();
    randStartTime2 = random(11,16);
      switch (randStartTime2) {
        case 11:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 0);
          delay(1500);
          audio.stopPlayback();
          break;
          
        case 12:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 2);
          delay(1500);
          audio.stopPlayback();
          break;

          case 13:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 4);
          delay(1500);
          audio.stopPlayback();
          break;

          case 14:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 6);
          delay(1500);
          audio.stopPlayback();
          break;

          case 15:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 8);
          delay(1500);
          audio.stopPlayback();
          break;

          case 16:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 10);
          delay(1500);
          audio.stopPlayback();
          break;
break;
}


case 3:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("counting.wav", 4);
    delay(1500);
    audio.stopPlayback();
    randStartTime2 = random(11,16);
      switch (randStartTime2) {
        case 11:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 0);
          delay(1500);
          audio.stopPlayback();
          break;
          
        case 12:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 2);
          delay(1500);
          audio.stopPlayback();
          break;

          case 13:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 4);
          delay(1500);
          audio.stopPlayback();
          break;

          case 14:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 6);
          delay(1500);
          audio.stopPlayback();
          break;

          case 15:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 8);
          delay(1500);
          audio.stopPlayback();
          break;

          case 16:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 10);
          delay(1500);
          audio.stopPlayback();
          break;
break;
}

case 4:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("counting.wav", 6);
    delay(1500);
    audio.stopPlayback();
    randStartTime2 = random(11,16);
      switch (randStartTime2) {
        case 11:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 0);
          delay(1500);
          audio.stopPlayback();
          break;
          
        case 12:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 2);
          delay(1500);
          audio.stopPlayback();
          break;

          case 13:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 4);
          delay(1500);
          audio.stopPlayback();
          break;

          case 14:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 6);
          delay(1500);
          audio.stopPlayback();
          break;

          case 15:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 8);
          delay(1500);
          audio.stopPlayback();
          break;

          case 16:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 10);
          delay(1500);
          audio.stopPlayback();
          break;
break;
}

    case 5:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("counting.wav", 8);
    delay(1500);
    audio.stopPlayback();
    randStartTime2 = random(11,16);
      switch (randStartTime2) {
        case 11:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 0);
          delay(1500);
          audio.stopPlayback();
          break;
          
        case 12:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 2);
          delay(1500);
          audio.stopPlayback();
          break;

          case 13:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 4);
          delay(1500);
          audio.stopPlayback();
          break;

          case 14:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 6);
          delay(1500);
          audio.stopPlayback();
          break;

          case 15:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 8);
          delay(1500);
          audio.stopPlayback();
          break;

          case 16:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 10);
          delay(1500);
          audio.stopPlayback();
          break;
      break;
      }

case 6:
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);
    tmrpcm.play("counting.wav", 10);
    delay(1500);
    audio.stopPlayback();
    randStartTime2 = random(11,16);
    break;
      switch (randStartTime2) {
        case 11:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 0);
          delay(1500);
          audio.stopPlayback();
          
          
        case 12:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 2);
          delay(1500);
          audio.stopPlayback();
          break;

          case 13:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 4);
          delay(1500);
          audio.stopPlayback();
          break;

          case 14:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 6);
          delay(1500);
          audio.stopPlayback();
          break;

          case 15:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 8);
          delay(1500);
          audio.stopPlayback();
          break;

          case 16:
          tmrpcm.speakerPin = 9;
          //Serial.begin(9600);
          SD.begin(SD_ChipSelectPin);
          tmrpcm.quality(2);
          tmrpcm.setVolume(5);
          tmrpcm.play("counting.wav", 10);
          delay(1500);
          audio.stopPlayback();
          break;
break;    
}
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
