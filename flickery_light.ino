/*
  This sketch will flicker an LED attached to pin 9 of an Arduino using the analogWrite()
  function. If you connect an LED directly to the pin, be sure to use an appropriate value
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



// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  
  //picks a random number that will determine if the light is turned on or off
  int randomLevel = random(0,100);
  
  //picks a random number for how bright the light will be if it is turned on
  int lightLevel = random(100,255);
  
  /*the cutoff level for whether the light is on or off.
  increase this value to have the light turn off more
  of the time. degrease it to have the light on more
  of the time*/
  int cutoffValue = 3;

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
}
