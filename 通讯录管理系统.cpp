#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "***********************" << endl;
	cout << "*****1�������ϵ��*****" << endl;
	cout << "*****2����ʾ��ϵ��*****" << endl;
	cout << "*****3��ɾ����ϵ��*****" << endl;
	cout << "*****4��������ϵ��*****" << endl;
	cout << "*****5���޸���ϵ��*****" << endl;
	cout << "*****6�������ϵ��*****" << endl;
	cout << "*****0���˳�ͨѶ¼*****" << endl;
	cout << "***********************" << endl;
}

struct Person
{
	string m_name;
	string m_phone;
	int m_sex;
};

struct addressPerson
{
	struct Person per[MAX];
	int m_size;
};

void addPerson(addressPerson* abs)
{
	if (abs->m_size > MAX)
	{
		cout << "��ϵ���������������" << endl;
	}
	else
	{
		//��������
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->per[abs->m_size].m_name = name;
		//������ϵ��ʽ
		string phone;
		cout << "��������ϵ��ʽ�� " << endl;
		cin >> phone;
		abs->per[abs->m_size].m_phone = phone;
		//�����Ա�
		while (true)
		{
			int sex;
			cout << "1---��" << endl;
			cout << "2---Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->per[abs->m_size].m_sex = sex;
				break;
			}
			else
			{
				cout << "�����������������룡" << endl;
			}
		}
		abs->m_size++;
		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");
	}
}

void showPerson(addressPerson* abs)
{
	if (abs->m_size == 0)
	{
		cout << "��ϵ��Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������ " << abs->per[i].m_name
				<< " ��ϵ��ʽ�� " << abs->per[i].m_phone
				<< " �Ա� " << abs->per[i].m_sex << endl;
		}
		system("pause");
		system("cls");
	}
}

int isExist(addressPerson* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->per[i].m_name == name)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}
void delectPerson(addressPerson* abs)
{
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	if (isExist(abs, name) != -1)
	{
		int ret = isExist(abs, name);
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->per[i] = abs->per[i + 1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(addressPerson* abs)
{
	cout << "��������Ҫ���ҵ���" << endl;
	string name;
	cin >> name;
	if (isExist(abs, name) != -1)
	{
		int ret = isExist(abs, name);
		cout << "������ " << abs->per[ret].m_name
			<< " �绰" << abs->per[ret].m_phone
			<< " �Ա�" << abs->per[ret].m_sex << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}


int main()
{
	int select = 0;
	addressPerson abs;
	abs.m_size = 0;
	while (true)
	{
		//��ʾ���˵�
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2:	//��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			delectPerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			break;
		case 6://�����ϵ��
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}	
	}
	showMenu();
	system("pause");
	return 0;
}