#include<iostream>
using namespace std;

/*******************************************************************
* 1.��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
* 2.��̬��Ա��Ϊ��
*	��̬��Ա����
*		���ж�����ͬһ������
*		�ڱ���׶η����ڴ�
*		���������������ʼ��
*	��̬��Ա����
*		���ж�����һ������
*		��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
********************************************************************/

class Ps
{
public:

	static void func()
	{
		m_A = 90; //��̬��Ա�������Է��ʾ�̬��Ա����
		//m_C = 80;//��̬��Ա���������Է��ʷǾ�̬��Ա����
		cout << "static void func()�ĵ���" << endl;
	}


	static int m_A;
	int m_C;
 	
private:
	static int m_B;

	static void func2()
	{
		cout << "static void func2()�ĵ���" << endl;
	}
};

int Ps::m_A = 100;
int Ps::m_B = 200;


void ts1()
{
	Ps p;	 
	cout << p.m_A << endl;
	Ps p1;
	p1.m_A = 200;
	cout << p.m_A << endl;
}

void ts2()
{
	//��̬��Ա������ĳ�������ϣ����ж��󶼹���һ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1.ͨ���������
	Ps p;
	p.func();
	//p.func2();
	cout << p.m_A << endl;
	//2.ͨ����������
	cout << Ps::m_A << endl;
	//cout << Ps::m_B << endl;
	Ps::func();
	//Ps::func2();

}

//int main()
//{
//	//ts1();
//	ts2();
//	system("pause");
//	return 0;
//}