#include <iostream>
using namespace std;
#include <string>
//结构体指针


int main()
{
	struct Student
	{
		string name;
		int ages;
		int scores;
	};

	Student s = { "张三", 18, 99 };
	Student* p = &s;
	cout << "姓名： " << p->name << " 年龄： " << p->ages << " 分数： " << p->scores << endl;


	system("pause");
	return 0;
}