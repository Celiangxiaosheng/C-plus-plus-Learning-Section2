#include<iostream>
using namespace std;

/****************************************************
* 1.要求：
*	设计立方体类(Cube)
*	求出立方体的面积和体积
*	分别用全局函数和成员函数判断两个立方体是否相等       
*****************************************************/

class Cube
{
private:
	double m_L;
	double m_w;
	double m_H;
public:
	//设置长
	void setL(double l)
	{
		m_L = l;
	}
	//获取长
	double getL()
	{
		return m_L;
	}
	//设置长
	void setW(double w)
	{
		m_w = w;
	}
	//获取长
	double getW()
	{
		return m_w;
	}
	//设置高
	void setH(double h)
	{
		m_H = h;
	}
	//获取高
	double getH()
	{
		return m_H;
	}
	double calVolume()
	{
		return m_L * m_w * m_H;
	}
	double calarea()
	{
		return 2 * (m_L * m_w) + 2 * (m_L *m_H) + 2 * (m_H * m_w);
	}
	//利用成员函数判断
	bool JudgeCube(Cube &c1)
	{
		if (m_L == c1.getL() && m_w == c1.getW() && m_H == c1.getH())
		{
			cout << "c1 = c2" << endl;
			return true;
		}
		else
		{
			cout << "c1 != c2" << endl;
			return false;
		}
	}
};
//利用全局函数判断
bool JudgeCube(Cube &c1,Cube &c2)
{

	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{		 
		return true;
	}
	else
	{		 
		return false;
	}
}


//int main()
//{
//	Cube c1;
//	c1.setL(2);
//	c1.setW(2);
//	c1.setH(2);
//	cout << "c1的面积为：" << c1.calarea() << endl;
//	cout << "c1的体积为：" << c1.calVolume() << endl;
//
//	Cube c2;
//	c2.setL(2);
//	c2.setW(2);
//	c2.setH(2);
//	cout << "c2的面积为：" << c2.calarea() << endl;
//	cout << "c2的体积为：" << c2.calVolume() << endl;
//
//	c1.JudgeCube(c2);
//	bool ret = JudgeCube(c1, c2);
//	if (ret)
//	{
//		cout << "c1 = c2" << endl;
//	}
//	else
//	{
//		cout << "c1 != c2" << endl;
//	}
//
//	system("pause");
//	return 0;
//}