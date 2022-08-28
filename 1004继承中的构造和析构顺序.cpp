#include<iostream>
using namespace std;

/****************************************************
* 1.子类继承父类后，当创建子类对象，也会调用父类的构造函数
* 
* 问题：父类和子类的构造和析构顺序谁先谁后
*****************************************************/

class Base
{
public:
	Base()
	{
		cout << "基类的构造函数Base()" << endl;
	}
	~Base()
	{
		cout << "基类的析构函数~Base()" << endl;
	}
};

class Son2 : public Base
{
public:
	Son2()
	{
		cout << "子类的构造函数Son2()" << endl;
	}
	~Son2()
	{
		cout << "基类的析构函数~Son2()" << endl;
	}
};

void test82802()
{	 
	//继承中的构造和析构顺序如下：
	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
	Son2 son;
}

//int main()
//{
//	test82802();
//	system("pause");
//	return 0;
//}