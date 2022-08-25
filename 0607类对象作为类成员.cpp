#include<iostream>
using namespace std;
 
/************************************************************
* 1.c++类中的成员可以是另一个类的对象，我们成该成员为对象成员。
* 2.for example
*	class A{};
*	class B
*	{
*		A a;
*	};
**************************************************************/

class Phone
{
public:

	Phone(string pName)
	{
		m_p_name = pName;
		cout << "Phone的构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}

	string m_p_name;

};


class Persons
{
public:

	Persons(string name, string pName):m_name(name),m_phone(pName)
	{
		cout << "Persons的构造函数调用" << endl;
	}

	~Persons()
	{
		cout << "Persons的析构函数调用" << endl;
	}

	string m_name;
	Phone m_phone;
};
//当其他类的对象作为本类的成员，构造时先构造类对象，再构造自身，析构的顺序与构造相反
void testv()
{
	Persons p("李四", "苹果MAX");
	cout << p.m_name << "拿着" << p.m_phone.m_p_name << "手机" << endl;
}

//int main()
//{
//	testv();
//	system("pause");
//	return 0;
//}