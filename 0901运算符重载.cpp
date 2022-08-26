#include<iostream>
using namespace std;

/*********************************************************************************
* 1.����
*	��������ؾ��Ƕ����е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
* 2.����
*	2.1�Ӻ���������أ�ʵ�������Զ�������������ӵ�����
*		�������õ��������ͣ�������֪����ν�������
*	2.2������������أ���������Զ�����������
*	2.3������������أ�ͨ�����ص����������ʵ���Լ�����������
* 
* 3.�ܽ�
*	��1���������õ��������͵ı��ʽ��������ǲ����ܸı��
*	��2����Ҫ�������������
*	��3��������������������Ԫ����ʵ������Զ��������������
* 
**********************************************************************************/

class Ellipsoid
{
	friend Ellipsoid operator+(Ellipsoid& el, int num);
	friend ostream& operator<<(ostream& cout, Ellipsoid& el);
	friend void test0101();
	friend void test0102();
public:
	//1.1����Ա�������� + ��
	Ellipsoid operator+(Ellipsoid& el)
	{
		Ellipsoid temp;
		temp.m_a = this->m_a + el.m_a;
		temp.m_f = this->m_f + el.m_f;
		return temp;
	}
	//2.1����Ա�������� ��������� <<      p.operator<<(cout)  �򻯰汾 p << cout
	//�������ó�Ա�������� << ���������Ϊ�޷�ʵ�� cout�����
	/*void operator<<(cout)
	{

	}*/

private:

	int m_a;
	int m_f;
};

//1.2��ȫ�ֺ�������+��
//Ellipsoid operator+(Ellipsoid& el1, Ellipsoid& el2)
//{
//	Ellipsoid temp;
//	temp.m_a = el1.m_a + el2.m_a;
//	temp.m_f = el1.m_f + el2.m_f;
//	return temp;
//}

//�������صİ汾
Ellipsoid operator+(Ellipsoid& el,int num)
{
	Ellipsoid temp;
	temp.m_a = el.m_a + num;
	temp.m_f = el.m_f + num;
	return temp;
}

//2.2 ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream &cout ,Ellipsoid &el) //����  operator<<(cout,p) �� cout << p 
{
	cout << "m_a = " << el.m_a << "   m_f = " << el.m_f;
	return cout;
}


void test0101()
{
	Ellipsoid el1;
	el1.m_a = 1;
	el1.m_f = 1;
	Ellipsoid el2;
	el2.m_a = 2;
	el2.m_f = 2;

	//Ellipsoid el3 = el1.operator+(el2); //��Ա�������ر��ʵ���	

	//Ellipsoid el3 = operator+(el1, el2);//ȫ�ֺ������ر��ʵ���

	Ellipsoid el3 = el1 + el2;         //�򻯵���

	//��������� Ҳ���Է�����������
	Ellipsoid el4 = el3 + 10;     //Ellipsoid + int

	cout << "el3.m_a = " << el3.m_a << endl;
	cout << "el3.m_b = " << el3.m_f << endl;

	cout << "el4.m_a = " << el4.m_a << endl;
	cout << "el4.m_b = " << el4.m_f << endl;
}

void test0102()
{
	Ellipsoid el1;
	el1.m_a = 10;
	el1.m_f = 10;
	/*cout << "el1.m_a = " << el1.m_a << endl;
	cout << "el1.m_f = " << el1.m_f << endl;*/
	cout << el1 <<"   hello world!"<< endl;
}

/// <summary>
/// �Զ�������
/// </summary>
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ�� ++ �����,����������Ϊ��һֱ��һ�����ݽ��в���
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}
	//���غ��� ++ �����
	MyInteger operator++(int)//int����ռλ������������������ǰ�úͺ��õ���
	{
		//�ȼ�¼��ǰ���
		MyInteger temp = *this;
		//�����
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

/// <summary>
/// �������������
/// </summary>
/// <param name="cout"></param>
/// <param name="myint"></param>
/// <returns></returns>
ostream& operator<<(ostream& cout, MyInteger& myint) //����  operator<<(cout,p) �� cout << p 
{
	cout << myint.m_Num;
	return cout;
}

void test0103()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test0104()
{
	MyInteger myint;
	//cout << myint++ << endl;
	cout << myint << endl;
	myint++;
	cout << myint << endl;
}

//int main()
//{
//	//test0101();
//	//test0102();
//	//test0103();
//	test0104();
//	system("pause");
//	return 0;
//}