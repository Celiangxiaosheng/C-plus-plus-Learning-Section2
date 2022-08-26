#include<iostream>
using namespace std;

/*****************************************************************
* 1.c++���������ٸ�һ�������4������
*	��1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
*	��2��Ĭ�������������޲Σ�������Ϊ�գ�
*	��3��Ĭ�Ͽ������캯���������Խ���ֵ����
*	��4��Ĭ�������operator=,�����Խ���ֵ����
*	�������������ָ�����������ֵ������Ҳ�������ǳ��������
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
	//������ֵ�����
	Human& operator=(Human& h)
	{
		//�������ṩ����ǳ����
		//m_Age = h.m_Age;

		//���ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//���
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

	cout << "h1�����䣺" << *h1.m_Age << endl;
	cout << "h2�����䣺" << *h2.m_Age << endl;
	cout << "h3�����䣺" << *h3.m_Age << endl;
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