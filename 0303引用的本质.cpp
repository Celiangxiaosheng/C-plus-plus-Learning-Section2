#include<iostream>
using namespace std;
//���õı��ʣ���c++���ڲ���ʵ��Ϊһ��ָ�볣��
//���ۣ�C++�Ƽ�ʹ�����ü�������Ϊ�﷨���㣬���ñ�����ָ ָ�볣�����������е�ָ�����������������������

void func1(int& ref)
{
	ref = 100;// ref�����ã�ת��Ϊ *ref = 100;
}
//int main()
//{
//	int a = 10;
//	//�Զ�ת��Ϊ int * const ref = &a; ָ�볣����ָ��ָ�򲻿ɸ��ģ�Ҳ˵��Ϊʲô���ò��ɸ���
//
//	int& ref = a;
//	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20;
//
//	cout << "a��" << a << endl;
//	cout << "ref��" << ref << endl;
//
//	func1(a);
//	system("pause");
//	return 0;
//}