#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(0)
#pragma userControlDuration(60)
#pragma systemFile            	// eliminates warning for "unreferenced" functions

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!
#include "JonLib/Drivebase.h"

/*///////////////////////////////////////////////////////////
/////____________/\\\\\____/\\\\\\\\\_____              /////
///// ________/\\\\////___/\\\///////\\\___             /////
/////  _____/\\\///_______\///______\//\\\__            /////
/////   ___/\\\\\\\\\\\______________/\\\/___           /////
/////    __/\\\\///////\\\_________/\\\//_____          /////
/////     _\/\\\______\//\\\_____/\\\//________         /////
/////      _\//\\\______/\\\____/\\\/___________        /////
/////       __\///\\\\\\\\\/____/\\\\\\\\\\\\\\\_       /////
/////        ____\/////////_____\///////////////__      /////
///// RI3D Robot                                        /////
///// Skills Code                              	        /////
///// Authors: Jonathan Damico, Griffin Tabor           /////
///// Since: June 20, 2016                              /////
*////////////////////////////////////////////////////////////

void setLeftWheelSpeed (int speed = 127) {
	motor[leftWheel1] = speed;
	motor[leftWheel2] = speed;
	motor[leftWheel3] = speed;
}

void setRightWheelSpeed (int speed = 127) {
	motor[rightWheel1] = speed;
	motor[rightWheel2] = speed;
	motor[rightWheel3] = speed;
}

void init () {

}

void pre_auton () {

}

task autonomous () {
	init();
}

task usercontrol() {
	init();
	while (true) {
		tankDrive(vexRT(Ch3),vexRT(Ch2), 10)
	}
}
