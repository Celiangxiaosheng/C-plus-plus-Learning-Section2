#include<iostream>
using namespace std;
#include<fstream>

/**********************************************************************
* 1.�Զ����Ƶķ�ʽ���ļ����ж�д�������򿪷�ʽҪָ��Ϊios::binary
* 2.д�ļ�
*	�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
*	����ԭ�ͣ�ostream& write(const char * buffer,int len)
*	�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
* 3.���ļ�
*	�����ƶ��ļ���Ҫ������������ó�Ա����read
*	����ԭ�ͣ�istream &read(char *buffer,int len)
*	�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
***********************************************************************/


class Personnal
{
public:

	char m_Name[64];
	int m_Age;
};


void WriteBINARYFILE()
{
	//1.����ͷ�ļ�

	//2.����������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	//4.д�ļ�
	Personnal p = { "����",18 };
	ofs.write((const char *)&p,sizeof(Personnal));
	//5.�ر��ļ�
	ofs.close();
}

void ReadBINARYFILE()
{
	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;
	//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4.���ļ�
	Personnal p;
	ifs.read((char*)&p, sizeof(Personnal));
	cout << "������" << p.m_Name << "   ���䣺" << p.m_Age << endl;
	//5.�ر��ļ�
	ifs.close();
}

//int main()
//{
//	WriteBINARYFILE();
//	ReadBINARYFILE();
//	system("pause");
//	return 0;
//}