#include<iostream>
using namespace std;
/********************************************************************************************
* 1.����
*	1.1�ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д�����ݣ���˽��麯����Ϊ���麯��
*	�﷨�� virtual ����ֵ���� ������   �������б�= 0;
*	
*	���������˴��麯���������Ҳ��Ϊ������
*	1.2��������ص�
*		��1���޷�ʵ��������
*		��2�����������д�������еĴ��麯��������Ҳ���ڳ����� 
*/


/// <summary>
/// ������Base0
/// </summary>
class Base10
{
public:
	/// <summary>
	/// ���麯��
	/// </summary>
	virtual void func() = 0;
};


class Base11 : public Base10
{
public:	 
	virtual void func()
	{
		cout << "func��������" << endl;
	}
};


void test830001()
{
	Base10* basea = new Base11;
	basea->func();

}


//int main()
//{
//	test830001();
//	system("pause");
//	return 0;
//}