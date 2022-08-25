#include<iostream>
using namespace std;

/*****************************************************************************************
* 1.成员变量和成员函数分开存储
*	在c++中类的成员变量和成员函数分开存储,只有非静态成员才属于类的对象上
* ***************************************************************************************
* 2.this指针概念
*	通过1的学习，在c++中类的成员变量和成员函数分开存储,只有非静态成员才属于类的对象上
*	每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
*	那么问题是：这一块代码是如何区分哪个对象调用自己的呢？
* 
*	c++通过提供特殊的指针，this指针，解决上述问题。this指针指向被调用的成员函数所属的对象
* 
*	this指针是隐含每一个非静态成员函数内的一种指针
*	this指针不需要定义，直接使用即可
* 
*	this指针的用途：
*		当形参和成员变量同名时，可用this指针来区分
*		在类的非静态成员函数中返回对象本身，可使用 return *this.
* ***************************************************************************************
* 3.空指针访问成员函数
*	c++空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
* 
*	如果用到this指针，需要加以判断保证代码的健壮性
* ***************************************************************************************
* 4.const修饰成员函数
*	常函数：
*		成员函数后加const后我们称这个函数为常函数
*		常函数内不可修改成员属性
*		成员属性声明时加关键字mutable后，在常函数中依然可以修改
*	常对象：
*		声明对象前加const称该对象为常对象
*		常对象只能调用常函数
*******************************************************************************************/

class Persona
{
public:

	//非静态成员占对象空间
	int mA;	 
	//静态成员变量不占对象空间
	static int mB;
	//函数也不占对象空间，所有函数共享一个函数实例
	void func()
	{
		cout << "m_A: " << this->mA << endl;
	}
	static void func2()
	{

	}


};
int Persona::mB = 0;
void test001()
{
	Persona p;
	//空间对象占用的内存：1
	//c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}
void test002()
{
	Persona p;
	cout << "size of p = " << sizeof(p) << endl;
}


class Dog
{
public:
	Dog(int age)
	{
		//this指针指向被调用的成员函数所属的对象
		this->age = age;
	}

	Dog& DogAddAge(Dog &dog)
	{
		this->age += dog.age;

		//this指向dog2的指针，而*this指向的就是dog2这个对象本体
		return *this;
	}

	int age;

};
void test003()
{
	Dog dog(32);
	cout << "p1的年龄：" << dog.age << endl;
}
void test004()
{
	Dog dog1(10);
	Dog dog2(10);

	//链式编程思想
	dog2.DogAddAge(dog1).DogAddAge(dog1).DogAddAge(dog1);

	cout << "dog2的年龄为：" << dog2.age << endl;
	
}


class Cat
{
public:
	void showClassName()
	{
		cout << "this is cat class" << endl;
	}
	void showCatName()
	{
		//报错原因：传入的指针为NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_c_age << endl;
	}

	int m_c_age;

};
void test005()
{
	Cat* c = NULL;

	c->showClassName();
	c->showCatName();

}

class Demo
{
public:

	//this指针的本质是指针常量， 指针指向是不可以修改的
	//const Demo * const this;
	//在成员函数后加const,本质是修饰this指针，让指针指向的值也不可以修改
	void showDemo() const
	{
		//this->m_A = 100;
		//this = NULL; //this指针不可以修改指针的指向
		this->m_B = 100;
	}
	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

void test006()
{
	Demo d;
	d.showDemo();
}
void test007()
{
	const Demo d;//在对象前加const 变为常对象
	//d.m_A = 100;
	d.m_B = 100;//m_B是特殊值，在常对象下也可以修改
	//d.func();//常对象不可以调用普通的成员函数，因为普通成员函数可以修改成员属性
}
 