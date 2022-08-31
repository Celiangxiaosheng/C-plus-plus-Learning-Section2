#include<iostream>
using namespace std;

/*************************************************************************************
* 1.案例描述
*	电脑主要组成部件为CPU（用于计算），显卡（用于显示），内存条（用于存储）
*	将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如intel厂商和lenovo厂商
*	创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
*	测试时组装三台不同的电脑进行工作
* 2.
**************************************************************************************/

//CPU
class CPU
{
public:
	virtual void calculate() = 0;
};
//显卡
class VideCard
{
public:
	virtual void display() = 0;
};
//内存条
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
		cout << "Intel的CPU开始计算了！" << endl;
	}
};

class NavidVideCard : public VideCard
{
public:
	virtual void display()
	{
		cout << "英伟达显卡开始运行了！" << endl;
	}
};

class SamsungMenory : public Memory
{
public:
	virtual void storage()
	{
		cout << "韩国三星的内存条正在运行!" << endl;
	}
};

class HuaWeiCpu : public CPU
{
public:
	virtual void calculate()
	{
		cout << "HuaWei的CPU开始计算了！" << endl;
	}
};

class HuaWeiVideCard : public VideCard
{
public:
	virtual void display()
	{
		cout << "HuaWei显卡开始运行了！" << endl;
	}
};

class HuaWeiMenory : public Memory
{
public:
	virtual void storage()
	{
		cout << "HuaWei的内存条正在运行!" << endl;
	}
};


void testvrend()
{
	CPU* intelcpu = new IntelCpu;
	VideCard *videcard =  new NavidVideCard;
    Memory *samsung =  new SamsungMenory;
	cout << "第一台电脑开始工作。。。。。。。。" << endl;
	Computer* computer1 = new Computer(intelcpu, videcard, samsung);
	computer1->doWork();
	delete computer1;
	cout << "-----------------------------------------" << endl;
	cout << "第二台电脑开始工作。。。。。。。。。" << endl;
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