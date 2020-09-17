
#define Button 8      //Assigning pin 8 to Button

int randNumber;       //Integer to save Random numbers

void setup(){
  //Setting Switch pin as INPUT. 
  //All switches should be configured as INTERNAL_PULLUP
  pinMode(Button,INPUT_PULLUP);

  //Setting LEDs as OUTPUT
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

  //Turning all LEDs OFF
  AllLEDsOFF();

  //Assigning a seed value for the Random function to start with
  randomSeed(analogRead(0));
}

void loop() {
  // generate a random number from 2 to 7
  if(!digitalRead(Button)) {    //Check if the button is pressed
    AllLEDsOFF();
    randNumber = random(2, 8);
  }
  //Turn ON the LED based in Random number
  digitalWrite(randNumber,HIGH);
}

void AllLEDsOFF(){
  // Function to turn OFF all LEDs
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

