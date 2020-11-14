#include "swap.h"
using namespace std;

//函数的分文件编写
//实现两个数字的交换

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}
