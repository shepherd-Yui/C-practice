#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "***********************" << endl;
	cout << "*****1、添加联系人*****" << endl;
	cout << "*****2、显示联系人*****" << endl;
	cout << "*****3、删除联系人*****" << endl;
	cout << "*****4、查找联系人*****" << endl;
	cout << "*****5、修改联系人*****" << endl;
	cout << "*****6、清空联系人*****" << endl;
	cout << "*****0、退出通讯录*****" << endl;
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
		cout << "联系人已满，不能添加" << endl;
	}
	else
	{
		//输入姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->per[abs->m_size].m_name = name;
		//输入联系方式
		string phone;
		cout << "请输入联系方式： " << endl;
		cin >> phone;
		abs->per[abs->m_size].m_phone = phone;
		//输入性别
		while (true)
		{
			int sex;
			cout << "1---男" << endl;
			cout << "2---女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->per[abs->m_size].m_sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入！" << endl;
			}
		}
		abs->m_size++;
		cout << "添加成功！" << endl;
		system("pause");
		system("cls");
	}
}

void showPerson(addressPerson* abs)
{
	if (abs->m_size == 0)
	{
		cout << "联系人为空！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名： " << abs->per[i].m_name
				<< " 联系方式： " << abs->per[i].m_phone
				<< " 性别： " << abs->per[i].m_sex << endl;
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
	cout << "请输入要删除的联系人：" << endl;
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
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(addressPerson* abs)
{
	cout << "请输入你要查找的人" << endl;
	string name;
	cin >> name;
	if (isExist(abs, name) != -1)
	{
		int ret = isExist(abs, name);
		cout << "姓名： " << abs->per[ret].m_name
			<< " 电话" << abs->per[ret].m_phone
			<< " 性别" << abs->per[ret].m_sex << endl;
	}
	else
	{
		cout << "查无此人" << endl;
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
		//显示主菜单
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2:	//显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			delectPerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			break;
		case 6://清空联系人
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
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