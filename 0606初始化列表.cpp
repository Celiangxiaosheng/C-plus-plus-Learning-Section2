#include<iostream>
using namespace std;

/**********************************************
* 1.���ã�c++�ṩ�˳�ʼ���б��﷨��������ʼ������
* 2.�﷨
*	���캯��():����1(ֵ1),����2(ֵ2).......{}
*/

class Person
{
public:

	//��ͳ��ʼ��
	/*Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//��ʼ���б��ʼ����
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