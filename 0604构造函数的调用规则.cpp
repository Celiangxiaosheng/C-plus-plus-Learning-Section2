#include<iostream>
using namespace std;


/********************************************************************
* 1.概念
*	在默认情况下，c++编译器至少给一个类添加3个函数
*		（1）默认构造函数（无参 ，函数体为空）
*		（2）默认析构函数（无参 ，函数体为空）
*		（3）默认拷贝构造函数，对属性进行值拷贝
* 2.构造函数的调用规则如下
*	如果用户定义有构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
*	如果用户定义拷贝构造函数，c++不会再提供其他构造函数
* 
**********************************************************************/

class Person
{
public:
	/*Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}*/
	Person(int age)
	{
		cout << "Person的默认构造函数调用" << endl;
		m_Age = age;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	Person(const Person& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	int m_Age;
};
//void testa()
//{
//	Person p1;
//	p1.m_Age = 18;
//	Person p2(p1);
//	cout << "p2的年龄：" << p2.m_Age << endl;
//}

void testb()
{
	Person p(38);
	Person p4(p);
	cout << "p4的年龄：" << p4.m_Age << endl;
}

//int main()
//{
//	//testa();
//	testb();	 
//	system("pause");
//	return 0;
//}