#include <iostream>
using namespace std;
#include <string>
//�ṹ��ָ��


int main()
{
	struct Student
	{
		string name;
		int ages;
		int scores;
	};

	Student s = { "����", 18, 99 };
	Student* p = &s;
	cout << "������ " << p->name << " ���䣺 " << p->ages << " ������ " << p->scores << endl;


	system("pause");
	return 0;
}