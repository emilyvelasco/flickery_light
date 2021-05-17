/*
  This sketch will flicker an LED attached to pin 9 of an Arduino using the analogWrite()
  function. It is similar to flickery_light.ino, except it "warms up," with the flickering
  becoming less and less until the light stays on steadily.
  If you connect an LED directly to the pin, be sure to use an appropriate value
  current-limiting resistor. To control higher-power LEDS, use a MOSFET breakout board
  like the ones found here:
  www.amazon.com/High-Power-Transistor-Driving-Controller-Electronic/dp/B07XJSRY6B/

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  Code roughly based on the Fade sketch found here:
  http://www.arduino.cc/en/Tutorial/Fade
*/

int led = 9;           // the PWM pin the LED is attached to
int randomLevel;
int lightLevel;
int cutoffValue;
int bottomRandom;


// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
  cutoffValue = 100;
  bottomRandom = 20;

}

// the loop routine runs over and over again forever:
void loop() {
  
  //picks a random number that will determine if the light is turned on or off
  randomLevel = random(0,100);
  
  //picks a random number for how bright the light will be if it is turned on
  lightLevel = random(bottomRandom,255);
  
  /*decrement the light cutoff level so that the light flickers off
  less often the longer the sketch runs*/
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
/*increase the minimum brightness value until it reaches full brightness
replace 254 and 255 with lower values to maintain some flicker*/
  if(bottomRandom > 254) {
    bottomRandom = 255;
}
else {
    bottomRandom ++;
}
  


}
