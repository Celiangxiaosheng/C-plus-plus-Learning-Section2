#include<iostream>
using namespace std;

/*******************************************************************
* 1.静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
* 2.静态成员分为：
*	静态成员变量
*		所有对象共享同一份数据
*		在编译阶段分配内存
*		类内声明，类外初始化
*	静态成员函数
*		所有对象共享一个函数
*		静态成员函数只能访问静态成员变量
********************************************************************/

class Ps
{
public:

	static void func()
	{
		m_A = 90; //静态成员函数可以访问静态成员变量
		//m_C = 80;//静态成员函数不可以访问非静态成员变量
		cout << "static void func()的调用" << endl;
	}


	static int m_A;
	int m_C;
 	
private:
	static int m_B;

	static void func2()
	{
		cout << "static void func2()的调用" << endl;
	}
};

int Ps::m_A = 100;
int Ps::m_B = 200;


void ts1()
{
	Ps p;	 
	cout << p.m_A << endl;
	Ps p1;
	p1.m_A = 200;
	cout << p.m_A << endl;
}

void ts2()
{
	//静态成员不属于某个对象上，所有对象都共享一份数据
	//因此静态成员变量有两种访问方式

	//1.通过对象访问
	Ps p;
	p.func();
	//p.func2();
	cout << p.m_A << endl;
	//2.通过类名访问
	cout << Ps::m_A << endl;
	//cout << Ps::m_B << endl;
	Ps::func();
	//Ps::func2();

}

//int main()
//{
//	//ts1();
//	ts2();
//	system("pause");
//	return 0;
//}