#include<iostream>
using namespace std;

/***********************************************************************
* 1.多态分为两类
*	静态多态：函数重载与运算符重载属于静态多态，复用函数名
*	动态多态：派生类和虚函数实现运行时多态
* 2.静态多态和动态多态的区别
*	静态多态的函数地址早绑定 - 编译阶段确定函数地址
*	动态多态的函数地址晚绑定 - 运行阶段确定函数地址
* 3.动态多态满足条件
*	1.有继承关系
*	2.子类要重写父类的虚函数（重写：函数返回值类型、参数名、参数列表完全相同）
* 4.动态多态使用
*	父类的指针或者引用 执行子类的对象
************************************************************************/


class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};


class Cat : public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};


class Dog : public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};


//地址早绑定   在编译阶段就确定了函数的地址
//如果想执行让猫说话，这个函数的地址就不能提前绑定    需要在运行阶段进行绑定  即地址晚绑定
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