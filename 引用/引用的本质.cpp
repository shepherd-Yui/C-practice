#include <iostream>
using namespace std;
#include <string>

// ���õı���
// ���õı�����C++�ڲ�ʵ����һ��ָ�볣��

// ���������ã��Զ�ת���� int* const ref = 100
void func(int& ref)
{
	ref = 100;
}

int main()
{
	int a = 10;

	int& ref = a;
	// �Զ�ת����int* const ref = &a��
	// ָ�볣����ָ��ָ�򲻿ɸ��ģ�Ҳ˵��Ϊʲô���ò��ɸ���
	ref = 20;
	// �ڲ�����ref�����ã��Զ�������ת���� *ref = 20

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	
	// C++�Ƽ�ʹ�����ã���Ϊ�﷨���㣬���ñ�����ָ�����
	// ��������ָ�����������������������

	system("pause");
	return 0;
}