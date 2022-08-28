#include<iostream>
using namespace std;

/********************************************
* 1.问题：从父类继承过来的成员，那些属于类对象中
********************************************/
 

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:
	int m_D;
};

//利用开发人员命令提示工具查看对象模型
//跳转盘符   G:
//跳转文件路径： cd 具体路径
//查看命名
//cl /d1 reportSingleClassLayout "文件名"


void test82801()
{
	//16
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性是被编译器给隐藏了，因此是访问不到的，但是确实被继承下去了
	cout << "size of Son:      " << sizeof(Son) << endl;
}


//int main()
//{	 
//	test82801();
//	system("pause");
//	return 0;
//}