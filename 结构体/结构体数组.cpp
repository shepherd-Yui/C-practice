#include <iostream>
using namespace std;
#include <string>
//�ṹ������


int main()
{
	//1.�����ṹ��
	struct Student
	{
		string name;
		int ages;
		int scores;
	};

	//2.�ṹ�帳ֵ
	struct Student stuArray[3] =
	{
		{"����", 19, 99},
		{"����", 20,100},
		{"����", 18, 60}
	};

	//3.�޸Ľṹ���ڵĲ���
	stuArray[1].name = "����";
	stuArray[2].ages = 25;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������ " << stuArray[i].name 
			<< " ���䣺 " << stuArray[i].ages 
			<< " ������ " << stuArray[i].scores << endl;
	}

	system("pause");
	return 0;
}