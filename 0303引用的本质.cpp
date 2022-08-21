#include<iostream>
using namespace std;
//引用的本质：在c++中内部的实现为一个指针常量
//结论：C++推荐使用引用技术，因为语法方便，引用本质是指 指针常量，但是所有的指针操作编译器都帮我们做了

void func1(int& ref)
{
	ref = 100;// ref是引用，转换为 *ref = 100;
}
//int main()
//{
//	int a = 10;
//	//自动转换为 int * const ref = &a; 指针常量是指针指向不可更改，也说明为什么引用不可更改
//
//	int& ref = a;
//	ref = 20;//内部发现ref是引用，自动帮我们转换为：*ref = 20;
//
//	cout << "a：" << a << endl;
//	cout << "ref：" << ref << endl;
//
//	func1(a);
//	system("pause");
//	return 0;
//}