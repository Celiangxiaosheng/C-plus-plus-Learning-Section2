#include<iostream>
using namespace std;

/*********************************************************************
* 1.��������
*	������Ʒ�Ĵ�������Ϊ����ˮ - ���� - ���뱭�� - ���븨��
* 
* 2.Ҫ��
*	���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
**********************************************************************/


class AbstractDrinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		std::cout << "������ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "�忧��" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "������轺ͺ���" << endl;
	}
	
};

class Tea :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		std::cout << "������ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "������" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�����˲κ���֥" << endl;
	}

};

void doWork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs;
}

void tes_t()
{
	doWork(new Coffee);
	cout << "------------------" << endl;
	doWork(new Tea);
}
//int main()
//{
//	tes_t();
//	std::system("pause");
//	return 0;
//}