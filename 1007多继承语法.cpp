#include<iostream>
using namespace std;

/****************************************************************
* 1.c++����һ����̳ж����
*	�﷨��class ���� : �̳з�ʽ  ����1 , �̳з�ʽ  ����2........
* 
*	ע�⣺��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
* ��c++ʵ�ʿ����в������ö�̳�
*****************************************************************/

class Base3
{
public:
	Base3()
	{
		m_A = 100;
	}

	int m_A;
};

class Base4
{
public:
	Base4()
	{
		m_A = 200;
	}

	int m_A;
};

class Son : public Base3, public Base4
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};


void test82000()
{
	Son s;
	cout << "size of son = " << sizeof(s) << endl;
	cout << "Base3 �� �� m_A = " << s.Base3::m_A << endl;
	cout << "Base4 �� �� m_A = " << s.Base4::m_A << endl;
}

//int main()
//{
//	test82000();
//	system("pause");
//	return 0;
//}