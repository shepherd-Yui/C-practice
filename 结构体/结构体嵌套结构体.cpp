#include <iostream>
using namespace std;
#include <string>
//�ṹ��Ƕ�׽ṹ��


int main()
{
	struct Student
	{
		string name;
		int ages;
		int scores;
	};

	struct Teacher
	{
		int id;
		string name;
		int ages;
		struct Student stu[3];
	};

	//Student  ={ "����", 19, 99 };

	Teacher tea = { 2019, "С��", 40, { "����", 19, 99 } };

	cout << "��ʦ������Ϊ�� " << tea.name << "\n"
		<< "��ʦ�Ĺ���Ϊ�� " << tea.id << "\n"
		<< "��ʦ������Ϊ�� " << tea.ages << "\n"
		<< "��ʦ����ѧ��Ϊ�� " << tea.stu->name << "\n"
		<< endl;

	system("pause");
	return 0;
}