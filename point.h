#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
	void setPx(double px);
	double getPx();
	void setPy(double py);
	double getPy();
private:
	double p_x;
	double p_y;
};
