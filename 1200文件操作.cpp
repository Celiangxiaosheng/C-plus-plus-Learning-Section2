#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/***********************************************************************************
* 1.前言
*	程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
*	通过文件可以将数据持久化
*	C++中对文件操作需要包含头文件<fstream>
* 2.文件类型分为两种：
*	（1）文本文件 - 文件以文本的ASII码形式存储在计算机中
*	（2）二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读它们
* 3.操作文件的三大类
*	（1）ofstream: 写操作
*	（2）ifstream: 读操作
*	（3）fstream: 读写操作
* 4.写文件
*	4.1 写文件步骤如下
*		（1）包含头文件：#include<fstream>
*		（2）创建流对象：ofstream ofs;
*		（3）打开文件：ofs.open("文件路径",打开方式)；
*		（4）写数据：ofs<<"写入的数据"；
*		（5）关闭文件：ofs.close();
*	4.2 文件打开方式
*		打开方式                  解 释
*		ios::in             为读文件而打开文件
*		ios::out            为写文件而打开文件
*		ios::ate            初始化位置：文件尾
*		ios::app			 追加方式写文件
*		ios::trunc		如果文件存在先删除，再创建
*		ios::binary				二进制方式
*	注意：文件打开方式可以配合使用，利用|操作符
* 5.读文件
*	5.1 读文件步骤如下
*		(1) 包含头文件：#include<fstream>
*		(2) 创建流对象：ifstream ifs;
*		(3) 打开文件并判断文件是否打开成功：ifs.open("文件路径","打开方式")；
*		(4) 读数据：四种方式
*			
*		(5) 关闭文件：ifs.close();
*	
************************************************************************************/


void writefile()
{
	//1、包含头文件

	//2.创建流对象
	ofstream ofs;
	//3.打开文件
	ofs.open("test.txt",ios::out);
	//4.写数据
	ofs << "----------------------计算报告------------------------" << endl;
	ofs << "一、原始数据" << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "二、计算过程" << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "三、计算结果" << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	ofs << "................................." << endl;
	//5.关闭文件
	ofs.close();
}
void Readfile()
{
	//1、包含头文件

	//2、创建流对象
	ifstream ifs;
	//3、打开文件并判断是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4、读数据
	//第一种
	/*char buffer[1024] = { 0 };
	while (ifs>>buffer)
	{
		cout << buffer << endl;
	}*/

	//第二种
	/*char buffer[1024] = { 0 };
	while (ifs.getline(buffer,sizeof(buffer)))
	{
		cout << buffer << endl;
	}*/

	//第三种
	/*string buffer;
	while (getline(ifs, buffer))
	{
		cout << buffer << endl;
	}*/

	//第四种
	char c;
	while ((c = ifs.get()) != EOF)  //EOF: end of file
	{
		cout << c;
	}
	//5.关闭文件
	ifs.close();
}

//int main()
//{
//	//writefile();
//	Readfile();
//	system("pause");
//	return 0;
//}