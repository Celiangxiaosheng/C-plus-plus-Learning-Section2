#include<iostream>
using namespace std;

//дһ����������

//1.ֵ����
void mySwap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01_a = " << a << endl;
	cout << "swao01_b = " << b << endl;
}
//2.��ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.���ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "����ǰ��" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	//mySwap01(a, b); //ֵ���ݣ��ββ�������ʵ��
//	//mySwap02(&a, &b); //��ַ���ݣ��βλ�����ʵ��
//	mySwap03(a, b);
//	cout << "������" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	system("pause");
//	return 0;
//}