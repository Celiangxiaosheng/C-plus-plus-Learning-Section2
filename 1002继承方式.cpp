#include<iostream>
using namespace std;

/***************************************
* 1.�̳��﷨��class ���� ���̳з�ʽ  ����
* 2.�̳з�ʽһ��������
*	�����̳У������̳У�˽�м̳�
****************************************/

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 20;
	}
};

class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;		
	}
};
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : private Base3
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;
	}
};
void test90()
{
	Son1 s1;
	s1.m_A = 100;	
	//s1.m_B = 100;	
}
void test91()
{
	Son2 s2;
	/*s2.m_A = 1;
	s2.m_B = 1;*/
}
void test92()
{
	Son3 s3;
	/*s3.m_A = 1;
	s3.m_B = 1;*/
}
//int main()
//{
//	test90();
//	system("pause");
//	return 0;
//}