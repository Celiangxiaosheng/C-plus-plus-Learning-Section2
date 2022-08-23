#include<iostream>
using namespace std;

/********************************************************************
* 1.两种分类方式
*	按参数分为：有参构造和无参构造
*	按类型分为：普通构造和拷贝构造
* 2.三种调用方式
*	括号法
*	显示法
*	隐式转换法
* 2.注意事项
*	调用默认构造函数时不要加()
**********************************************************************/

class Person
{
public:
	Person()
	{
		cout << "Person的无参(默认)构造函数调用。" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用。" << endl;
	}
	Person(const Person &p)//拷贝构造函数
	{
		//将传入的人身上的所有属性，拷贝到我身上
		cout << "Person的拷贝构造函数调用。" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "Person的析构函数调用。" << endl;
	}

	int age;
};

//调用
void fun1()
{
	//1.括号法
	//Person p;//默认构造
	//Person p1(10);//有参构造
	//Person p2(p1);//拷贝

	/*cout<< "p1的年龄：" << p1.age <<"岁"<<endl;
	cout << "p2的年龄：" << p2.age << "岁" << endl;*/

	//2.显示法
	//Person p10;//默认
	//Person p3 = Person(10);//有参
	//Person p4 = Person(p3);//拷贝

	//Person(10);//匿名对象  特点：当前行结束后系统会立即回收调匿名对象
	//cout << "aaaaaaaa" << endl;

	//注意实现2：不要利用拷贝函数 初始化匿名对象    编译器会认为 Person (p3) === Person p3;对象的声明
	//Person(p30);

	//3.隐式法
	//Person p5 = 10; //相当于 写了 Person p4 = Person(10);
	//Person p6 = p5;
}
//int main()
//{
//	fun1();
//	system("pause");
//	return 0;
//}