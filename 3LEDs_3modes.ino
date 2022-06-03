                        
int buttonRight = 2;                                     // defnine the buttons and the LEDs
int buttonMiddle = 3;
int buttonLeft = 4;
int ledBlue = 5;
int ledWhite = 6;
int ledRed = 7;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed,OUTPUT);                                //make the LED's and the button's pins an output
  pinMode(ledWhite,OUTPUT);
  pinMode(ledBlue,OUTPUT);
  pinMode(buttonRight,INPUT);
  pinMode(buttonMiddle,INPUT);
  pinMode(buttonLeft,INPUT);

  digitalWrite(ledRed,HIGH);                             //make that the LEDs aren't turned on immediately (they are inverted)
  digitalWrite(ledWhite,HIGH);
  digitalWrite(ledBlue,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

 if(digitalRead(buttonLeft)==LOW){                        //if the left button is pushed the LEDs blink in a certain way
  digitalWrite(ledRed,LOW);                               //the red LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);
  delay(100);  
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                              //the blue LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);                             //the white LED is being turned on and off with a 100ms delay
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                               //the red LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);
  delay(100);  
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                              //the blue LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);                             //the white LED is being turned on and off with a 100ms delay
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                               //the red LED is being turned on and off 2 times with a 100ms delay
  delay(100); 
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);
  delay(100);  
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                               //the blue LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);                             //the white LED is being turned on and off with a 100ms delay
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                               //the red LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);
  delay(100);  
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                               //the blue LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);                              //the white LED is being turned on and off with a 100ms delay
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                                //the red LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);
  delay(100);  
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                               //the blue LED is being turned on and off 2 times with a 100ms delay
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);                               //the white LED is being turned on and off with a 100ms delay
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
                                                            //the circuit ends
  }

 if(digitalRead(buttonMiddle)==LOW){                         //if the middle button is pushed the LEDs blink in a certain way
  digitalWrite(ledBlue,LOW);                                 //the blue LED turns on, afer a 100ms delay the white LED also turns on and stays on for 100ms, then the blue LED turns off 
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);                                
  delay(100);                                                
  digitalWrite(ledRed,LOW);                                   //the red LED turns on, after a 100ms delay the white LED also turns on and stays on for 100ms, then the red LED turns off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                                  //the blue LED turns on, afer a 100ms delay the white LED also turns on and stays on for 100ms, then the blue LED turns off                               
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                                   //the red LED turns on, after a 100ms delay the white LED also turns on and stays on for 100ms, then the red LED turns off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                                  //the blue LED turns on, afer a 100ms delay the white LED also turns on and stays on for 100ms, then the blue LED turns off
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                                   //the red LED turns on, after a 100ms delay the white LED also turns on and stays on for 100ms, then the red LED turns off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                                  //the blue LED turns on, afer a 100ms delay the white LED also turns on and stays on for 100ms, then the blue LED turns off
  delay(100); 
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                                   //the red LED turns on, after a 100ms delay the white LED also turns on and stays on for 100ms, then the red LED turns off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                                  //the blue LED turns on, afer a 100ms delay the white LED also turns on and stays on for 100ms, then the blue LED turns off
  delay(100); 
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                                   //the red LED turns on, after a 100ms delay the white LED also turns on and stays on for 100ms, then the red LED turns off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                                  //the blue LED turns on, afer a 100ms delay the white LED also turns on and stays on for 100ms, then the blue LED turns off
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                                   //the red LED turns on, after a 100ms delay the white LED also turns on and stays on for 100ms, then the red LED turns off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
  digitalWrite(ledBlue,LOW);                                  //the blue LED turns on, afer a 100ms delay the white LED also turns on and stays on for 100ms, then the blue LED turns off
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledBlue,HIGH);
  delay(100);
  digitalWrite(ledRed,LOW);                                   //the red LED turns on, after a 100ms delay the white LED also turns on and stays on for 100ms, then the red LED turns off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledRed,HIGH);
  delay(100);
 }

 if(digitalRead(buttonRight)==LOW){                           //if the right button is pushed the LEDs blink in a certain way
  digitalWrite(ledBlue,LOW);                                  //the blue LED turns on and off 3 times with a 400ms delay after it was turned on and a 200ms delay after it was turned off
  delay(400);
  digitalWrite(ledBlue,HIGH);
  delay(200);
  digitalWrite(ledBlue,LOW);
  delay(400);
  digitalWrite(ledBlue,HIGH);
  delay(200);
  digitalWrite(ledBlue,LOW);
  delay(400);
  digitalWrite(ledBlue,HIGH);
  delay(200);
  
  digitalWrite(ledWhite,LOW);                                //the white LED turns on and off 9 times with a 100ms delay every time after it was turned on or off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);

  digitalWrite(ledRed,LOW);                                 //the red LED turns on and off 3 times with a 400ms delay after it was tuned on and a 200ms delay after it was turned off
  delay(400);
  digitalWrite(ledRed,HIGH);
  delay(200);
  digitalWrite(ledRed,LOW);
  delay(400);
  digitalWrite(ledRed,HIGH);
  delay(200);
  digitalWrite(ledRed,LOW);
  delay(400);
  digitalWrite(ledRed,HIGH);
  delay(200);

  
  digitalWrite(ledWhite,LOW);                               //the white LED turns on and off 9 times with a 100ms delay every time after it was turned on or off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);

   digitalWrite(ledBlue,LOW);                                 //the blue LED turns on and off 3 times with a 400ms delay after it was turned on and a 200ms delay after it was turned off
  delay(400);
  digitalWrite(ledBlue,HIGH);
  delay(200);
  digitalWrite(ledBlue,LOW);
  delay(400);
  digitalWrite(ledBlue,HIGH);
  delay(200);
  digitalWrite(ledBlue,LOW);
  delay(400);
  digitalWrite(ledBlue,HIGH);
  delay(200);

  digitalWrite(ledWhite,LOW);                                //the white LED turns on and off 9 times with a 100ms delay every time after it was turned on or off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);

  digitalWrite(ledRed,LOW);                                   //the red LED turns on and off 3 times with a 400ms delay after it was tuned on and a 200ms delay after it was turned off
  delay(400);
  digitalWrite(ledRed,HIGH);
  delay(200);
  digitalWrite(ledRed,LOW);
  delay(400);
  digitalWrite(ledRed,HIGH);
  delay(200);
  digitalWrite(ledRed,LOW);
  delay(400);
  digitalWrite(ledRed,HIGH);
  delay(200);

  digitalWrite(ledWhite,LOW);                                //the white LED turns on and off 9 times with a 100ms delay every time after it was turned on or off
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);
  digitalWrite(ledWhite,LOW);
  delay(100);
  digitalWrite(ledWhite,HIGH);
  delay(100);

 }
}
