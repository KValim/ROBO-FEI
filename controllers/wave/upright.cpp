#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <iostream>

#define timeStep 320
using namespace webots;
using namespace std;

int main(int argc, char **argv) {

  Robot *robot = new Robot();
  
  Motor *Neck = robot->getMotor("Neck");
  Motor *ShoulderL = robot->getMotor("ShoulderL");
  Motor *ArmUpperL = robot->getMotor("ArmUpperL");
  Motor *ArmLowerL = robot->getMotor("ArmLowerL");
  Motor *ShoulderR = robot->getMotor("ShoulderR");
  Motor *ArmUpperR = robot->getMotor("ArmUpperR");
  Motor *ArmLowerR = robot->getMotor("ArmLowerR");
  Motor *PelvYL = robot->getMotor("PelvYL");
  Motor *PelvL = robot->getMotor("PelvL");
  Motor *LegUpperL = robot->getMotor("LegUpperL");
  Motor *LegLowerL = robot->getMotor("LegLowerL");
  Motor *AnkleL = robot->getMotor("AnkleL");
  Motor *FootL = robot->getMotor("FootL");
  Motor *PelvYR = robot->getMotor("PelvYR");
  Motor *PelvR = robot->getMotor("PelvR");
  Motor *LegUpperR = robot->getMotor("LegUpperR");
  Motor *LegLowerR = robot->getMotor("LegLowerR");
  Motor *AnkleR = robot->getMotor("AnkleR");
  Motor *FootR = robot->getMotor("FootR");

  //upright pose
  Neck->setPosition(0.00);
  ShoulderL->setPosition(0.00);
  ArmUpperL->setPosition(0.00);
  ArmLowerL->setPosition(0.00);
  ShoulderR->setPosition(0.00);
  ArmUpperR->setPosition(0.00);
  ArmLowerR->setPosition(0.00);
  PelvYL->setPosition(0.00);
  PelvL->setPosition(0.00);
  LegUpperL->setPosition(0.00);
  LegLowerL->setPosition(0.00);
  AnkleL->setPosition(0.00);
  FootL->setPosition(0.00);
  PelvYR->setPosition(0.00);
  PelvR->setPosition(0.00);
  LegUpperR->setPosition(0.00);
  LegLowerR->setPosition(0.00);
  AnkleR->setPosition(0.00);
  FootR->setPosition(0.00);
   
  delete robot;
  return 0;
}