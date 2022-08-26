#include<iostream>
using namespace std;

/*****************************************************************
* 1.c++编译器至少给一个类添加4个函数
*	（1）默认构造函数（无参，函数体为空）
*	（2）默认析构函数（无参，函数体为空）
*	（3）默认拷贝构造函数，对属性进行值拷贝
*	（4）默认运算符operator=,对属性进行值拷贝
*	如果类中有属性指向堆区，做赋值操作是也会出现深浅拷贝问题
* 
******************************************************************/


class Human
{
public:
	Human(int age)
	{
		m_Age = new int(age);
	}


	~Human()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//操作赋值运算符
	Human& operator=(Human& h)
	{
		//编译器提供的是浅拷贝
		//m_Age = h.m_Age;

		//先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*h.m_Age);
		return *this;
	}
	int* m_Age;
};

void test0201()
{
	Human h1(89);

	Human h2(90);

	Human h3(100);

	h3 = h2 = h1;

	cout << "h1的年龄：" << *h1.m_Age << endl;
	cout << "h2的年龄：" << *h2.m_Age << endl;
	cout << "h3的年龄：" << *h3.m_Age << endl;
}


//int main()
//{
//	test0201();
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	c = a = b;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	system("pause");
//	return 0;
//}