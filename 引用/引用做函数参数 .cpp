#include <iostream>
using namespace std;
#include <string>

// ��������
// ֵ����
// ��ַ����
// ���ô���

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

	// 1.ֵ����
	swapnum01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 2.��ַ����
	swapnum02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 3.���ô���
	swapnum03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	/*�ڽ���У���ַ���ݳ���a��bֵ�ֱ�Ϊ20��10��
	���������ô������ٴ��ݳ�a��bֵ�ֱ�Ϊ10�� 20��*/

	system("pause");
	return 0;
}