#include<iostream>
using namespace std;
#include<fstream>

/**********************************************************************
* 1.以二进制的方式对文件进行读写操作，打开方式要指定为ios::binary
* 2.写文件
*	二进制方式写文件主要利用流对象调用成员函数write
*	函数原型：ostream& write(const char * buffer,int len)
*	参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
* 3.读文件
*	二进制读文件主要利用流对象调用成员函数read
*	函数原型：istream &read(char *buffer,int len)
*	参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
***********************************************************************/


class Personnal
{
public:

	char m_Name[64];
	int m_Age;
};


void WriteBINARYFILE()
{
	//1.包含头文件

	//2.创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	//4.写文件
	Personnal p = { "李四",18 };
	ofs.write((const char *)&p,sizeof(Personnal));
	//5.关闭文件
	ofs.close();
}

void ReadBINARYFILE()
{
	//1.包含头文件

	//2.创建流对象
	ifstream ifs;
	//3.打开文件，判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4.读文件
	Personnal p;
	ifs.read((char*)&p, sizeof(Personnal));
	cout << "姓名：" << p.m_Name << "   年龄：" << p.m_Age << endl;
	//5.关闭文件
	ifs.close();
}

//int main()
//{
//	WriteBINARYFILE();
//	ReadBINARYFILE();
//	system("pause");
//	return 0;
//}