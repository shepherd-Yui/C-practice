#include <iostream>
using namespace std;

//利用指针实现冒泡排序
void Bubblesort(int* arr, int len);
void printarr(int* arr, int len);


int main()
{
	int list[10] = { 4,3,6,9,1,2,10,8,7,5, };
	int len = sizeof(list) / sizeof(list[0]);
	cout << "排序之前的数组为：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout  << list[i] << " ";
	}
	cout << endl;
	Bubblesort(list,len);
	printarr(list, len);

	system("pause");
	return 0;
}

void Bubblesort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printarr(int* arr, int len)
{
	cout << "排序之后的数组为：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout  << arr[i] << " ";
	}
	cout << endl;
}