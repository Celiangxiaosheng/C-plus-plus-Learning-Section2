#include<iostream>
using namespace std;

/********************************************
* 1.���⣺�Ӹ���̳й����ĳ�Ա����Щ�����������
********************************************/
 

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:
	int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷�   G:
//��ת�ļ�·���� cd ����·��
//�鿴����
//cl /d1 reportSingleClassLayout "�ļ���"


void test82801()
{
	//16
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա�����Ǳ��������������ˣ�����Ƿ��ʲ����ģ�����ȷʵ���̳���ȥ��
	cout << "size of Son:      " << sizeof(Son) << endl;
}


//int main()
//{	 
//	test82801();
//	system("pause");
//	return 0;
//}