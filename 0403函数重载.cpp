#include<iostream>
using namespace std;

/**********************************************************
* 1.概述
*	作用：函数名可以相同，提高复用性
*	函数重载满足条件：
*		同一作用域下
*		函数名称相同
*		函数参数类型不同 或者 个数不同 或者 顺序不同.
*	注意：函数的返回值不可以作为函数重载的条件
* 2.函数重载的注意事项
*	引用作为重载条件
*	函数重载碰到函数默认参数
*/

void fun_c()
{
	cout << "fun_c的调用" << endl;
}
void fun_c(int a)
{
	cout << "fun_c(int)的调用" << endl;
}
void fun_c(double a)
{
	cout << "fun_c(double)的调用" << endl;
}
void fun_c(int a,double b)
{
	cout << "fun_c(int,double)的调用" << endl;
}
void fun_c(double a, int b)
{
	cout << "fun_c(double,int)的调用" << endl;
}

//函数的返回值不可以作为函数重载的条件
//int fun_c(double a, int b)
//{
//	cout << "fun_c(double,int)的调用" << endl;
//	return 0;
//}

//引用作为重载条件
void func_a(int &a) // int &a = 10; 不合法
{
	cout << "func_a(int &a)的调用" << endl;
}
void func_a(const int& a)  // const int &a = 10； 合法
{
	cout << "func_a(const int &a)的调用" << endl;
}

//函数重载碰到函数默认参数
void func_b(int a,int b = 10)
{
	cout << "func_b(int a,int b) 的调用" << endl;
}
void func_b(int a)
{
	cout << "func_b(int a) 的调用" << endl;
}


//int main()
//{
//	/*fun_c();
//	fun_c(1);
//	fun_c(3.14);
//	fun_c(3.14,1);
//	fun_c(3,1.111);*/
//	
//	/*int a = 10;
//	func_a(a);
//	func_a(10);*/
//
//	//func_b(10);//碰到默认参数，出现二意性
//	func_b(10, 10);
//
//	system("pause");
//	return 0;
//}