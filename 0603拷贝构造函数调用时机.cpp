#include<iostream>
using namespace std;

/*************************************************
* 1.c++�п������캯������ʱ��ͨ�����������
*	(1)ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
*	(2)ֵ���ݵķ�ʽ������������ֵ
*	(3)��ֵ��ʽ���ؾֲ�����
**************************************************/


class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ������" << endl;
	}
	Person(int age)
	{
		m_age = age;
		cout << "Person���вι��캯������" << endl;
	}
	Person(const Person &p)
	{
		m_age = p.m_age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person()
	{
		cout << "Person ������������" << endl;
	}

	int m_age;
};
//(1)ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void te01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2��age��" << p2.m_age << endl;
}
//(2)ֵ���ݵķ�ʽ������������ֵ
void fun_1(Person p1){}
void te02()
{
	Person p;
	fun_1(p);
}
//(3)��ֵ��ʽ���ؾֲ�����
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