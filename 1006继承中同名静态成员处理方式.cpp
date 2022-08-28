#include<iostream>
using namespace std;

/**********************************************************************************
* 1.���⣺�̳���ͬ���ľ�̬��Ա������Ķ�������ν��з��ʣ�
* 
* 
*	��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
*		��������ͬ����Ա ֱ�ӷ��ʼ���
*		���ʷ���ͬ����Ա ��Ҫ��������
* 2.�ܽ�
*	ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʷ�ʽ(ͨ������ �� ͨ������)
***********************************************************************************/


class Base2
{
public:
	static void func()
	{
		cout << "Base2 - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base2 - static void func(int a)" << endl;
	}

	static int m_A;
};
int Base2::m_A = 100;

class Son0 : public Base2
{
public:
	static void func()
	{
		cout << "Son0 - static void func()" << endl;
	}

	static int m_A;
};
int Son0::m_A = 200;

//ͬ����̬��Ա����
void test82805()
{
	//1.ͨ���������
	Son0 s;
	cout << "Son0 �� �� m_A = " << s.m_A << endl;
	cout << "Base2 �� �� m_A = " << s.Base2::m_A << endl;

	//2.ͨ����������

	cout << "ͨ���������ʣ�" << endl;
	cout << "Son0 �� �� m_A = " << Son0::m_A << endl;
	//��һ��::����ͨ�������ķ�ʽ����    �ڶ���::������ʸ�����������
	cout << "Base2 �� �� m_A = " << Son0::Base2::m_A << endl;
}

//ͬ����̬��Ա����
void test82806()
{ 
	//1.ͨ���������
	Son0 s;
	s.func();
	s.Base2::func();
	s.Base2::func(100);
	//2.ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	Son0::func();
	Son0::Base2::func();
	Son0::Base2::func(100);
}

//int main()
//{
//	test82806();
//	system("pause");
//	return 0;
//}