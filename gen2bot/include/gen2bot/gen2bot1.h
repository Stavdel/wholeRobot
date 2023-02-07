#pragma once

#include "ros/ros.h"

class linActClass
{

public:
	linActClass(ros::NodeHandle nh);

	void sleepApp(int ms);

	void goDown();
	void goToZero();

	void getPos();
	
	double drivePosition;
	double depositPosition;
	double digPosition;
	int seconds;
};

class bScrewClass
{

public:
	bScrewClass(ros::NodeHandle nh);

	void sleepApp(int ms);

	void extend();
	void goToZero();

	void getPos();
	
	double drivePosition;
	double depositPosition;
	double digPosition;

	int seconds;
};