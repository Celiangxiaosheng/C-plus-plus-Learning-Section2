#include<iostream>
using namespace std;

/*********************************************************************************
* 1.概念
*	运算符重载就是对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
* 2.内容
*	2.1加号运算符重载：实现两个自定义数据类型相加的运算
*		对于内置的数据类型，编译器知道如何进行运算
*	2.2左移运算符重载：可以输出自定义数据类型
*	2.3递增运算符重载：通过重载递增运算符，实现自己的整型数据
* 
* 3.总结
*	（1）对于内置的数据类型的表达式的运算符是不可能改变的
*	（2）不要滥用运算符重载
*	（3）重载左移运算符配合友元可以实现输出自定义数据类型输出
* 
**********************************************************************************/

class Ellipsoid
{
	friend Ellipsoid operator+(Ellipsoid& el, int num);
	friend ostream& operator<<(ostream& cout, Ellipsoid& el);
	friend void test0101();
	friend void test0102();
public:
	//1.1、成员函数重载 + 号
	Ellipsoid operator+(Ellipsoid& el)
	{
		Ellipsoid temp;
		temp.m_a = this->m_a + el.m_a;
		temp.m_f = this->m_f + el.m_f;
		return temp;
	}
	//2.1、成员函数重载 左移运算符 <<      p.operator<<(cout)  简化版本 p << cout
	//不会利用成员函数重载 << 运算符，因为无法实现 cout在左侧
	/*void operator<<(cout)
	{

	}*/

private:

	int m_a;
	int m_f;
};

//1.2、全局函数重载+号
//Ellipsoid operator+(Ellipsoid& el1, Ellipsoid& el2)
//{
//	Ellipsoid temp;
//	temp.m_a = el1.m_a + el2.m_a;
//	temp.m_f = el1.m_f + el2.m_f;
//	return temp;
//}

//函数重载的版本
Ellipsoid operator+(Ellipsoid& el,int num)
{
	Ellipsoid temp;
	temp.m_a = el.m_a + num;
	temp.m_f = el.m_f + num;
	return temp;
}

//2.2 只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout ,Ellipsoid &el) //本质  operator<<(cout,p) 简化 cout << p 
{
	cout << "m_a = " << el.m_a << "   m_f = " << el.m_f;
	return cout;
}


void test0101()
{
	Ellipsoid el1;
	el1.m_a = 1;
	el1.m_f = 1;
	Ellipsoid el2;
	el2.m_a = 2;
	el2.m_f = 2;

	//Ellipsoid el3 = el1.operator+(el2); //成员函数重载本质调用	

	//Ellipsoid el3 = operator+(el1, el2);//全局函数重载本质调用

	Ellipsoid el3 = el1 + el2;         //简化调用

	//运算符重载 也可以发生函数重载
	Ellipsoid el4 = el3 + 10;     //Ellipsoid + int

	cout << "el3.m_a = " << el3.m_a << endl;
	cout << "el3.m_b = " << el3.m_f << endl;

	cout << "el4.m_a = " << el4.m_a << endl;
	cout << "el4.m_b = " << el4.m_f << endl;
}

void test0102()
{
	Ellipsoid el1;
	el1.m_a = 10;
	el1.m_f = 10;
	/*cout << "el1.m_a = " << el1.m_a << endl;
	cout << "el1.m_f = " << el1.m_f << endl;*/
	cout << el1 <<"   hello world!"<< endl;
}

/// <summary>
/// 自定义整型
/// </summary>
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置 ++ 运算符,返回引用是为了一直对一个数据进行操作
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}
	//重载后置 ++ 运算符
	MyInteger operator++(int)//int代表占位参数，可以用于区分前置和后置递增
	{
		//先记录当前结果
		MyInteger temp = *this;
		//后递增
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

/// <summary>
/// 左移运算符重载
/// </summary>
/// <param name="cout"></param>
/// <param name="myint"></param>
/// <returns></returns>
ostream& operator<<(ostream& cout, MyInteger& myint) //本质  operator<<(cout,p) 简化 cout << p 
{
	cout << myint.m_Num;
	return cout;
}

void test0103()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test0104()
{
	MyInteger myint;
	//cout << myint++ << endl;
	cout << myint << endl;
	myint++;
	cout << myint << endl;
}

//int main()
//{
//	//test0101();
//	//test0102();
//	//test0103();
//	test0104();
//	system("pause");
//	return 0;
//}