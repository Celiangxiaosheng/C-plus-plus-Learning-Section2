#include<iostream>
using namespace std;


/**************************************
* 1.
*	c++������new�������ڶ�����������
*	�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò�����delete
*	�﷨��new ��������
*	����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
* 
*/

//1.new �Ļ����﷨
int* func()
{
	//�ڶ�������һ�����͵�����
	//new ���ص��Ǹ��������͵�ָ��
	int *p = new int(10);
	return p;
}
void Test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ����ùؼ���delete
	delete p;
	//cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʻᱨ��
}
void Test02()
{
	//����10�������ݵ����飬�ڶ���
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ�����ʱҪ����[]
	delete[] arr;
}
//int main()
//{
//	Test01();
//	Test02();
//	system("pause");
//	return 0;
//}