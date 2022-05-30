//Code by LabRatMatt for Arduino Drum Bot Project on Instructables:
//Attach two servos to Arduino PWM pins and assign pin numbers below

#include <Servo.h>
Servo servoA;
Servo servoB;
Servo servoC;
Servo servoD;
Servo servoE;
Servo servoF;
Servo servoG;
Servo servoH;

int srvoA = 5; //assign digital pwm pin for Left servo
int srvoB = 6; //assign digital pwm pin for Right servo
int srvoC = 7; //assign digital pwm 
int srvoD = 8; //assign digital pwm 
int srvoE = 9; //assign digital pwm 
int srvoF = 10; //assign digital pwm 
int srvoG = 11; //assign digital pwm 
int srvoH = 12; //assign digital pwm 

int LED = 13; // assign digital pin for LED (on most boards, there is already an LED on pin 13
//musical things
int bpm = 90; //beats per minute
int timeSig = 4; //regular time signature (beats per measure)
int Tbeat = 60000/bpm; //time per beat in milliseconds is one minute divided by beats per minute
int beat = 1; //start the fist measure with the first beat
int measure = 1; //start with the first measure
//servo control
int travel = 35; //in degrees, how far does the servo need to turn
int Tservo = 130; //time allowed for servo to reach position before further instruction in milliseconds

void setup() {
  //setup code here, to run once:
  //establish each pin mode
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  //setup the servos at set at zero
  servoA.attach(srvoA);
  servoB.attach(srvoB);
  servoC.attach(srvoC);
  servoD.attach(srvoD);
  servoE.attach(srvoE);
  servoF.attach(srvoF);
  servoG.attach(srvoG);
  servoH.attach(srvoH);
  
  servoA.write(0);
  servoB.write(0);
  servoC.write(0);
  servoD.write(0);
  servoE.write(0);
  servoF.write(0);
  servoG.write(0);
  servoH.write(0);
  
}

void beatTEST(){
  servoA.write(travel);
  servoB.write(travel);
  servoC.write(travel); 
  servoD.write(travel);
  servoE.write(travel);
  servoF.write(travel);
  servoG.write(travel);
  servoH.write(travel);
  delay(60000/bpm);
  servoA.write(0);
  servoB.write(0);
  servoC.write(0);
  servoD.write(0);
  servoE.write(0);
  servoF.write(0);
  servoG.write(0);
  servoH.write(0);
  delay(60000/bpm);
}

void quarterBeatA(){
  servoA.write(travel);
  delay(Tservo);
  servoA.write(0);
  delay((60000/bpm)-Tservo);
}

void quarterBeatB(){
  servoB.write(travel);
  delay(Tservo);
  servoB.write(0);
  delay((60000/bpm)-Tservo);
}
void quarterBeatC(){
  servoC.write(travel);
  delay(Tservo);
  servoC.write(0);
  delay((60000/bpm)-Tservo);
}

