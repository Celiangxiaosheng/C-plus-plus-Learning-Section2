#include<iostream>
using namespace std;

/*************************************************
* 1.概述
*	在c++中，函数的形参列表中的形参是可以有默认值得
*	语法：返回值类型  函数名  （参数 = 默认值）{}
* 2.注意事项
*	如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
*	如果函数的声明有了默认参数，那么函数的实现就不能有默认参数
*************************************************/

int func2(int a,int b = 20,int c = 30)
{
	return a + b + c;
}

//int func3(int a = 10, int b, int c)
//{
//	return a + b + c;
//}

//声明和实现只能有一个有默认参数
int func3(int a = 10, int b = 10);
int func3(int a, int b)
{
	return a + b;
}

//int main()
//{
//	cout << func2(10,90) << endl;
//	cout << func3(100,90) << endl;
//
//	system("pause");
//	return 0;
//}