#include <iostream>
using namespace std;

//ָ���뺯��
//����ָ����Ϊ�����Ĳ����������޸�ʵ�ε�ֵ
//��ʵ����������

void swap01(int num1, int num2);//ֵ����
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
	cout << "swap01�е�num1��ֵΪ��" << num1 << endl;
	cout << "swap01�е�num2��ֵΪ��" << num2 << endl;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap02�е�num1��ֵΪ��" << *p1 << endl;
	cout << "swap02�е�num2��ֵΪ��" << *p2 << endl;
}