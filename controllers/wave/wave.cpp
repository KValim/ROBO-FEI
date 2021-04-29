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

  int t = -1;
  while(robot->step(timeStep) != t){
  //upright pose
  Neck->setPosition(0.00);
  ShoulderL->setPosition(0.00);
  ArmUpperL->setPosition(-2.434);
  ArmLowerL->setPosition(0.00);
  ShoulderR->setPosition(0.00);
  ArmUpperR->setPosition(2.434);
  ArmLowerR->setPosition(0.00);
  PelvYL->setPosition(0.00);
  PelvL->setPosition(-0.630);
  LegUpperL->setPosition(0.00);
  LegLowerL->setPosition(0.00);
  AnkleL->setPosition(0.453);
  FootL->setPosition(0.00);
  PelvYR->setPosition(0.00);
  PelvR->setPosition(0.623);
  LegUpperR->setPosition(0.00);
  LegLowerR->setPosition(0.00);
  AnkleR->setPosition(0.453);
  FootR->setPosition(0.00);
  
  }
  //1.302  0.453
  delete robot;
  return 0;
}

//neck +-1.07
//shoulderL +-2.83
//armupperL -2.83   +0.057
//armlowerL +-2.576

//foot +-1.075
//ankle -0.566    +0.34
//leglower -1.755  +1.472
//legupper -2.83    +0.453