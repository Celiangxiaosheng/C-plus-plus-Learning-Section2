#include<iostream>
using namespace std;

/**********************************************
* 1.作用：c++提供了初始化列表语法，用来初始化属性
* 2.语法
*	构造函数():属性1(值1),属性2(值2).......{}
*/

class Person
{
public:

	//传统初始化
	/*Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//初始化列表初始属性
	Person(int a,int b,int c) : m_A(a), m_B(b), m_C(c)
	{

	}


	int m_A;
	int m_B;
	int m_C;
};

void te()
{
	Person p(10,20,300);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

//int main()
//{
//	te();
//	system("pause");
//	return 0;
//}