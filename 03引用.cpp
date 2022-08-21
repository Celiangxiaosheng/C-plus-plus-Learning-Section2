#include<iostream>
using namespace std;

/************************************
* 1.引用的基本语法
*	1.1引用的作用：给变量起别名
*	2.1语法：数据类型 &别名 = 原名
* 2.引用注意事项
*	引用必须初始化
*	引用在初始化后，不可以改变
* 3.引用做函数参数
*	
* 4.引用做函数返回值
* 
* 5.引用的本质
*	
* 
*************************************/
//基本语法
void Test03()
{
	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
//注意事项
void Test04()
{
	int a = 10;
	int &b = a;
	int c = 20;
	b = c;//赋值操作
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}

//int main()
//{
//	
//	system("pause");
//	return 0;
//}