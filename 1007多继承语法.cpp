#include<iostream>
using namespace std;

/****************************************************************
* 1.c++允许一个类继承多个类
*	语法：class 子类 : 继承方式  父类1 , 继承方式  父类2........
* 
*	注意：多继承可能会引发父类中有同名成员出现，需要加作用域区分
* 在c++实际开发中不建议用多继承
*****************************************************************/

class Base3
{
public:
	Base3()
	{
		m_A = 100;
	}

	int m_A;
};

class Base4
{
public:
	Base4()
	{
		m_A = 200;
	}

	int m_A;
};

class Son : public Base3, public Base4
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};


void test82000()
{
	Son s;
	cout << "size of son = " << sizeof(s) << endl;
	cout << "Base3 下 的 m_A = " << s.Base3::m_A << endl;
	cout << "Base4 下 的 m_A = " << s.Base4::m_A << endl;
}

//int main()
//{
//	test82000();
//	system("pause");
//	return 0;
//}