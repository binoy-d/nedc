/*
 * --------------------------------
 *                 2
 *        ____________________
 *       |fl                fr|
 *       |                    |
 *    1  |                    |  3 
 *       |                    |
 *       |bl________________br|
 *                 
 *                 4
 * --------------------------------
 */

#include <Servo.h>

// create all linear servos
Servo frontRight;
Servo frontLeft;
Servo backRight;
Servo backLeft;

void setup() {
  // attach all linear servos
  frontRight.attach(6);
  frontLeft.attach(9);
  backRight.attach(10);
  backLeft.attach(11);    
}

void loop() {
  // check which side has more light, and turn servos
  if(analogRead(1)<analogRead(3)){
    if(analogRead(2)<analogRead(4)){
      frontLeft.write(180);
      backRight.write(0);
      frontRight.write(90);
      backLeft.write(90);
    }else{
      frontLeft.write(0);
      backRight.write(180);
      frontRight.write(90);
      backLeft.write(90);
    }
  }else{
    if(analogRead(2)<analogRead(4)){
      frontLeft.write(180);
      backRight.write(0);
      frontRight.write(90);
      backLeft.write(90);
    }else{
      frontLeft.write(90);
      backRight.write(90);
      frontRight.write(0);
      backLeft.write(180);
    }
  }
}

