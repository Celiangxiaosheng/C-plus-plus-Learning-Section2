#include<iostream>
using namespace std;

/**********************************************************
* 1.����
*	���ã�������������ͬ����߸�����
*	������������������
*		ͬһ��������
*		����������ͬ
*		�����������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ.
*	ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
* 2.�������ص�ע������
*	������Ϊ��������
*	����������������Ĭ�ϲ���
*/

void fun_c()
{
	cout << "fun_c�ĵ���" << endl;
}
void fun_c(int a)
{
	cout << "fun_c(int)�ĵ���" << endl;
}
void fun_c(double a)
{
	cout << "fun_c(double)�ĵ���" << endl;
}
void fun_c(int a,double b)
{
	cout << "fun_c(int,double)�ĵ���" << endl;
}
void fun_c(double a, int b)
{
	cout << "fun_c(double,int)�ĵ���" << endl;
}

//�����ķ���ֵ��������Ϊ�������ص�����
//int fun_c(double a, int b)
//{
//	cout << "fun_c(double,int)�ĵ���" << endl;
//	return 0;
//}

//������Ϊ��������
void func_a(int &a) // int &a = 10; ���Ϸ�
{
	cout << "func_a(int &a)�ĵ���" << endl;
}
void func_a(const int& a)  // const int &a = 10�� �Ϸ�
{
	cout << "func_a(const int &a)�ĵ���" << endl;
}

//����������������Ĭ�ϲ���
void func_b(int a,int b = 10)
{
	cout << "func_b(int a,int b) �ĵ���" << endl;
}
void func_b(int a)
{
	cout << "func_b(int a) �ĵ���" << endl;
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
//	//func_b(10);//����Ĭ�ϲ��������ֶ�����
//	func_b(10, 10);
//
//	system("pause");
//	return 0;
//}