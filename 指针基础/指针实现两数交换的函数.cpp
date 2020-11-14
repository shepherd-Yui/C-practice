#include <iostream>
using namespace std;

//指针与函数
//利用指针作为函数的参数，可以修改实参的值
//如实现两数交换

void swap01(int num1, int num2);//值传递
void swap02(int* p1, int* p2);


int main()
{
	int a = 10;
	int b = 20;
	swap01(a, b);
	swap02(&a, &b);

	system("pause");
	return 0;
}

void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "swap01中的num1的值为：" << num1 << endl;
	cout << "swap01中的num2的值为：" << num2 << endl;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap02中的num1的值为：" << *p1 << endl;
	cout << "swap02中的num2的值为：" << *p2 << endl;
}