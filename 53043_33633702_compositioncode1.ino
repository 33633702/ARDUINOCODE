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
    quarterBeatA();
    
    quarterBeatA();
    quarterBeatA();


   
    quarterBeatA();
    quarterBeatE();
    quarterBeatD();
    quarterBeatE();

    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    eighthBeatA();
    eighthBeatC();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();

    quarterBeatA();
    quarterBeatE();
    quarterBeatD();
    quarterBeatE();
    
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    eighthBeatA();
    eighthBeatC();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();

    quarterBeatA();
    quarterBeatE();
    
    quarterBeatD();
    quarterBeatE();
    
    quarterBeatA();
    quarterBeatE();
    
    quarterBeatD();
    quarterBeatE();
    
    quarterBeatA();
    quarterBeatE();
    
    quarterBeatD();
    quarterBeatE();

    quarterBeatA();
    quarterBeatE();

    quarterBeatD();
    quarterBeatE();
    

    
    measure = 2;
  }
  if(measure == 2){ 
    

    
      //RIFF 1  16 times 
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();


    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    //repeat
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH(); 

    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
  
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    

    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();  
 //repeat
 
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();


    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
     //repeat
     
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH(); 

    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
  
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    

    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();  
    measure = 3 ;
  }
    if(measure == 3){ // CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
// 4NOTE RUN AND RIFF 1 X 3
  
 
    
    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
  //REPEAT
    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();

    
//REPEAT
    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
// REPEAT
    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
 
    
 
    measure = 4;
  }
  if(measure == 4){ //DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
   
    
    
//    BACK AND FORTH and riff 1 X 3

   
    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
   //    BACK AND FORTH   repeat 2

    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
//    BACK AND FORTH      repeat3
    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
   //    BACK AND FORTH          repeat 4

    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();

     
   
    measure = 5;
  }
    if(measure == 5){ //a set of four quarter notes. A loop based on beats per measure would be more efficient but I am lazy
 
    measure = 6;
  }
  if(measure == 6){ //a set of 8 eighth notes.  not perfectly in time because the motors are slow

    // TRIPLETS 
    teenthBeatA();
    teenthBeatF();
    teenthBeatD();
    teenthBeatE();
    teenthBeatD();
    teenthBeatF();
   
    
    teenthBeatA();
    teenthBeatF();
    teenthBeatD();
    teenthBeatE();
    teenthBeatD();
    teenthBeatF();
  
   
    teenthBeatA();
    teenthBeatF();
    teenthBeatD();
    teenthBeatE();
    teenthBeatD();
    teenthBeatF();
   
    
    teenthBeatA();
    teenthBeatF();
    teenthBeatD();
    teenthBeatE();
    teenthBeatD();
    teenthBeatF();
   
    teenthBeatA();
    teenthBeatF();
    teenthBeatD();
    teenthBeatE();
    teenthBeatD();
    teenthBeatF();
   
 
   

    
    measure = 7;
  }
    if(measure == 7){ //a set of four quarter notes. A loop based on beats per measure would be more efficient but I am lazy


// SLOW DOWN 4 & 8
   quarterBeatA();
   quarterBeatE();
   quarterBeatG();
   quarterBeatE();
   quarterBeatF();
   quarterBeatE();
   quarterBeatH();
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   quarterBeatA();
   quarterBeatE();
   quarterBeatG();
   quarterBeatE();
   quarterBeatF();
   quarterBeatE();
   quarterBeatH();
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   eighthBeatA();
   eighthBeatE();
   eighthBeatG();
   eighthBeatE();
   eighthBeatF();
   eighthBeatE();
   
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   eighthBeatA();
   eighthBeatE();
   eighthBeatG();
   eighthBeatE();
   eighthBeatF();
   eighthBeatE();
   
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();
   measure = 8;
  }

  
  if(measure == 8){ 
   // SLOW DOWN 4 & 8
   quarterBeatA();
   quarterBeatE();
   quarterBeatG();
   quarterBeatE();
   quarterBeatF();
   quarterBeatE();
   quarterBeatH();
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   quarterBeatA();
   quarterBeatE();
   quarterBeatG();
   quarterBeatE();
   quarterBeatF();
   quarterBeatE();
   quarterBeatH();
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();
   
   eighthBeatA();
   eighthBeatE();
   eighthBeatG();
   eighthBeatE();
   eighthBeatF();
   eighthBeatE();
   
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   eighthBeatA();
   eighthBeatE();
   eighthBeatG();
   eighthBeatE();
   eighthBeatF();
   eighthBeatE();
   
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   
    measure = 9;
  }
    if(measure == 9){ 
      
   // 16ths
   
   
   teenthBeatA();
   teenthBeatE();
   teenthBeatG();
   teenthBeatE();
  
   
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   teenthBeatA();
   teenthBeatE();
   teenthBeatG();
   teenthBeatE();
  
   
   teenthBeatB();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();
 
  // 16th push A
 
   
   teenthBeatA();
   teenthBeatE();
   teenthBeatG();
   teenthBeatE();
  
   teenthBeatA();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   teenthBeatA();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

   teenthBeatA();
   teenthBeatC();
   teenthBeatG();
   teenthBeatH();

    measure = 10;
  }
  if(measure == 10){ //a set of 8 eighth notes.  not perfectly in time because the motors are slow
     // CALYPSO DROP
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();
    //     CALYPSO DROP repeat 2
     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();
 //repeat  CALYPSO DROP   3
     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();
 //repeat   CALYPSO DROP   4
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();

    

    
   
    measure = 11;
  }
   if(measure == 11){ 
 
    measure = 12;
  }
  if(measure == 12){ 
   // ECLUDIAN
  
  
  
  teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();

  teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();

      teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();

      teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatD();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();


// left side
  
teenthBeatA();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();

  
    teenthBeatA();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
  
    
    teenthBeatA();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();

    
    teenthBeatA();
    teenthBeatH();
    teenthBeatE();
    teenthBeatA();
    teenthBeatE();
    teenthBeatH();
    teenthBeatA();
    teenthBeatE();
//right side
   teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();

  teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();

      teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();

      teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatE();
    teenthBeatD();
    teenthBeatC();
    teenthBeatE();
    teenthBeatC();


// left side
  
teenthBeatA();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();

  
    teenthBeatA();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
  
    
    teenthBeatA();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    teenthBeatF();

    
    teenthBeatA();
    teenthBeatH();
    teenthBeatE();
    teenthBeatA();
    teenthBeatE();
    teenthBeatH();
    teenthBeatA();
    teenthBeatE();
   
    measure = 13 ;
  }
  if(measure == 13){ 
 
// CALYPSO DROP
  teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();
   // CALYPSO DROP 
     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();
// CALYPSO DROP
     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();
//CALYPSO DROP
     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

     teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatE();
    teenthBeatF();
    teenthBeatD();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatA();
    teenthBeatG();
    teenthBeatF();
    teenthBeatD();
    teenthBeatF();

   
   

   
    measure = 11 ;
  }

   if(measure == 11){ 
    
  

    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
   //    BACK AND FORTH   repeat 2

    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();


    
  
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
   //    BACK AND FORTH   repeat 2

    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();

    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    

   //    BACK AND FORTH   repeat 2

    teenthBeatA();
    eighthBeatD();
    teenthBeatA();
    eighthBeatD();
    eighthBeatD();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();

   
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
  
    
   //    BA


    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
  //REPEAT
    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();

    
//REPEAT
    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
    
// REPEAT
    teenthBeatA();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
    
    teenthBeatG();
    teenthBeatF();
    teenthBeatE();
    teenthBeatH();
 
       
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
    teenthBeatH();
   
   
    teenthBeatA();
    teenthBeatB();
    teenthBeatC();
    teenthBeatD();
    teenthBeatE();
    teenthBeatF();
    teenthBeatG();
   
    
    measure = 21 ;
   }  
}
