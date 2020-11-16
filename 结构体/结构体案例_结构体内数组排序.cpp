#include <iostream>
using namespace std;
#include <string>

//结构体案例_结构体内数组排序
//设计一个英雄的结构体，包括成员姓名，年龄，性别；
//创建结构体数组，数组中存放5名英雄，通过冒泡排序的算法
//将数组中的英雄按照年龄进行升序排列，最后打印排序后的结果
/*  {"刘备", 23, "男"},
	{"关羽", 22, "男"},
	{"张飞", 20, "男"},
	{"赵云", 21, "男"},
	{"貂蝉", 19, "女"}*/

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
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前的结构体为：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout <<"姓名： " << heroArray[i].name
			<< " 年龄： " << heroArray[i].ages
			<< " 性别： " << heroArray[i].sex << endl;
	}
	Bubblesort(heroArray, len);
	cout << "排序后的结构体为：" << endl;
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
		cout << "姓名： " << heroArray[i].name
			<< " 年龄： " << heroArray[i].ages
			<< " 性别： " << heroArray[i].sex << endl;
	}
}