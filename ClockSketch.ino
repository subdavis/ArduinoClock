/*
 * Time sketch
 *
 */

#include <Time.h>
#include <Wire.h>
#include <DS1307RTC.h>

int hourchange = hour();
int buttonState = 0;

void setup()
{
  setSyncProvider(RTC.get);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, INPUT);
  
}

void loop()
{
  delay(1000);
  //Check for hour change
  if (hourchange != hour()){
    dance();
  }
  hourchange = hour();
  //Breaks time into tens place and ones place
  int hour1 = hourFormat12()/10;
  int hour2 = hourFormat12() - hour1 * 10;
  int minute1 = minute()/10;
  int minute2 = minute() - minute1 * 10;
  
  //Checks for pushbotton toggle LED display
  buttonState = digitalRead(1);
  if (buttonState == HIGH){
    //Tens place for Hours
  
  if (hour1 == 0) {digitalWrite(13, LOW);}
  else digitalWrite(13, HIGH);
  
  //Ones place for Hours
  
  if (hour2 == 0){
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
  else if (hour2 == 1){
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  else if (hour2 == 2){
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);

  }
  else if (hour2 == 3){
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);

  }
  else if (hour2 == 4){
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);

  }
  else if (hour2 == 5){
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);

  }
  else if (hour2 == 6){
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);

  }
  else if (hour2 == 7){
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);

  }
  else if (hour2 == 8){
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }
  else if (hour2 == 9){
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }
  
  //Tens Place for Minutes
  
  if (minute1 == 0){
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
  else if (minute1 == 1){
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
  else if (minute1 == 2){
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);

  }
  else if (minute1 == 3){
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);

  }
  else if (minute1 == 4){
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);

  }
  else if (minute1 == 5){
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);

  }
  else if (minute1 == 6){
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);

  }
  
  //Minutes Ones Place
  
  if (minute2 == 0){
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
  else if (minute2 == 1){
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
  }
  else if (minute2 == 2){
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);

  }
  else if (minute2 == 3){
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);

  }
  else if (minute2 == 4){
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);

  }
  else if (minute2 == 5){
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);

  }
  else if (minute2 == 6){
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);

  }
  else if (minute2 == 7){
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);

  }
  else if (minute2 == 8){
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  else if (minute2 == 9){
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  
 
  }
  
  else {
    off();
    delay(1500);
    while(digitalRead(1) == HIGH){
      delay(500);
    }
  }
}

void dance()
{
off();
delay(200);
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(8, HIGH);
digitalWrite(5, HIGH);
delay(400);
digitalWrite(11, HIGH);
digitalWrite(7, HIGH);
digitalWrite(4, HIGH);
delay(400);
digitalWrite(10, HIGH);
digitalWrite(6, HIGH);
digitalWrite(3, HIGH);
delay(400);
digitalWrite(9, HIGH);
digitalWrite(2, HIGH);
delay(400);
digitalWrite(9, LOW);
digitalWrite(2, LOW);
delay(400);
digitalWrite(10, LOW);
digitalWrite(6, LOW);
digitalWrite(3, LOW);
delay(400);
digitalWrite(11, LOW);
digitalWrite(7, LOW);
digitalWrite(4, LOW);
delay(400);
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(8, LOW);
digitalWrite(5, LOW);
delay(400);
digitalWrite(13, HIGH);
delay(200);
digitalWrite(12, HIGH);
delay(200);
digitalWrite(11, HIGH);
delay(200);
digitalWrite(10, HIGH);
delay(200);
digitalWrite(9, HIGH);
delay(200);
digitalWrite(6, HIGH);
delay(200);
digitalWrite(7, HIGH);
delay(200);
digitalWrite(8, HIGH);
delay(200);
digitalWrite(5, HIGH);
delay(200);
digitalWrite(4, HIGH);
delay(200);
digitalWrite(3, HIGH);
delay(200);
digitalWrite(2, HIGH);
delay(200);
digitalWrite(13, LOW);
delay(200);
digitalWrite(12, LOW);
delay(200);
digitalWrite(11, LOW);
delay(200);
digitalWrite(10, LOW);
delay(200);
digitalWrite(9, LOW);
delay(200);
digitalWrite(6, LOW);
delay(200);
digitalWrite(7, LOW);
delay(200);
digitalWrite(8, LOW);
delay(200);
digitalWrite(5, LOW);
delay(200);
digitalWrite(4, LOW);
delay(200);
digitalWrite(3, LOW);
delay(200);
digitalWrite(2, LOW);
delay(400);
digitalWrite(9, HIGH);
digitalWrite(5, HIGH);
delay(200);
digitalWrite(10, HIGH);
digitalWrite(4, HIGH);
delay(200);
digitalWrite(11, HIGH);
digitalWrite(3, HIGH);
delay(200);
digitalWrite(12, HIGH);
digitalWrite(2, HIGH);
delay(200);
digitalWrite(2, LOW);
digitalWrite(12, LOW);
delay(200);
digitalWrite(3, LOW);
digitalWrite(11, LOW);
delay(200);
digitalWrite(4, LOW);
digitalWrite(10, LOW);
delay(200);
digitalWrite(5, LOW);
digitalWrite(9, LOW);
delay(400);
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
delay(400);
off();
delay(400);
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, HIGH);
delay(400);
off();
delay(400);
}

void off(){
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
}
