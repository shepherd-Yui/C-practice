#include <iostream>
using namespace std;
#include <string>

//�ṹ�尸��_�ṹ������������
//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�
//�����ṹ�����飬�����д��5��Ӣ�ۣ�ͨ��ð��������㷨
//�������е�Ӣ�۰�����������������У�����ӡ�����Ľ��
/*  {"����", 23, "��"},
	{"����", 22, "��"},
	{"�ŷ�", 20, "��"},
	{"����", 21, "��"},
	{"����", 19, "Ů"}*/

struct Hero
{
	string name;
	int ages;
	string sex;
};

void Bubblesort(struct Hero heroArray[], int len);
void printinput(struct Hero heroArray[], int len);

int main()
{
	Hero heroArray[5] =
	{
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ�Ľṹ��Ϊ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout <<"������ " << heroArray[i].name
			<< " ���䣺 " << heroArray[i].ages
			<< " �Ա� " << heroArray[i].sex << endl;
	}
	Bubblesort(heroArray, len);
	cout << "�����Ľṹ��Ϊ��" << endl;
	printinput(heroArray, len);
	system("pause");
	return 0;
}

void Bubblesort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].ages > heroArray[j + 1].ages)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printinput(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << heroArray[i].name
			<< " ���䣺 " << heroArray[i].ages
			<< " �Ա� " << heroArray[i].sex << endl;
	}
}