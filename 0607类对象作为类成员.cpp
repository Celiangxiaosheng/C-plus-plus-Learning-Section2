#include<iostream>
using namespace std;
 
/************************************************************
* 1.c++���еĳ�Ա��������һ����Ķ������ǳɸó�ԱΪ�����Ա��
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
		cout << "Phone�Ĺ��캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}

	string m_p_name;

};


class Persons
{
public:

	Persons(string name, string pName):m_name(name),m_phone(pName)
	{
		cout << "Persons�Ĺ��캯������" << endl;
	}

	~Persons()
	{
		cout << "Persons��������������" << endl;
	}

	string m_name;
	Phone m_phone;
};
//��������Ķ�����Ϊ����ĳ�Ա������ʱ�ȹ���������ٹ�������������˳���빹���෴
void testv()
{
	Persons p("����", "ƻ��MAX");
	cout << p.m_name << "����" << p.m_phone.m_p_name << "�ֻ�" << endl;
}

//int main()
//{
//	testv();
//	system("pause");
//	return 0;
//}