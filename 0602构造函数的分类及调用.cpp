#include<iostream>
using namespace std;

/********************************************************************
* 1.���ַ��෽ʽ
*	��������Ϊ���вι�����޲ι���
*	�����ͷ�Ϊ����ͨ����Ϳ�������
* 2.���ֵ��÷�ʽ
*	���ŷ�
*	��ʾ��
*	��ʽת����
* 2.ע������
*	����Ĭ�Ϲ��캯��ʱ��Ҫ��()
**********************************************************************/

class Person
{
public:
	Person()
	{
		cout << "Person���޲�(Ĭ��)���캯�����á�" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯�����á�" << endl;
	}
	Person(const Person &p)//�������캯��
	{
		//������������ϵ��������ԣ�������������
		cout << "Person�Ŀ������캯�����á�" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "Person�������������á�" << endl;
	}

	int age;
};

//����
void fun1()
{
	//1.���ŷ�
	//Person p;//Ĭ�Ϲ���
	//Person p1(10);//�вι���
	//Person p2(p1);//����

	/*cout<< "p1�����䣺" << p1.age <<"��"<<endl;
	cout << "p2�����䣺" << p2.age << "��" << endl;*/

	//2.��ʾ��
	//Person p10;//Ĭ��
	//Person p3 = Person(10);//�в�
	//Person p4 = Person(p3);//����

	//Person(10);//��������  �ص㣺��ǰ�н�����ϵͳ���������յ���������
	//cout << "aaaaaaaa" << endl;

	//ע��ʵ��2����Ҫ���ÿ������� ��ʼ����������    ����������Ϊ Person (p3) === Person p3;���������
	//Person(p30);

	//3.��ʽ��
	//Person p5 = 10; //�൱�� д�� Person p4 = Person(10);
	//Person p6 = p5;
}
//int main()
//{
//	fun1();
//	system("pause");
//	return 0;
//}