#include <iostream>
using namespace std;

//冒泡排序实现升序序列
int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "数组的元素分别为：" << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int listnum = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < listnum - 1 ; i++)
	{
		for (int j = 0; j < listnum - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排列之后的数组为：" << endl;
	for (int i = 0; i < listnum; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	 

	system("pause");

	return 0;
}