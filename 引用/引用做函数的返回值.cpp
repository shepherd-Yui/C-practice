#include <iostream>
using namespace std;
#include <string>

// �����������ķ���ֵ
// 1����Ҫ���ؾֲ�����������
// 2�������ĵ��ÿ�����Ϊ��ֵ

int& test01()
{
	int a = 10;
	return a;
}

int& test02()
{
	static int b = 10;
	// ��̬�����������ȫ����
	// ȫ�����ϵ����ݻ��ڳ����������ϵͳ�ͷ�
	return b;
}

int main()
{
	int &ref1 = test01();
	cout << "ref1 = " << ref1 << endl;
	// ��һ�ν����ȷ����Ϊ���������˱���
	cout << "ref1 = " << ref1 << endl;
	// �ڶ��ν����������Ϊa���ڴ��Ѿ��ͷ�

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;
	// ��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");
	return 0;
}