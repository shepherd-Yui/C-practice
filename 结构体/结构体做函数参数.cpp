#include <iostream>
using namespace std;
#include <string>
//�ṹ������������
//���������Ӻ�����һ��ֵ���ݣ�һ����ַ����

struct Student
{
	string name;
	int ages;
	int scores;
};

void printStudent1(struct Student s);
void printStudent2(struct Student* p);


int main()
{
	Student s = { "����", 20, 99 };
	printStudent1(s);
	printStudent2(&s);

	cout << "��main������ ������ " << s.name << "\n"
		<< "���䣺 " << s.ages << "\n"
		<< "������ " << s.scores<< "\n" << endl;

	system("pause");
	return 0;
}

void printStudent1(struct Student s)
{
	//s.name = "����";
	cout << "���Ӻ���1�� ������ " << s.name << "\n"
		<< "���䣺 " << s.ages << "\n"
		<< "������ " << s.scores << "\n" << endl;
}

void printStudent2(struct Student *p)
{
	p->name = "����";
	cout << "���Ӻ���1�� ������ " << p->name << "\n"
		<< "���䣺 " << p->ages << "\n"
		<< "������ " << p->scores << "\n" << endl;
}