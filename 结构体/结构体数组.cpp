#include <iostream>
using namespace std;
#include <string>
//结构体数组


int main()
{
	//1.创建结构体
	struct Student
	{
		string name;
		int ages;
		int scores;
	};

	//2.结构体赋值
	struct Student stuArray[3] =
	{
		{"张三", 19, 99},
		{"李四", 20,100},
		{"王五", 18, 60}
	};

	//3.修改结构体内的参数
	stuArray[1].name = "赵六";
	stuArray[2].ages = 25;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名： " << stuArray[i].name 
			<< " 年龄： " << stuArray[i].ages 
			<< " 分数： " << stuArray[i].scores << endl;
	}

	system("pause");
	return 0;
}