#include<iostream>
using namespace std;

/********************************************************************
* 1.案例描述：
*	分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
* 2.多态的优点
*	（1）代码组织结构清晰
*	（2）可读性强
*	（3）利于前期和后期扩展以及维护
* 3.总结
*	C++开发提倡利用多条设计程序架构，因为多态优点很多
*********************************************************************/

#pragma region 普通实现
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
		//如果想要扩展新的功能 需要修改源码
		//在真实的开发中 提倡 开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
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

#pragma region 多态实现
//利用多态实现
// 
//实现计算器抽象类
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



