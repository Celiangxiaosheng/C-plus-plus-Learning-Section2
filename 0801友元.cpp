#include<iostream>
using namespace std;

/*******************************************************************************
* 1.����
	�ڳ������Щ˽������Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
* 
*	��Ԫ��Ŀ�ľ�����һ�����������������һ������˽�г�Ա
* 
*	��Ԫ�Ĺؼ���Ϊ��friend
* 2.��Ԫ������ʵ��
*	ȫ�ֺ�������Ԫ
*	������Ԫ
*	��Ա��������Ԫ
********************************************************************************/


class Building
{
	//goodGayȫ�ֺ����� Building��ĺ����ѣ����Է���Building��˽�г�Ա
	friend void goodGay(Building *building);
	//goodGay���� Building��ĺ����ѣ����Է���Building��˽�г�Ա
	friend class GoodGay;	 
public:
	Building();
	/*{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}*/


	string m_SittingRoom;

private:
	string m_BedRoom;
};

//������Ԫ
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

class GoodGay
{
public:
	GoodGay();

	void visit();//�ιۺ�������Building�е�����

	void visit1();//���Է���Building�е�˽�г�Ա
	void visit2();//�����Է���Building�е�˽�г�Ա

	Building* building;

};

void goodGay(Building *building)
{
	cout << "goodGay��ȫ�ֺ������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "goodGay��ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
}
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}
void GoodGay::visit()
{
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay::visit1()
{
	cout << "visit1()���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit1()���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2()���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit2()���ڷ��ʣ�" << building->m_BedRoom << endl;
}

//int main()
//{	 
//	GoodGay gg;
//	gg.visit1();
//	gg.visit2();
//	system("pause");
//	return 0;
//}