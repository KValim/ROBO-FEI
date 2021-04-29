
#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <iostream>

#define timeStep 320
using namespace webots;
using namespace std;

int main(int argc, char **argv) {

  Robot *robot = new Robot();
  
  Motor *ArmLowerL = robot->getMotor("ArmLowerL");
  Motor *ArmLowerR = robot->getMotor("ArmLowerR");
  Motor *LegLowerL = robot->getMotor("LegLowerL");
  Motor *LegLowerR = robot->getMotor("LegLowerR");
  Motor *LegUpperL = robot->getMotor("LegUpperL");
  Motor *LegUpperR = robot->getMotor("LegUpperR");
  Motor *AnkleL = robot->getMotor("AnkleL");
  Motor *AnkleR = robot->getMotor("AnkleR");
  Motor *ShoulderL = robot->getMotor("ShoulderL");
  Motor *ShoulderR = robot->getMotor("ShoulderR");
  
  double t = -1;
  while(robot->step(timeStep) != t){
    //G0
    ArmLowerL->setPosition(-1.90);
    ArmLowerR->setPosition(-1.90);
    LegLowerL->setPosition(1.13);
    LegLowerR->setPosition(1.13);
    AnkleL->setPosition(-1.42);
    AnkleR->setPosition(-1.42);
    
    cout << robot->step(timeStep) << endl;
    t = 0;
  };
  
  t= -1;
  
  while(robot->step(timeStep) != t){
  //G1
    ShoulderL->setPosition(-0.9);
    ShoulderR->setPosition(-0.9);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(1.13);
    LegLowerR->setPosition(1.13);
    AnkleL->setPosition(-1.42);
    AnkleR->setPosition(-1.42);
    cout << robot->step(timeStep) << endl;
    t = 0;
  };
  t= -1;
  
  while(robot->step(timeStep) != t){
    //G2
    ShoulderL->setPosition(-1.6);
    ShoulderR->setPosition(-1.6);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(1.00);
    LegLowerR->setPosition(1.00);
    LegUpperL->setPosition(-2.00);
    LegUpperR->setPosition(-2.00);
    AnkleL->setPosition(-0.30);
    AnkleR->setPosition(-0.30);
    cout << robot->step(timeStep) << endl;
    t = 0;
  };
  
  t= -1;
  
  while(robot->step(timeStep) != t){
    //G3
    ShoulderL->setPosition(-1.3);
    ShoulderR->setPosition(-1.3);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(1.20);
    LegLowerR->setPosition(1.20);
    LegUpperL->setPosition(-0.90);
    LegUpperR->setPosition(-0.90);
    AnkleL->setPosition(-0.40);
    AnkleR->setPosition(-0.40);
    cout << robot->step(timeStep) << endl;
    t = 0;
  };
  
  t= -1;
  
  while(robot->step(timeStep) != t){
    //G4
    ShoulderL->setPosition(-1.00);
    ShoulderR->setPosition(-1.00);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(0.8);
    LegLowerR->setPosition(0.8);
    LegUpperL->setPosition(-0.80);
    LegUpperR->setPosition(-0.80);
    AnkleL->setPosition(-0.20);
    AnkleR->setPosition(-0.20);
    cout << robot->step(timeStep) << endl;
    t = 0;
  };
  
  t= -1;
  while(robot->step(timeStep) != t){
    //G5
    ShoulderL->setPosition(0.00);
    ShoulderR->setPosition(0.00);
    ArmLowerL->setPosition(-0.5);
    ArmLowerR->setPosition(-0.5);
    LegLowerL->setPosition(0.2);
    LegLowerR->setPosition(0.2);
    LegUpperL->setPosition(-0.15);
    LegUpperR->setPosition(-0.15);
    AnkleL->setPosition(-0.05);
    AnkleR->setPosition(-0.05);
    cout << robot->step(timeStep) << endl;
    t++;
  };
  delete robot;
  return 0;
}