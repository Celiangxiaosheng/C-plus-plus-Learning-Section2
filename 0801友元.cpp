#include<iostream>
using namespace std;

/*******************************************************************************
* 1.概念
	在程序里，有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
* 
*	友元的目的就是让一个函数或者类访问另一个类中私有成员
* 
*	友元的关键字为：friend
* 2.友元的三种实现
*	全局函数做友元
*	类做友元
*	成员函数做友元
********************************************************************************/


class Building
{
	//goodGay全局函数是 Building类的好朋友，可以访问Building中私有成员
	friend void goodGay(Building *building);
	//goodGay类是 Building类的好朋友，可以访问Building中私有成员
	friend class GoodGay;	 
public:
	Building();
	/*{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}*/


	string m_SittingRoom;

private:
	string m_BedRoom;
};

//类做友元
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

class GoodGay
{
public:
	GoodGay();

	void visit();//参观函数访问Building中的属性

	void visit1();//可以访问Building中的私有成员
	void visit2();//不可以访问Building中的私有成员

	Building* building;

};

void goodGay(Building *building)
{
	cout << "goodGay的全局函数正在访问：" << building->m_SittingRoom << endl;
	cout << "goodGay的全局函数正在访问：" << building->m_BedRoom << endl;
}
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}
void GoodGay::visit()
{
	cout << "正在访问：" << building->m_SittingRoom << endl;
	cout << "正在访问：" << building->m_BedRoom << endl;
}
void GoodGay::visit1()
{
	cout << "visit1()正在访问：" << building->m_SittingRoom << endl;
	cout << "visit1()正在访问：" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2()正在访问：" << building->m_SittingRoom << endl;
	cout << "visit2()正在访问：" << building->m_BedRoom << endl;
}

//int main()
//{	 
//	GoodGay gg;
//	gg.visit1();
//	gg.visit2();
//	system("pause");
//	return 0;
//}