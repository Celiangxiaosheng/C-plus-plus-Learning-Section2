#include<iostream>
using namespace std;

/**********************************************************************
* 1.ǳ�������򵥵ĸ�ֵ��������
*	���⣺�������ڴ��ظ��ͷ�
*	����������Լ�ʵ�ֿ������캯�� ���ǳ��������������
* 2.������ڶ�����������ռ䣬���п�������
* 3.�ܽ�
*	��������ж������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
***********************************************************************/

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age,int height)
	{
		cout << "Person��������������" << endl;
		m_Height = new int(height);
		m_Age = age;
	}
	//Person(const Person& p)
	//{
	//	cout << "Persond�Ŀ������캯���ĵ���" << endl;
	//	m_Age = p.m_Age;
	//	//m_Height = p.m_Height;//������Ĭ��ʵ��
	//	//�������

	//	m_Height = new int(*p.m_Height); 
	//}

	~Person()
	{
		//�������룺���������ٵ��������ͷŲ���
		/*if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}*/
		cout << "Person��������������" << endl;
	}
	int m_Age;
	int* m_Height;
};

void test_0()
{
	Person p1(18,170);
	Person p2(p1);
	cout << "p1�����䣺" << p1.m_Age << endl;
	cout << "p1����ߣ�" << *p1.m_Height << endl;
	cout << "p2�����䣺" << p2.m_Age << endl;
	cout << "p2����ߣ�" << *p2.m_Height << endl;
}

//int main()
//{
//	test_0();
//	system("pause");
//	return 0;
//}