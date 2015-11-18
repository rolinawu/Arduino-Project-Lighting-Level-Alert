void setup() {//set up all the code/pin, runs once
  int red = 10;
  int yellow = 6;
  int green = 5;

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);

  Serial.begin(9600);
  while (!Serial) {}


  //Project 4
  /*pinMode(6, OUTPUT); //Build in LED is located at pin 13 //Always initialized as output pins
    Serial.begin(9600);
    while(!Serial){
    }*/

}

void loop() { //runs continuously
  int red = 7;
  int yellow =6;
  int green = 5;
  int bob = 8;
  int sec = 1000;
  int state = digitalRead(bob);
  int photocell = analogRead(A0);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  Serial.println(photocell);
  if(state==HIGH){
    if (photocell < 200) { //super bright
      digitalWrite(red, LOW);
      delay(sec);
      digitalWrite(red, HIGH);
      delay(sec);
    } else if (photocell < 250) {
      digitalWrite(yellow, LOW);
      delay(sec);
      digitalWrite(yellow, HIGH);
      delay(sec);
    } else if ( photocell < 500) { //when bright
      digitalWrite(green, LOW);
      delay(sec);
      digitalWrite(green, HIGH);
      delay(sec);
      } else if ( photocell < 900) { //when bright
      digitalWrite(yellow, LOW);
      delay(sec);
      digitalWrite(yellow, HIGH);
      delay(sec);
    } else { //When its too dark, photocell>500
      digitalWrite(red, LOW);
      delay(sec);
      digitalWrite(red, HIGH);
      delay(sec);
    }
  }
  //Project 1
  /*digitalWrite(13, HIGH); //Turn the LED to 0 V(Turns it off)
    delay (2000);
    digitalWrite(13, LOW); //Turn the LED to 5 V(Turns it on)
    delay (1000); // 1sec =1000 ms*/
  //Project 2
  /*digitalWrite(3, HIGH); //Turn the LED to 0 V(Turns it off)
    delay (2000);
    digitalWrite(3, LOW); //Turn the LED to 5 V(Turns it on)
    delay (1000); // 1sec =1000 ms*/
  //Project 3
  /*if (digitalRead(2)==HIGH){
    digitalWrite(3,HIGH);
    }else{
    digitalWrite(3,LOW);
    }*/
  //or
  /*
    int state = digitalRead(2);
    //read the switch state
    digitalWrite(3,state);*/
  //Project 4
  /*int photocell = analogRead(A0);
    if(photocell<200){
    digitalWrite(6,LOW);
    }else if(photocell< 500){//when bright
    digitalWrite(6,LOW);
    delay(photocell*2);
    digitalWrite(6,HIGH);
    delay(photocell*2);
    }else{//When its too dark, photocell>500
    digitalWrite(6,HIGH);*/
  /*
    digitalWrite(6,HIGH);
    delay(photocell);
    digitalWrite(6,LOW);
    delay(photocell);
    Serial.println(photocell);
    //need to open Serial Monitor(in Tools Menu)*/
  //Project 5
  /*
    digitalWrite(red, HIGH);
    delay(5*sec);
    digitalWrite(yellow,HIGH);
    delay(3*sec);
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(yellow, LOW);
    delay(5*sec);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,LOW);
    delay(3*sec);
    digitalWrite(yellow,LOW);
  */

}


//loop() runs continuously
// pinMode #pin,Type
// TYPE = INPUT or OUTPUT
// i.e. pinMode(11,OUTPUT)
//or
// DigitalWrite(pin#,STATE)
//Serial.begin(9600)

//long leg is positive terminal, short is negative

//why do we need the resistor before the LED?
//just to drop the current, but it doesnt matter where it is
