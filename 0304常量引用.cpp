#include<iostream>
using namespace std;

/********************************************
* 1.���ã�����������Ҫ���������βΣ���ֹ�βθı�ʵ��
* 
* �ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��
* 
*/

void showValue(const int &val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}
//int main()
//{
//	//�������ã����������βΣ���ֹ�βθı�ʵ��
//
//	//int a = 10;
//	// int &ref = 10; ���ñ�����Ҫһ���Ϸ��ռ䣬������д���
//	//����const֮�󣬱������������޸�   int temp = 10; const int &ref = temp;
//	//const int& ref = 10;
//	//ref = 20;//����cosnt���Ϊֻ���������޸�
//
//	int a = 100;
//	showValue(a);
//	cout<<"a  = " << a << endl;
//	system("pause");
//	return 0;
//}