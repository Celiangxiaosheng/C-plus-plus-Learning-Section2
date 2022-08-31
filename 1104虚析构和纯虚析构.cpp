#include<iostream>
using namespace std;

/*************************************************************************************
* 1.ǰ�ԣ�
*	��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
*
*	�����ʽ���������е�����������Ϊ���������ߴ�������
* 
* 2.�������ʹ�����������
*	 ��1�����Խ������ָ���ͷ��������
*	 ��2������Ҫ�о���ĺ���ʵ��
* 3.�麯���ʹ��麯������
*	����Ǵ��麯�����������ڳ����࣬�޷�ʵ��������
* 4.�﷨
*	�������﷨��virtual ~����(){}
*	���鹹�﷨��virtual ~����() = 0;
* 5.�ܽ�
*	��1�����������鹹�����������ͨ������ָ���ͷ��������
*	��2�����������û�ж������ݣ����Բ�д��������������
*	��3��ӵ�д���������������Ҳ���ڳ�����
**************************************************************************************/

class Animal1
{
public:
	Animal1()
	{
		cout << "Animal1�Ĺ��캯������" << endl;
	}
	virtual void speak() = 0;
	/// <summary>
	/// ������
	/// </summary>
	/*virtual ~Animal1()
	{
		cout << "Animal1��������������" << endl;
	}*/
	/// <summary>
	/// ��������
	/// </summary>
	virtual ~Animal1() = 0;

};
/// <summary>
/// ��������ʵ��
/// </summary>
Animal1::~Animal1()
{
	cout << "Animal1�Ĵ�������������" << endl;
}
class Cat1 :public Animal1
{
public:
	Cat1(string name)
	{
		cout << "Cat1�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout<<*m_Name << "Сè��˵��" << endl;
	}
	~Cat1()
	{
		if (m_Name != NULL)
		{
			cout << "Cat1������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string *m_Name;
};

void tes_t1()
{
	Animal1* animal = new Cat1("lili");
	animal->speak();
	delete animal;
}


//int main()
//{
//	tes_t1();
//	system("pause");
//	return 0;
//}