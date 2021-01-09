#include <iostream>
using namespace std;
#include <string>

// 交换函数
// 值传递
// 地址传递
// 引用传递

void swapnum01(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "swapnum01_a = " << a << endl;
	cout << "swapnum01_b = " << b << endl;
}

void swapnum02(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "swapnum02_a = " << a << endl;
	cout << "swapnum02_b = " << b << endl;
}

void swapnum03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swapnum03_a = " << a << endl;
	cout << "swapnum03_b = " << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;

	// 1.值传递
	swapnum01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 2.地址传递
	swapnum02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 3.引用传递
	swapnum03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	/*在结果中，地址传递出的a，b值分别为20，10；
	所以在引用传递中再传递出a，b值分别为10， 20；*/

	system("pause");
	return 0;
}