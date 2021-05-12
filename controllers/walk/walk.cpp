



#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <iostream>

#define timeStep 8
using namespace webots;
using namespace std;

int main(int argc, char **argv) {

  Robot *robot = new Robot();
  
  //Motor *Neck = robot->getMotor("Neck");
  Motor *ArmLowerL = robot->getMotor("ArmLowerL");
  Motor *ArmLowerR = robot->getMotor("ArmLowerR");
  Motor *ArmUpperL = robot->getMotor("ArmUpperL");
  Motor *ArmUpperR = robot->getMotor("ArmUpperR");
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
    ShoulderL->setPosition(0.00);
    ShoulderR->setPosition(0.00);
    ArmLowerL->setPosition(-0.5);
    ArmLowerR->setPosition(-0.5);
    ArmUpperL->setPosition(-0.1);
    ArmUpperR->setPosition(0.1);
    LegLowerL->setPosition(0.2);
    LegLowerR->setPosition(0.2);
    LegUpperL->setPosition(-0.15);
    LegUpperR->setPosition(-0.15);
    AnkleL->setPosition(-0.05);
    AnkleR->setPosition(-0.05);
    
    cout << robot->step(timeStep) << endl;
    t = 0;
  };
  
  t= -1;
    
  
  for(int i=0;i<20000;i++){
    while(robot->step(timeStep) != t){
    //G1
    ShoulderL->setPosition(-0.45);
    ShoulderR->setPosition(0.45);
    ArmLowerL->setPosition(-0.5);
    ArmLowerR->setPosition(-0.5);
    ArmUpperL->setPosition(-0.1);
    ArmUpperR->setPosition(0.1);
    LegLowerL->setPosition(0.4);
    LegLowerR->setPosition(0.2);
    LegUpperL->setPosition(-0.15);
    LegUpperR->setPosition(-0.45);
    AnkleL->setPosition(-0.15);
    AnkleR->setPosition(-0.05);
      cout << robot->step(timeStep) << endl;
      t = 0;
    };
    t= -1;
    
    
    while(robot->step(timeStep) != t){
      //G2
    ShoulderL->setPosition(0.45);
    ShoulderR->setPosition(-0.45);
    ArmLowerL->setPosition(-0.5);
    ArmLowerR->setPosition(-0.5);
    ArmUpperL->setPosition(-0.1);
    ArmUpperR->setPosition(0.1);
    LegLowerL->setPosition(0.2);
    LegLowerR->setPosition(0.4);
    LegUpperL->setPosition(-0.45);
    LegUpperR->setPosition(0.15);
    AnkleL->setPosition(-0.05);
    AnkleR->setPosition(-0.15);
      cout << robot->step(timeStep) << endl;
      t = 0;
    };
    
    t= -1;
  }

  while(robot->step(timeStep) != t){
    //G3
    ShoulderL->setPosition(0.00);
    ShoulderR->setPosition(0.00);
    ArmLowerL->setPosition(-0.5);
    ArmLowerR->setPosition(-0.5);
    ArmUpperL->setPosition(-0.1);
    ArmUpperR->setPosition(0.1);
    LegLowerL->setPosition(0.2);
    LegLowerR->setPosition(0.2);
    LegUpperL->setPosition(0.15);
    LegUpperR->setPosition(-0.45);
    AnkleL->setPosition(-0.05);
    AnkleR->setPosition(-0.05);
    t++;
  };
  delete robot;
  return 0;
}