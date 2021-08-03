/* Interfacing Button to Arduino Uno 
 *  Turn on and off LED when pushbutton is pressed .
    
 * Hardware Components:
 *  Arduino Uno
 *  Button
 *  LED
 *  
 * Hardware Connection:
 *  D3 of Arduino Uno is connected to the Button
 *  D4 of Arduino Uno is connected to the LED
 * 
 * Author : Sahana B G
 * Date   : 30 Apr 2021
 */

 // Pin initialization 
 const int BUTTON = 3;
 const int LED = 4;

 // Variable to store state of button
 static int buttonState;

 void setup()
 {
  // Configuring I/O pins
  pinMode(BUTTON,INPUT);
  pinMode(LED,OUTPUT);
 }

 void loop()
 {
 // Read the state of the pushbutton 
 buttonState=digitalRead(BUTTON);

 // Turn ON/OFF LED depending on the button state
 digitalWrite(LED,buttonState);
 }
