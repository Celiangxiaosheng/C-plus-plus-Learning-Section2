#include<iostream>
using namespace std;

const double PI = 3.1415926;

/****************************************************************************************************
* 1.c++�����������-------------------��װ
*	1.1.��װ������
*		�����Ժ���Ϊ��Ϊһ�����壬�����������е�����
*		�����Ժ���Ϊ����Ȩ�޿���
*	1.2.��װ������֮һ
*		��������ʱ�����Ժ���Ϊд��һ�𣬱�������
*		�﷨��class ���� { ����Ȩ�ޣ����� / ��Ϊ};
*	1.3.
*		���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
*		���ԣ�    ��Ա����   ��Ա����
*		��Ϊ��    ��Ա����   ��Ա����
*	1.4.��װ������֮��
*		�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬȨ���£����Կ���
*		����Ȩ�������֣�
*			public			����Ȩ��		���ڿ��Է���		������Է���
*			protected		����Ȩ��		���ڿ��Է���		���ⲻ���Է���   ����Ҳ���Է��ʸ����еı�������
*			private			˽��Ȩ��		���ڿ��Է���		���ⲻ���Է���	���಻���Է��ʸ�����˽�е�����
*	1.5.struct��class������
*		��c++��struct��classΨһ����������Ĭ�ϵķ���Ȩ�޲�ͬ
*		����
*			structĬ��Ȩ��Ϊ����
*			classĬ��Ȩ��Ϊ˽��
*	1.6.��Ա������Ϊ˽��
*		�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
*		�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*******************************************************************************************************/

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ���ʽ��2 * PI * r

class Circle
{
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ:ͨ��Ϊһ������
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

class Student
{
public:
	string m_name;
	string m_number;
	//action
	void showStudent()
	{
		cout << "������ " << m_name << endl;
		cout << "ѧ�ţ� " << m_number << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		m_name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setNumber(string number)
	{
		m_number = number;
	}
};

class Person_a
{
public:
	string m_Name;
protected:
	string m_car;
private:
	int m_Password;
public:
	void func()
	{
		m_Name = "����";
		m_car = "Ħ�г�";
		m_Password = 123456;
	}
};

class C_1
{
	int m_A; //Ĭ��Ȩ��  ��˽��
};

struct C2
{
	int m_A; //Ĭ��Ȩ��  �ǹ�����
};

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_name;
	}
	//��ȡ����
	int getAge()
	{
		//m_age = 0;
		return m_age;
	}
	//��������
	void setAge(int age)
	{
		if (age < 0 || age > 150)//�ж����ݵ���Ч��
		{
			m_age = 0;
			cout << "���������������" << endl;
			return;
		}
		m_age = age;
	}
	//��������
	void setLover(string lover)
	{
		m_lover = lover;
	}

private:
	string m_name;  //�ɶ���д
	int m_age;      //ֻ��
	string m_lover;  //ֻд
};

//int main()
//{
//	//ͨ��Բ�ഴ��һ�������Բ������
//	//ʵ����  (ͨ��һ���� ����һ������Ĺ���)
//	Circle c1;
//	//��Բ��������Խ��и�ֵ
//	c1.m_r = 10;
//	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC()<<endl;
//
//	Student st1;//ʵ����
//	//st1.m_name = "����";
//	st1.setName("����");
//	st1.m_number = "1234567890";
//	st1.showStudent();
//
//	Student st2;
//	st2.m_name = "����";
//	st2.m_number = "e7rq07e9q7eq";
//	st2.showStudent();
//
//	//Person_a p1;
//	//p1.m_Name = "����";
//	//p1.m_car = "����";//����Ȩ�ޣ����ɷ���
//	//p1.m_Password = 1738937;//˽��Ȩ�޲��ɷ���
//
//	//C_1 c_1;
//	//c_1.m_A = 10; //˽�г�Ա�����ɷ���
//
//	C2 c2;
//	c2.m_A = 100;//��struct��Ĭ�ϵ�Ȩ��Ϊ��������˿��Է���
//
//	Person p;
//	p.setName("��ɺɺ��");
//	cout << "����Ϊ��" << p.getName() << endl;
//	p.setAge(10000);
//	cout << "����Ϊ��" << p.getAge() << endl;
//	p.setLover("����ӱ");	
//
//	system("pause");
//	return 0;
//}