#include<iostream>
using namespace std;

/***********************************************
* 1.���μ̳еĸ���
*	����������̳�ͬһ������
*	����������ͬʱ�̳�������������
*	���ּ̳б���Ϊ���μ̳У�������ʯ�̳�
* 2.�ܽ�
*	��1����������
*	��2��������̳�
************************************************/
/**************************************************************
* 2.���������̳�
*	vbptr: virtual base pointer  �����ָ��
*	vbtable: virtual base table  ������: ���м�¼��Ϊƫ����
*		vbptr----->vbtable
***************************************************************/

class Animal
{
public:
	int m_Age;
};

//������̳� ������μ̳�����
//�̳�֮ǰ  ���Ϲؼ��� virtual ��Ϊ��̳�
//Animal���Ϊ�����

class sheep : virtual public Animal{ };

class camel : virtual public Animal{ };

class sheepCamel : public sheep, public camel
{

};

void testend()
{
	sheepCamel sh;
	sh.sheep::m_Age = 20;
	sh.camel::m_Age = 29;
	//�����μ̳У�����������ӵ����ͬ���ݣ���Ҫ��������������
	cout << "sh.sheeo.m_Age = " << sh.sheep::m_Age << endl;
	cout << "sh.camel.m_Age = " << sh.camel::m_Age << endl;
	cout << "sh.m_Age = " << sh.m_Age << endl;

	//�����������֪�� ֻҪ��һ�ݾͿ��ԣ����μ̳е��������������ݣ���Դ�˷�
}
//int main()
//{
//	testend();
//	system("pause");
//	return 0;
//}