#include<iostream>
using namespace std;

/*********************************************************************
* 1.案例描述
*	制作饮品的大致流程为：煮水 - 冲泡 - 倒入杯中 - 加入辅料
* 
* 2.要求
*	利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
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
		std::cout << "进行煮水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲咖啡" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSomething()
	{
		cout << "加入枸杞和红枣" << endl;
	}
	
};

class Tea :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		std::cout << "进行煮水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲大红袍" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSomething()
	{
		cout << "加入人参和灵芝" << endl;
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