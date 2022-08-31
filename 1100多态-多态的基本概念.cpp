#include<iostream>
using namespace std;

/***********************************************************************
* 1.��̬��Ϊ����
*	��̬��̬������������������������ھ�̬��̬�����ú�����
*	��̬��̬����������麯��ʵ������ʱ��̬
* 2.��̬��̬�Ͷ�̬��̬������
*	��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
*	��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
* 3.��̬��̬��������
*	1.�м̳й�ϵ
*	2.����Ҫ��д������麯������д����������ֵ���͡��������������б���ȫ��ͬ��
* 4.��̬��̬ʹ��
*	�����ָ��������� ִ������Ķ���
************************************************************************/


class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};


class Cat : public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};


class Dog : public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};


//��ַ���   �ڱ���׶ξ�ȷ���˺����ĵ�ַ
//�����ִ����è˵������������ĵ�ַ�Ͳ�����ǰ��    ��Ҫ�����н׶ν��а�  ����ַ���
void doSpeak(Animal &animal)   //Animal &animal = cat
{
	animal.speak();
}


void test82901()
{
	Cat cat;
	doSpeak(cat);
	Dog dog; 
	doSpeak(dog);
}

void test82902()
{
	cout << "size of Animal = " << sizeof(Animal) << endl;
}

//int main()
//{
//	test82902();
//	system("pause");
//	return 0; 
//}