#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class Circle
{
public:
	void setCenter(Point center);
	Point getCenter();
	void setCr(double cr);
	double getCr();
private:
	/*double c_x;
	double c_y;*/
	Point Cir_Center;
	double c_r;
};
	 
