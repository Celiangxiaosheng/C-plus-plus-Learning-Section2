#include<iostream>
using namespace std;

/****************************************************
* 1.����
*	�������������()Ҳ��������
*	�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ  �º���
*	�º���û�й̶��������ǳ����
*****************************************************/

class MyPrint
{
public:

	//���غ������������
	void operator()(string text) 
	{
		cout << text << endl;
	}

};
void myprint01(string text)
{
	cout << text << endl;
}
void test00101()
{
	MyPrint myPrint;
	myPrint("Hello world!");
	myprint01("Hello world!");
}

class MyAdd
{
public:

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test00102()
{
	MyAdd add;
	int ret = add(100, 100);
	cout << "ret = " << ret << endl;

	//������������
	cout << MyAdd()(100, 100) << endl;
}

//int main()
//{
//	test00102();
//
//	system("pause");
//	return 0;
//}