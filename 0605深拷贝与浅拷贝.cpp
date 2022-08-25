#include<iostream>
using namespace std;

/**********************************************************************
* 1.浅拷贝：简单的赋值拷贝操作
*	问题：堆区的内存重复释放
*	解决方法：自己实现拷贝构造函数 解决浅拷贝带来的问题
* 2.深拷贝：在堆区重新申请空间，进行拷贝操作
* 3.总结
*	如果属性有堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
***********************************************************************/

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age,int height)
	{
		cout << "Person的析构函数调用" << endl;
		m_Height = new int(height);
		m_Age = age;
	}
	//Person(const Person& p)
	//{
	//	cout << "Persond的拷贝构造函数的调用" << endl;
	//	m_Age = p.m_Age;
	//	//m_Height = p.m_Height;//编译器默认实现
	//	//深拷贝操作

	//	m_Height = new int(*p.m_Height); 
	//}

	~Person()
	{
		//析构代码：将堆区开辟的数据做释放操作
		/*if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}*/
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
	int* m_Height;
};

void test_0()
{
	Person p1(18,170);
	Person p2(p1);
	cout << "p1的年龄：" << p1.m_Age << endl;
	cout << "p1的身高：" << *p1.m_Height << endl;
	cout << "p2的年龄：" << p2.m_Age << endl;
	cout << "p2的身高：" << *p2.m_Height << endl;
}

//int main()
//{
//	test_0();
//	system("pause");
//	return 0;
//}