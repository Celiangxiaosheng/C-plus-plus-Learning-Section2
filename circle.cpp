#include"circle.h"

void Circle::setCenter(Point center)
{
	Cir_Center = center;
}
Point Circle::getCenter()
{
	return Cir_Center;
}
void Circle::setCr(double cr)
{
	c_r = cr;
}
double Circle::getCr()
{
	return c_r;
}
