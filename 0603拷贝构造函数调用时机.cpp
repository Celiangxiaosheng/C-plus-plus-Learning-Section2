#include<iostream>
using namespace std;

/*************************************************
* 1.c++中拷贝构造函数调用时机通常有三种情况
*	(1)使用一个已经创建完毕的对象来初始化一个新对象
*	(2)值传递的方式给函数参数传值
*	(3)以值方式返回局部对象
**************************************************/


class Person
{
public:
	Person()
	{
		cout << "Person的默认构造调用" << endl;
	}
	Person(int age)
	{
		m_age = age;
		cout << "Person的有参构造函数调用" << endl;
	}
	Person(const Person &p)
	{
		m_age = p.m_age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person 析构函数调用" << endl;
	}

	int m_age;
};
//(1)使用一个已经创建完毕的对象来初始化一个新对象
void te01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的age：" << p2.m_age << endl;
}
//(2)值传递的方式给函数参数传值
void fun_1(Person p1){}
void te02()
{
	Person p;
	fun_1(p);
}
//(3)以值方式返回局部对象
Person fun_2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void te03()
{
	Person p = fun_2();
	cout << (int*)&p << endl;
}
//int main()
//{
//	//te01();
//	//te02();
//	te03();
//	system("pause");
//	return 0;
//}