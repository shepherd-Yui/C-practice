#include <iostream>
using namespace std;

//数组逆置
int main()
{
	int arr[5] = { 3,54,23,546,34 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "数组里的数字为：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "逆置之后的数组为：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}