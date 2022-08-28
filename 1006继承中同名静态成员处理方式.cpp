#include<iostream>
using namespace std;

/**********************************************************************************
* 1.问题：继承中同名的静态成员在子类的对象上如何进行访问？
* 
* 
*	静态成员和非静态成员出现同名，处理方式一致
*		访问子类同名成员 直接访问即可
*		访问服了同名成员 需要加作用域
* 2.总结
*	同名静态成员处理方式和非静态处理方式一样，只不过有两种访问方式(通过对象 和 通过类名)
***********************************************************************************/


class Base2
{
public:
	static void func()
	{
		cout << "Base2 - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base2 - static void func(int a)" << endl;
	}

	static int m_A;
};
int Base2::m_A = 100;

class Son0 : public Base2
{
public:
	static void func()
	{
		cout << "Son0 - static void func()" << endl;
	}

	static int m_A;
};
int Son0::m_A = 200;

//同名静态成员属性
void test82805()
{
	//1.通过对象访问
	Son0 s;
	cout << "Son0 下 的 m_A = " << s.m_A << endl;
	cout << "Base2 下 的 m_A = " << s.Base2::m_A << endl;

	//2.通过类名访问

	cout << "通过类名访问：" << endl;
	cout << "Son0 下 的 m_A = " << Son0::m_A << endl;
	//第一个::代表通过类名的方式访问    第二个::代表访问父类作用域下
	cout << "Base2 下 的 m_A = " << Son0::Base2::m_A << endl;
}

//同名静态成员函数
void test82806()
{ 
	//1.通过对象访问
	Son0 s;
	s.func();
	s.Base2::func();
	s.Base2::func(100);
	//2.通过类名访问
	cout << "通过类名访问：" << endl;
	Son0::func();
	Son0::Base2::func();
	Son0::Base2::func(100);
}

//int main()
//{
//	test82806();
//	system("pause");
//	return 0;
//}