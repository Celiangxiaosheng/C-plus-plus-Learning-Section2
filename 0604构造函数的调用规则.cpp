#include<iostream>
using namespace std;


/********************************************************************
* 1.����
*	��Ĭ������£�c++���������ٸ�һ�������3������
*		��1��Ĭ�Ϲ��캯�����޲� ��������Ϊ�գ�
*		��2��Ĭ�������������޲� ��������Ϊ�գ�
*		��3��Ĭ�Ͽ������캯���������Խ���ֵ����
* 2.���캯���ĵ��ù�������
*	����û������й��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
*	����û����忽�����캯����c++�������ṩ�������캯��
* 
**********************************************************************/

class Person
{
public:
	/*Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}*/
	Person(int age)
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
		m_Age = age;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	Person(const Person& p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	int m_Age;
};
//void testa()
//{
//	Person p1;
//	p1.m_Age = 18;
//	Person p2(p1);
//	cout << "p2�����䣺" << p2.m_Age << endl;
//}

void testb()
{
	Person p(38);
	Person p4(p);
	cout << "p4�����䣺" << p4.m_Age << endl;
}

//int main()
//{
//	//testa();
//	testb();	 
//	system("pause");
//	return 0;
//}