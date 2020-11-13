#include <iostream>
#include<string>
using namespace std;

//二维数组操作

int main()
{
	int arr[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	//二维数组所占内存
	cout << "二维数组占用的内存为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个数据占用的内存为：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//二维数组首地址
	cout << "二维数组首地址为：" << (int)&arr << endl;
	cout << "二维数组第一行首地址为：" << (int)&arr[0] << endl;
	cout << "二维数组第二行首地址为：" << (int)&arr[1] << endl;
	cout << "二维数组第一个元素的首地址为：" << (int)&arr[0][0] << endl;

	//二维数组所有元素求和
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "二维数组所有元素的和为：" << sum << endl;


	//二维数组行求和
	for (int i = 0; i < 3; i++)
	{
		int sum_row = 0;
		for (int j = 0; j < 3; j++)
		{
			sum_row += arr[i][j];
		}
		cout << "第" << i << "行的和为：" << sum_row << endl;
	}


	//二维数组列求和
	for (int i = 0; i < 3; i++)
	{
		int sum_column = 0;
		for (int j = 0; j < 3; j++)
		{
			sum_column += arr[j][i];
		}
		cout << "第" << i << "列的和为：" << sum_column << endl;
	}

	//二维数组对角线求和
	int main_sum_diagonal = 0;
	int sub_sum_diagonal = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//主对角线
			if (i == j)
			{
				main_sum_diagonal += arr[i][j];
			}
			//副对角线
			if (i + j == 2)
			{
				sub_sum_diagonal += arr[i][j];
			}
		}
	}
	cout << "数组主对角线之和为：" << main_sum_diagonal << endl;
	cout << "数组副对角线之和为：" << sub_sum_diagonal << endl;


	system("pause");

	return 0;
}