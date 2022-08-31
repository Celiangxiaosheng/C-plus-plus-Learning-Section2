#include<iostream>
using namespace std;

/********************************************************************
* 1.����������
*	�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
* 2.��̬���ŵ�
*	��1��������֯�ṹ����
*	��2���ɶ���ǿ
*	��3������ǰ�ںͺ�����չ�Լ�ά��
* 3.�ܽ�
*	C++�����ᳫ���ö�����Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ�
*********************************************************************/

#pragma region ��ͨʵ��
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//�����Ҫ��չ�µĹ��� ��Ҫ�޸�Դ��
		//����ʵ�Ŀ����� �ᳫ ����ԭ��
		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
	}
	int m_Num1;
	int m_Num2;
};
void test83001()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;


	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}
#pragma endregion

#pragma region ��̬ʵ��
//���ö�̬ʵ��
// 
//ʵ�ּ�����������
class AbstractCalculator
{
public:

	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

class AddCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

class SubCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

class MulCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test83002()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}
#pragma endregion
//int main()
//{
//	test83002();
//	system("pause");
//	return 0;
//}



