#include <iostream>
using namespace std;
#include <string>
//结构体做函数参数
//建立两个子函数，一个值传递，一个地址传递

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
	Student s = { "张三", 20, 99 };
	printStudent1(s);
	printStudent2(&s);

	cout << "在main函数中 姓名： " << s.name << "\n"
		<< "年龄： " << s.ages << "\n"
		<< "分数： " << s.scores<< "\n" << endl;

	system("pause");
	return 0;
}

void printStudent1(struct Student s)
{
	//s.name = "李四";
	cout << "在子函数1中 姓名： " << s.name << "\n"
		<< "年龄： " << s.ages << "\n"
		<< "分数： " << s.scores << "\n" << endl;
}

void printStudent2(struct Student *p)
{
	p->name = "李四";
	cout << "在子函数1中 姓名： " << p->name << "\n"
		<< "年龄： " << p->ages << "\n"
		<< "分数： " << p->scores << "\n" << endl;
}