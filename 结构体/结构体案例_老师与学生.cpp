#include <iostream>
using namespace std;
#include <string>
#include <ctime>
//结构体案例_老师与学生

struct Student
{
	string name;
	int scores;
};

struct Teacher
{
	int id;
	string name;
	struct Student stuArray[5];
};

void allocatestu(struct Teacher tArray[3], int len);
void printinput(struct Teacher tArray[3], int len);


int main()
{
	srand((unsigned int)time(NULL));
	struct Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatestu(tArray, len);
	printinput(tArray, len);

	system("pause");
	return 0;
}

void allocatestu(struct Teacher tArray[3], int len)
{
	string namelist = "ABCDEFG";
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "Teacher_";
		tArray[i].name += namelist[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].stuArray[j].name = "Student_";
			tArray[i].stuArray[j].name += namelist[j];
			tArray[i].stuArray[j].scores = rand() % 41 + 60;
		}
	}
}

void printinput(struct Teacher tArray[3], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名： " << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout  <<  "\t所带的学生为： " << tArray[i].stuArray[j].name
				<< " 分数为： " << tArray[i].stuArray[j].scores << endl;
		}
	}
}