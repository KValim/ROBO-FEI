



#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <iostream>

#define timeStep 64
using namespace webots;
using namespace std;

int main(int argc, char **argv) {

  Robot *robot = new Robot();
  
  //Motor *Neck = robot->getMotor("Neck");
  Motor *ShoulderL = robot->getMotor("ShoulderL");
  Motor *ShoulderR = robot->getMotor("ShoulderR");
  Motor *ArmUpperL = robot->getMotor("ArmUpperL");
  Motor *ArmUpperR = robot->getMotor("ArmUpperR");
  Motor *ArmLowerL = robot->getMotor("ArmLowerL");
  Motor *ArmLowerR = robot->getMotor("ArmLowerR");
  Motor *LegUpperL = robot->getMotor("LegUpperL");
  Motor *LegUpperR = robot->getMotor("LegUpperR");
  Motor *LegLowerL = robot->getMotor("LegLowerL");
  Motor *LegLowerR = robot->getMotor("LegLowerR");
  Motor *AnkleL = robot->getMotor("AnkleL");
  Motor *AnkleR = robot->getMotor("AnkleR");
  Motor *FootL = robot->getMotor("FootL");
  Motor *FootR = robot->getMotor("FootR");
  
  double t = -1;
  while(robot->step(timeStep) != t){
    //G0
    cout << "00" << endl;
    //Neck->setPosition(0.00);
    ShoulderL->setPosition(0.00);
    ShoulderR->setPosition(0.00);
    ArmLowerL->setPosition(-0.5);
    ArmLowerR->setPosition(-0.5);
    ArmUpperL->setPosition(-0.1);
    ArmUpperR->setPosition(0.1);
    LegLowerL->setPosition(0.5);
    LegLowerR->setPosition(0.5);
    LegUpperL->setPosition(-0.8);
    LegUpperR->setPosition(-0.8);
    AnkleL->setPosition(-0.05);
    AnkleR->setPosition(-0.05);
    FootL->setPosition(0.05);
    FootR->setPosition(-0.05);
    
    cout << robot->step(timeStep) << endl;
    
    t = 0;
  };
  
  t= -1;
    
  
  for(int i=0;i<8;i++){
    while(robot->step(timeStep) != t){
      //G1
      cout << "1" << endl;
      ShoulderL->setPosition(-0.45);
      ShoulderR->setPosition(0.45);
      ArmLowerL->setPosition(-0.5);
      ArmLowerR->setPosition(-0.5);
      ArmUpperL->setPosition(-0.1);
      ArmUpperR->setPosition(0.1);
      LegLowerL->setPosition(0.0);
      LegLowerR->setPosition(0.4);
      LegUpperL->setPosition(-0.15);
      LegUpperR->setPosition(-0.65);
      AnkleL->setPosition(-0.10);
      AnkleR->setPosition(-0.05);
      FootL->setPosition(0.05);
      FootR->setPosition(-0.05);
      cout << robot->step(timeStep) << endl;
      
      t = 0;
    };
    t= -1;
    
    while(robot->step(timeStep) != t){
    //G12
      cout << "12" << endl;
      ShoulderL->setPosition(-0.45);
      ShoulderR->setPosition(0.45);
      ArmLowerL->setPosition(-0.5);
      ArmLowerR->setPosition(-0.5);
      ArmUpperL->setPosition(-0.1);
      ArmUpperR->setPosition(0.1);
      LegLowerL->setPosition(0.0);
      LegLowerR->setPosition(0.4);
      LegUpperL->setPosition(-0.15);
      LegUpperR->setPosition(-0.65);
      AnkleL->setPosition(-0.10);
      AnkleR->setPosition(-0.05);
      FootL->setPosition(0.05);
      FootR->setPosition(-0.05);
      cout << robot->step(timeStep) << endl;
      
      t = 0;
    };
  t= -1;
  
  
    while(robot->step(timeStep) != t){
      //G2
      cout << "2" << endl;
      ShoulderL->setPosition(0.45);
      ShoulderR->setPosition(-0.45);
      ArmLowerL->setPosition(-0.5);
      ArmLowerR->setPosition(-0.5);
      ArmUpperL->setPosition(-0.1);
      ArmUpperR->setPosition(0.1);
      LegLowerL->setPosition(0.4);
      LegLowerR->setPosition(0.0);
      LegUpperL->setPosition(-0.65);
      LegUpperR->setPosition(-0.15);
      AnkleL->setPosition(-0.05);
      AnkleR->setPosition(-0.10);
      FootL->setPosition(0.05);
      FootR->setPosition(-0.05);
      cout << robot->step(timeStep) << endl;
      
      t = 0;
    };
    t= -1;
    
    while(robot->step(timeStep) != t){
    //G22
      cout << "22" << endl;
      ShoulderL->setPosition(0.45);
      ShoulderR->setPosition(-0.45);
      ArmLowerL->setPosition(-0.5);
      ArmLowerR->setPosition(-0.5);
      ArmUpperL->setPosition(-0.1);
      ArmUpperR->setPosition(0.1);
      LegLowerL->setPosition(0.4);
      LegLowerR->setPosition(0.0);
      LegUpperL->setPosition(-0.65);
      LegUpperR->setPosition(-0.15);
      AnkleL->setPosition(-0.05);
      AnkleR->setPosition(-0.10);
      FootL->setPosition(0.05);
      FootR->setPosition(-0.05);
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
    LegUpperL->setPosition(-0.15);
    LegUpperR->setPosition(-0.15);
    AnkleL->setPosition(-0.05);
    AnkleR->setPosition(-0.05);
    FootL->setPosition(0.05);
    FootR->setPosition(-0.05);
    t++;
  };
  delete robot;
  return 0;
}