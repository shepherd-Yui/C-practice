#include <iostream>
using namespace std;
#include <string>
//结构体嵌套结构体


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

	//Student  ={ "张三", 19, 99 };

	Teacher tea = { 2019, "小王", 40, { "张三", 19, 99 } };

	cout << "老师的姓名为： " << tea.name << "\n"
		<< "老师的工号为： " << tea.id << "\n"
		<< "老师的年龄为： " << tea.ages << "\n"
		<< "老师带的学生为： " << tea.stu->name << "\n"
		<< endl;

	system("pause");
	return 0;
}