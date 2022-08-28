#include<iostream>
using namespace std;

/***********************************************
* 1.菱形继承的概念
*	两个派生类继承同一个基类
*	又有两个类同时继承这两个派生类
*	这种继承被称为菱形继承，或者钻石继承
* 2.总结
*	（1）加作用域
*	（2）利用虚继承
************************************************/
/**************************************************************
* 2.深度剖析虚继承
*	vbptr: virtual base pointer  虚基类指针
*	vbtable: virtual base table  虚基类表: 表中记录的为偏移量
*		vbptr----->vbtable
***************************************************************/

class Animal
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承问题
//继承之前  加上关键字 virtual 变为虚继承
//Animal类称为虚基类

class sheep : virtual public Animal{ };

class camel : virtual public Animal{ };

class sheepCamel : public sheep, public camel
{

};

void testend()
{
	sheepCamel sh;
	sh.sheep::m_Age = 20;
	sh.camel::m_Age = 29;
	//当菱形继承，有两个父类拥有相同数据，需要加以作用域区分
	cout << "sh.sheeo.m_Age = " << sh.sheep::m_Age << endl;
	cout << "sh.camel.m_Age = " << sh.camel::m_Age << endl;
	cout << "sh.m_Age = " << sh.m_Age << endl;

	//这份数据我们知道 只要有一份就可以，菱形继承导致了数据由两份，资源浪费
}
//int main()
//{
//	testend();
//	system("pause");
//	return 0;
//}