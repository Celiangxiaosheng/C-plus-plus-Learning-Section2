#include<iostream>
using namespace std;

const double PI = 3.1415926;

/****************************************************************************************************
* 1.c++面向对象特性-------------------封装
*	1.1.封装的意义
*		将属性和行为作为一个整体，表现在生活中的事物
*		将属性和行为加以权限控制
*	1.2.封装的意义之一
*		在设计类的时候，属性和行为写在一起，表现事物
*		语法：class 类名 { 访问权限：属性 / 行为};
*	1.3.
*		类中的属性和行为 我们统一成为 成员
*		属性：    成员属性   成员变量
*		行为：    成员函数   成员方法
*	1.4.封装的意义之二
*		类在设计时，可以把属性和行为放在不同权限下，加以控制
*		访问权限有三种：
*			public			公共权限		类内可以访问		类外可以访问
*			protected		保护权限		类内可以访问		类外不可以访问   子类也可以访问父类中的保护内容
*			private			私有权限		类内可以访问		类外不可以访问	子类不可以访问父类中私有的内容
*	1.5.struct和class的区别
*		在c++中struct和class唯一的区别在于默认的访问权限不同
*		区别：
*			struct默认权限为公共
*			class默认权限为私有
*	1.6.成员属性设为私有
*		优点1：将所有成员属性设置为私有，可以自己控制读写权限
*		优点2：对于写权限，我们可以检测数据的有效性
*******************************************************************************************************/

//设计一个圆类，求圆的周长
//圆求周长公式：2 * PI * r

class Circle
{
	//访问权限
public:
	//属性
	int m_r;
	//行为:通常为一个函数
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

class Student
{
public:
	string m_name;
	string m_number;
	//action
	void showStudent()
	{
		cout << "姓名： " << m_name << endl;
		cout << "学号： " << m_number << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		m_name = name;
	}
	//给学号赋值
	void setNumber(string number)
	{
		m_number = number;
	}
};

class Person_a
{
public:
	string m_Name;
protected:
	string m_car;
private:
	int m_Password;
public:
	void func()
	{
		m_Name = "李四";
		m_car = "摩托车";
		m_Password = 123456;
	}
};

class C_1
{
	int m_A; //默认权限  是私有
};

struct C2
{
	int m_A; //默认权限  是公共的
};

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_name = name;
	}
	//获取姓名
	string getName()
	{
		return m_name;
	}
	//获取年龄
	int getAge()
	{
		//m_age = 0;
		return m_age;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age > 150)//判读数据的有效性
		{
			m_age = 0;
			cout << "您输入的年龄有误？" << endl;
			return;
		}
		m_age = age;
	}
	//设置情人
	void setLover(string lover)
	{
		m_lover = lover;
	}

private:
	string m_name;  //可读可写
	int m_age;      //只读
	string m_lover;  //只写
};

//int main()
//{
//	//通过圆类创建一个具体的圆（对象）
//	//实例化  (通过一个类 创建一个对象的过程)
//	Circle c1;
//	//给圆对象的属性进行赋值
//	c1.m_r = 10;
//	cout << "圆的周长为： " << c1.calculateZC()<<endl;
//
//	Student st1;//实例化
//	//st1.m_name = "李明";
//	st1.setName("李里");
//	st1.m_number = "1234567890";
//	st1.showStudent();
//
//	Student st2;
//	st2.m_name = "李四";
//	st2.m_number = "e7rq07e9q7eq";
//	st2.showStudent();
//
//	//Person_a p1;
//	//p1.m_Name = "李明";
//	//p1.m_car = "奔驰";//保护权限，不可访问
//	//p1.m_Password = 1738937;//私有权限不可访问
//
//	//C_1 c_1;
//	//c_1.m_A = 10; //私有成员，不可访问
//
//	C2 c2;
//	c2.m_A = 100;//在struct中默认的权限为公共，因此可以访问
//
//	Person p;
//	p.setName("张珊珊那");
//	cout << "姓名为：" << p.getName() << endl;
//	p.setAge(10000);
//	cout << "年龄为：" << p.getAge() << endl;
//	p.setLover("赵丽颖");	
//
//	system("pause");
//	return 0;
//}