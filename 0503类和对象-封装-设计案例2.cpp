#include<iostream>
#include<math.h>
using namespace std;
#include"point.h"
#include"circle.h"

/******************************************************************|
* 1.设计要求                                                        |
*	设计一个圆类(Circle),和一个点类(Point)，计算点和圆的位置关系       |
*                                                                  |
*******************************************************************/

//class Point
//{
//public:
//	void setPx(double px)
//	{
//		p_x = px;
//	}
//	double getPx()
//	{
//		return p_x;
//	}
//	void setPy(double py)
//	{
//		p_y = py;
//	}
//	double getPy()
//	{
//		return p_y;
//	}
//
//private:
//	double p_x;
//	double p_y;
//};
//
//
//class Circle
//{
//public:
//	/*void setCx(double cx)
//	{
//		c_x = cx;
//	}
//	double getCx()
//	{
//		return c_x;
//	}
//	void setCy(double cy)
//	{
//		c_y = cy;
//	}
//	double getCy()
//	{
//		return c_y;
//	}*/
//	void setCenter(Point center)
//	{
//		Cir_Center = center;
//	}
//	Point getCenter()
//	{
//		return Cir_Center;
//	}
//	void setCr(double cr)
//	{
//		c_r = cr;
//	}
//	double getCr()
//	{
//		return c_r;
//	}
//
//private:
//	double c_x;
//	double c_y;
//	Point Cir_Center;
//	double c_r;
//};


void JudgeCircle(Circle& c1, Point& p1)
{
	double d,dx,dy;
	dx = c1.getCenter().getPx() - p1.getPx();
	dy = c1.getCenter().getPy() - p1.getPy();
	d = sqrt(dx*dx + dy*dy);
	if (d > c1.getCr())
	{
		cout << "点在圆外." << endl;
	}
	else if (d == c1.getCr())
	{
		cout << "点在圆上." << endl;
	}
	else
	{
		cout << "点在圆内." << endl;
	}
}


//int main()
//{
//	Point Center;
//	Center.setPx(0);
//	Center.setPy(0);
//
//	Circle c1;
//	c1.setCenter(Center);	 
//	c1.setCr(1);
//
//	Point p1;
//	p1.setPx(0);
//	p1.setPy(0);
//
//	Point p2;
//	p2.setPx(0);
//	p2.setPy(1);
//
//	Point p3;
//	p3.setPx(0);
//	p3.setPy(2);
//
//	JudgeCircle(c1, p1);
//	JudgeCircle(c1, p2);
//	JudgeCircle(c1, p3);
//
//	system("pause");
//	return 0;
//}