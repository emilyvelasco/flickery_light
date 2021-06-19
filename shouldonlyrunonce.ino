#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;
TMRpcm audio;

int led = 3; // the PWM pin the LED is attached to
int randomLevel;
int lightLevel;
int cutoffValue;
int bottomRandom;
long randStartTime;
long randStartTime2;

// STINE added
// -------------- BEGIN GLOBAL VARIABLE DECLARATIONS -----------------

const int numClips = 6; // total num of clips/segments
const int clipsToPlay = 2; // number of clips to play
int seqLength = 2; // length in seconds of each sequence
int array[numClips];

char* filename = (char *)"counting.wav";
// ^^^ don't think this is necessary but i did it because the cpp threw a warning
// ref: casting char* & tmrpcm library - https://forum.arduino.cc/t/warning-iso-c-forbids-converting-a-string-constant-to-char-wwrite-string/627378

// -------------- END GLOBAL VARIABLE DECLARATIONS -----------------



// -------------- BEGIN HELPER FUNCTIONS -----------------

// This function plays whatever audio clip it is passed (startTime)
// NOTE on casting char* & tmrpcm library: https://forum.arduino.cc/t/warning-iso-c-forbids-converting-a-string-constant-to-char-wwrite-string/627378
void playAudioClip(char* filename, unsigned long startTime) {
    tmrpcm.play(filename, startTime);
    delay(1500);
    audio.stopPlayback();
}

// swap is a helper function used in makeRandomArray
void swap(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
}

// This 'generates' a list of randomNums of given length
// Shoutout to https://forum.arduino.cc/t/generate-array-with-random-values/66323/2
void makeRandomArray(int length) {

    // Assigns initial array values to index of value
    for (int i=0; i < length; i++) {
        array[i] = i;
    };

    // To 'randomize', swaps positions of values
    for (int i=0; i < length; i++) {
        int randomIndex = random(length);
        swap(randomIndex, array[i]);
    };

}
// -------------- END HELPER FUNCTIONS -----------------

void setup() {
    pinMode(led, OUTPUT);
    cutoffValue = 100;
    bottomRandom = 0;
    randomSeed(analogRead(0));

    randStartTime = random(1, 6);
    lightLevel = random(55, 255);

    // These look the same across all switch/cases,
    // Does it only need to be declared/init once?
    tmrpcm.speakerPin = 9;
    //Serial.begin(9600);
    SD.begin(SD_ChipSelectPin);
    tmrpcm.quality(2);
    tmrpcm.setVolume(5);

    // ---- START move ----  moved out of loop so it only runs once

    // Swaps array in-place
    makeRandomArray(numClips);

    // plays all clips but can set this to play however many

    for(int i=0; i < clipsToPlay; i += 1) {
        // multiply by 2 because it assumes each segment is 2 sec each
        randStartTime = array[i] * seqLength;
        playAudioClip(filename, randStartTime);
    }

    // ---- END move ----
}

void loop() {

    /* ----------------------------
        THIS STUFF LOOKS LIKE LED STUFF
        SO I DIDNT TOUCH IT
    ------------------------------------- */

    // picks a random number that will determine if the light is turned on or off
    randomLevel = random(0, 100);

    // picks a random number for how bright the light will be if it is turned on
    lightLevel = random(bottomRandom, 255);

    /*the cutoff level for whether the light is on or off.
    increase this value to have the light turn off more
    of the time. degrease it to have the light on more
    of the time*/
    cutoffValue--;

    // if randomlevel is greater or equal to cutoffvalue, turn the light on
    if (randomLevel >= cutoffValue) {
        // set the brightness of the light
        // based on a random value chosen btween 100 and 255
        analogWrite(led, lightLevel);
    } else {
        // if randomlevel is less than cutoffvalue, turn the light off
        analogWrite(led, 0);
        delay(5);
    }
    delay(70);

    if (bottomRandom > 254) {
        bottomRandom = 255;
    } else {
        bottomRandom++;
    };
}