void quarterBeatD(){
  servoD.write(travel);
  delay(Tservo);
  servoD.write(0);
  delay((60000/bpm)-Tservo);
}
void quarterBeatE(){
  servoE.write(travel);
  delay(Tservo);
  servoE.write(0);
  delay((60000/bpm)-Tservo);
}
void quarterBeatF(){
  servoF.write(travel);
  delay(Tservo);
  servoF.write(0);
  delay((60000/bpm)-Tservo);
}
void quarterBeatG(){
  servoG.write(travel);
  delay(Tservo);
  servoG.write(0);
  delay((60000/bpm)-Tservo);
}
void quarterBeatH(){
  servoH.write(travel);
  delay(Tservo);
  servoH.write(0);
  delay((60000/bpm)-Tservo);
}
void eighthBeatA(){
  servoA.write(travel);
  delay(Tservo);
  servoA.write(0);
  delay((30000/bpm)-Tservo);
}
void eighthBeatB(){
  servoB.write(travel);
  delay(Tservo);
  servoB.write(0);
  delay((30000/bpm)-Tservo);
}
  void eighthBeatC(){
  servoC.write(travel);
  delay(Tservo);
  servoC.write(0);
  delay((30000/bpm)-Tservo); 
}
 void eighthBeatD(){
  servoD.write(travel);
  delay(Tservo);
  servoD.write(0);
  delay((30000/bpm)-Tservo);

  
}
void eighthBeatE(){
  servoE.write(travel);
  delay(Tservo);
  servoE.write(0);
  delay((30000/bpm)-Tservo);
}
void eighthBeatF(){
  servoF.write(travel);
  delay(Tservo);
  servoF.write(0);
  delay((30000/bpm)-Tservo);
}
void eighthBeatG(){
  servoG.write(travel);
  delay(Tservo);
  servoG.write(0);
  delay((30000/bpm)-Tservo);
}
void eighthBeatH(){
  servoH.write(travel);
 delay(Tservo);
  servoH.write(0);
  delay((30000/bpm)-Tservo);  
}
void teenthBeatA(){
  servoA.write(travel);
  delay(Tservo);
  servoA.write(0);
  delay((15000/bpm)-Tservo);
}
void teenthBeatB(){
  servoB.write(travel);
  delay(Tservo);
  servoB.write(0);
  delay((15000/bpm)-Tservo);
}
void teenthBeatC(){
  servoC.write(travel);
  delay(Tservo);
  servoC.write(0);
  delay((15000/bpm)-Tservo);
}
void teenthBeatD(){
  servoD.write(travel);
  delay(Tservo);
  servoD.write(0);
  delay((15000/bpm)-Tservo);
}
void teenthBeatE(){
  servoE.write(travel);
  delay(Tservo);
  servoE.write(0);
  delay((15000/bpm)-Tservo);
}
void teenthBeatF(){
  servoF.write(travel);
  delay(Tservo);
  servoF.write(0);
  delay((15000/bpm)-Tservo);
}
void teenthBeatG(){
  servoG.write(travel);
  delay(Tservo);
  servoG.write(0);
  delay((15000/bpm)-Tservo);
}
void teenthBeatH(){
  servoH.write(travel);
  delay(Tservo);
  servoH.write(0);
  delay((15000/bpm)-Tservo);
}




void loop() {
  // put your main code here, to run repeatedly:
  if(measure == 1){ //a set of four quarter notes. A loop based on beats per measure would be more efficient but I am lazy

   // INTRODUCTION INTRODUCTION INTRODUCTION INTRODUCTION INTRODUCTION 
   

    
    
    
 
    
  
    quarterBeatA();

     quarterBeatD();

      quarterBeatF();
    eighthBeatD();
    eighthBeatE();
  //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
 //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
       //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();

 

    measure = 2;
  }
  
  
  if(measure == 2){ 
  
    eighthBeatA();
eighthBeatD();
     eighthBeatA();
eighthBeatD();
      eighthBeatF();
      eighthBeatG();
    eighthBeatD();
    eighthBeatE();
  //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
 //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
       //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();

  

  
    measure = 3;
  }

if(measure == 3){


     eighthBeatA();
     
teenthBeatD();
teenthBeatE();
     eighthBeatA();
teenthBeatD();
teenthBeatE();
    
      teenthBeatF();
      teenthBeatB();
      teenthBeatG();
      teenthBeatC();
    eighthBeatD();
    eighthBeatE();
  //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
 //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
       //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
   

     eighthBeatA();
teenthBeatD();
teenthBeatE();
      eighthBeatA();
teenthBeatD();
teenthBeatE();
    
      teenthBeatF();
      teenthBeatB();
      teenthBeatG();
      teenthBeatC();
    eighthBeatD();
    eighthBeatE();
  //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
 //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
       //SECOND 
 quarterBeatA();
eighthBeatE();
     quarterBeatD();
eighthBeatB();
      quarterBeatF();
 
 
    measure = 3;
  }
  if(measure == 4){ 
   

  
    measure = 1;
  
  }
  if(measure == 5){
   

     measure = 5;
  }
}
