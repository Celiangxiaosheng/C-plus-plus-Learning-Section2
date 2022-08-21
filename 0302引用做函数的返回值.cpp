#include<iostream>
using namespace std;

/****************************************
* 1.作用：引用是可以作为函数的返回值存在的
* 2.注意：不要返回局部变量引用
* 3.用法：函数调用作为左值
******************************************/
//不要返回局部变量引用
int& test01()
{
	int a = 10;//局部变量存放在四区中的 栈区
	return a;
}
//函数调用作为左值
int& test02()
{
	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后释放，不会因为test02执行完而释放
	return a;
}

//int main()
//{
//	//2.注意：不要返回局部变量引用	
//	//int& ref = test01();
//	//cout << "ref = " << ref << endl;//返回错误，因为a的内存已被释放
//	int& ref1 = test02();//创建引用
//	cout << "ref1 = " << ref1 << endl;
//	cout << "ref1 = " << ref1 << endl;
//	cout << "ref1 = " << ref1 << endl;
//	cout << "ref1 = " << ref1 << endl;
//	//3.用法：函数调用作为左值
//
//	test02() = 1000;//如果函数的返回值是引用，这个函数的调用可以作为左值
//	cout << "ref1 = " << ref1 << endl;//用别名输出
//	cout << "ref1 = " << ref1 << endl;
//	cout << "ref1 = " << ref1 << endl;
//	cout << "ref1 = " << ref1 << endl;
//	system("pause");
//	return 0;
//}