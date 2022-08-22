#include<iostream>
using namespace std;

/****************************************************
* 1.Ҫ��
*	�����������(Cube)
*	������������������
*	�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����       
*****************************************************/

class Cube
{
private:
	double m_L;
	double m_w;
	double m_H;
public:
	//���ó�
	void setL(double l)
	{
		m_L = l;
	}
	//��ȡ��
	double getL()
	{
		return m_L;
	}
	//���ó�
	void setW(double w)
	{
		m_w = w;
	}
	//��ȡ��
	double getW()
	{
		return m_w;
	}
	//���ø�
	void setH(double h)
	{
		m_H = h;
	}
	//��ȡ��
	double getH()
	{
		return m_H;
	}
	double calVolume()
	{
		return m_L * m_w * m_H;
	}
	double calarea()
	{
		return 2 * (m_L * m_w) + 2 * (m_L *m_H) + 2 * (m_H * m_w);
	}
	//���ó�Ա�����ж�
	bool JudgeCube(Cube &c1)
	{
		if (m_L == c1.getL() && m_w == c1.getW() && m_H == c1.getH())
		{
			cout << "c1 = c2" << endl;
			return true;
		}
		else
		{
			cout << "c1 != c2" << endl;
			return false;
		}
	}
};
//����ȫ�ֺ����ж�
bool JudgeCube(Cube &c1,Cube &c2)
{

	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{		 
		return true;
	}
	else
	{		 
		return false;
	}
}


//int main()
//{
//	Cube c1;
//	c1.setL(2);
//	c1.setW(2);
//	c1.setH(2);
//	cout << "c1�����Ϊ��" << c1.calarea() << endl;
//	cout << "c1�����Ϊ��" << c1.calVolume() << endl;
//
//	Cube c2;
//	c2.setL(2);
//	c2.setW(2);
//	c2.setH(2);
//	cout << "c2�����Ϊ��" << c2.calarea() << endl;
//	cout << "c2�����Ϊ��" << c2.calVolume() << endl;
//
//	c1.JudgeCube(c2);
//	bool ret = JudgeCube(c1, c2);
//	if (ret)
//	{
//		cout << "c1 = c2" << endl;
//	}
//	else
//	{
//		cout << "c1 != c2" << endl;
//	}
//
//	system("pause");
//	return 0;
//}