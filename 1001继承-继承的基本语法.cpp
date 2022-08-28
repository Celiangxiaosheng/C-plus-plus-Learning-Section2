#include<iostream>
using namespace std;

/********************
* 1.class 子类 : 父类
*********************/
//普通实现页面

//Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.........(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图.....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Paython、C++........(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.........(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图.....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++........(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//class CPlusPlus
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.........(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图.....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Paython、C++........(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "c++学科视频" << endl;
//	}
//};
//void test0001()
//{
//	cout << "Java下载视频页面如下：" << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//	cout << "------------------------------------------------" << endl;
//	cout << "Python下载视频页面如下：" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "------------------------------------------------" << endl;
//	cout << "C++下载视频页面如下：" << endl;
//	CPlusPlus cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//	cout << "------------------------------------------------" << endl;
// }

//继承实现页面

class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册.........(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图.....(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java、Paython、C++........(公共分类列表)" << endl;
	}
};

class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};

void test0002()
{
	cout << "Java下载视频页面如下：" << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();
	cout << "------------------------------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	cout << "------------------------------------------------" << endl;
 }

//int main()
//{
//	test0002();
//	system("pause");
//	return 0;
//}