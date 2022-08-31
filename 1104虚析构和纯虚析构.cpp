#include<iostream>
using namespace std;

/*************************************************************************************
* 1.前言：
*	多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
*
*	解决方式：将父类中的析构函数改为虚析构或者纯虚析构
* 
* 2.虚析构和纯虚析构共性
*	 （1）可以解决父类指针释放子类对象
*	 （2）都需要有具体的函数实现
* 3.虚函数和纯虚函数区别
*	如果是纯虚函数，该类属于抽象类，无法实例化对象
* 4.语法
*	虚析构语法：virtual ~类名(){}
*	纯虚构语法：virtual ~类名() = 0;
* 5.总结
*	（1）虚析构或纯虚构就是用来解决通过父类指针释放子类对象
*	（2）如果子类中没有堆区数据，可以不写虚析构或纯虚析构
*	（3）拥有纯虚析构函数的类也属于抽象类
**************************************************************************************/

class Animal1
{
public:
	Animal1()
	{
		cout << "Animal1的构造函数调用" << endl;
	}
	virtual void speak() = 0;
	/// <summary>
	/// 虚析构
	/// </summary>
	/*virtual ~Animal1()
	{
		cout << "Animal1的析构函数调用" << endl;
	}*/
	/// <summary>
	/// 纯虚析构
	/// </summary>
	virtual ~Animal1() = 0;

};
/// <summary>
/// 纯虚析构实现
/// </summary>
Animal1::~Animal1()
{
	cout << "Animal1的纯析构函数调用" << endl;
}
class Cat1 :public Animal1
{
public:
	Cat1(string name)
	{
		cout << "Cat1的构造函数调用" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout<<*m_Name << "小猫在说话" << endl;
	}
	~Cat1()
	{
		if (m_Name != NULL)
		{
			cout << "Cat1析构函数调用" << endl;
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