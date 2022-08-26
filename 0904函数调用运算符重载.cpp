#include<iostream>
using namespace std;

/****************************************************
* 1.概念
*	函数调用运算符()也可以重载
*	由于重载后使用的方式非常像函数的调用，因此称为  仿函数
*	仿函数没有固定方法，非常灵活
*****************************************************/

class MyPrint
{
public:

	//重载函数调用运算符
	void operator()(string text) 
	{
		cout << text << endl;
	}

};
void myprint01(string text)
{
	cout << text << endl;
}
void test00101()
{
	MyPrint myPrint;
	myPrint("Hello world!");
	myprint01("Hello world!");
}

class MyAdd
{
public:

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test00102()
{
	MyAdd add;
	int ret = add(100, 100);
	cout << "ret = " << ret << endl;

	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}

//int main()
//{
//	test00102();
//
//	system("pause");
//	return 0;
//}