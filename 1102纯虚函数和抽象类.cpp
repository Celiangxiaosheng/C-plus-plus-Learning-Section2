#include<iostream>
using namespace std;
/********************************************************************************************
* 1.概念
*	1.1在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容，因此将虚函数改为纯虚函数
*	语法： virtual 返回值类型 函数名   （参数列表）= 0;
*	
*	当类中有了纯虚函数，这个类也称为抽象类
*	1.2抽象类的特点
*		（1）无法实例化对象
*		（2）子类必须重写抽象类中的纯虚函数，否则也属于抽象类 
*/


/// <summary>
/// 抽象类Base0
/// </summary>
class Base10
{
public:
	/// <summary>
	/// 纯虚函数
	/// </summary>
	virtual void func() = 0;
};


class Base11 : public Base10
{
public:	 
	virtual void func()
	{
		cout << "func函数调用" << endl;
	}
};


void test830001()
{
	Base10* basea = new Base11;
	basea->func();

}


//int main()
//{
//	test830001();
//	system("pause");
//	return 0;
//}