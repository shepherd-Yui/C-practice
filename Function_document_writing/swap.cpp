#include "swap.h"
using namespace std;

//�����ķ��ļ���д
//ʵ���������ֵĽ���

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}
