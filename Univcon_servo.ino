#include <Servo.h>

Servo myservo;   

int  cepetnya=8;//milidetik  x 2
byte turun_naik;
byte batas_bawah=0;//derajat
byte batas_atas=120;//derajat
byte celuptehnya_brapakali=100;
byte ulangi=0;

void setup() {
  myservo.attach(15);   
}

void loop() {
  for (ulangi=ulangi;ulangi<celuptehnya_brapakali;ulangi++){
    
      for (turun_naik=batas_bawah;turun_naik<batas_atas;turun_naik++){
      myservo.write(turun_naik); 
      delay(cepetnya);
      } 
      for (turun_naik=batas_atas;turun_naik>batas_bawah;turun_naik--){
      myservo.write(turun_naik); 
      delay(cepetnya);
      } 
  } 
}
