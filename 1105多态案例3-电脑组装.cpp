#include<iostream>
using namespace std;

/*************************************************************************************
* 1.��������
*	������Ҫ��ɲ���ΪCPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
*	��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������intel���̺�lenovo����
*	�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
*	����ʱ��װ��̨��ͬ�ĵ��Խ��й���
* 2.
**************************************************************************************/

//CPU
class CPU
{
public:
	virtual void calculate() = 0;
};
//�Կ�
class VideCard
{
public:
	virtual void display() = 0;
};
//�ڴ���
class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cup, VideCard* videcard, Memory* memory)
	{
		m_cpu = cup;
		m_vc = videcard;
		m_mem = memory;
	}
	void doWork()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideCard* m_vc;
	Memory* m_mem;
};

class IntelCpu : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};

class NavidVideCard : public VideCard
{
public:
	virtual void display()
	{
		cout << "Ӣΰ���Կ���ʼ�����ˣ�" << endl;
	}
};

class SamsungMenory : public Memory
{
public:
	virtual void storage()
	{
		cout << "�������ǵ��ڴ�����������!" << endl;
	}
};

class HuaWeiCpu : public CPU
{
public:
	virtual void calculate()
	{
		cout << "HuaWei��CPU��ʼ�����ˣ�" << endl;
	}
};

class HuaWeiVideCard : public VideCard
{
public:
	virtual void display()
	{
		cout << "HuaWei�Կ���ʼ�����ˣ�" << endl;
	}
};

class HuaWeiMenory : public Memory
{
public:
	virtual void storage()
	{
		cout << "HuaWei���ڴ�����������!" << endl;
	}
};


void testvrend()
{
	CPU* intelcpu = new IntelCpu;
	VideCard *videcard =  new NavidVideCard;
    Memory *samsung =  new SamsungMenory;
	cout << "��һ̨���Կ�ʼ��������������������" << endl;
	Computer* computer1 = new Computer(intelcpu, videcard, samsung);
	computer1->doWork();
	delete computer1;
	cout << "-----------------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ����������������������" << endl;
	Computer* computer2 = new Computer(new HuaWeiCpu, new HuaWeiVideCard, new HuaWeiMenory);
	computer2->doWork();
	delete computer2;
}

//int main()
//{
//	testvrend();
//	system("pause");
//	return 0;
//}