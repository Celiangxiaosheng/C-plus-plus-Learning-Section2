#include<iostream>
using namespace std;

/**************************************************************
* 1.���ã����ع�ϵ������������������Զ������Ͷ�����жԱȲ���
***************************************************************/

class Triangle
{
public:
	Triangle(int side, double angle)
	{
		m_side = side;
		m_angle = angle;
	}

	bool operator==(Triangle& tr)
	{
		if (this->m_side == tr.m_side && this->m_angle == tr.m_angle)
		{
			return true;
		}
		return false;
	}
	bool operator!=(Triangle& tr)
	{
		if (this->m_side == tr.m_side && this->m_angle == tr.m_angle)
		{
			return false;
		}
		return true;
	}

	int m_side;
	double m_angle;
};

void test0202()
{
	Triangle tr1(12, 13.4);
	Triangle tr2(12, 13.4);

	if (tr1 == tr2)
	{
		cout << "tr1 �� tr2���" << endl;
	}
	else
	{
		cout << "tr1 �� tr2�����" << endl;
	}
	if (tr1!= tr2)
	{
		cout << "tr1 �� tr2�����" << endl;
	}
	else
	{
		cout << "tr1 �� tr2���" << endl;
	}
}

//int main()
//{
//	test0202();
//	system("pause");
//	return 0;
//}