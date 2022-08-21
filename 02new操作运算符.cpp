#include<iostream>
using namespace std;


/**************************************
* 1.
*	c++中利用new操作符在堆区开辟数据
*	堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
*	语法：new 数据类型
*	利用new创建的数据，会返回该数据对应的类型的指针
* 
*/

//1.new 的基本语法
int* func()
{
	//在堆区创建一个整型的数据
	//new 返回的是该数据类型的指针
	int *p = new int(10);
	return p;
}
void Test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete
	delete p;
	//cout << *p << endl;//内存已经被释放，再次访问会报错
}
void Test02()
{
	//创建10整型数据的数组，在堆区
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	//释放数组时要加如[]
	delete[] arr;
}
//int main()
//{
//	Test01();
//	Test02();
//	system("pause");
//	return 0;
//}