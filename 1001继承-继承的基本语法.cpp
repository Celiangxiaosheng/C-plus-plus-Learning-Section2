#include<iostream>
using namespace std;

/********************
* 1.class ���� : ����
*********************/
//��ͨʵ��ҳ��

//Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.........(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Paython��C++........(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.........(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++........(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//class CPlusPlus
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.........(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Paython��C++........(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "c++ѧ����Ƶ" << endl;
//	}
//};
//void test0001()
//{
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//	cout << "------------------------------------------------" << endl;
//	cout << "Python������Ƶҳ�����£�" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "------------------------------------------------" << endl;
//	cout << "C++������Ƶҳ�����£�" << endl;
//	CPlusPlus cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//	cout << "------------------------------------------------" << endl;
// }

//�̳�ʵ��ҳ��

class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��.........(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ.....(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java��Paython��C++........(���������б�)" << endl;
	}
};

class Java : public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test0002()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();
	cout << "------------------------------------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------------------------------" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
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