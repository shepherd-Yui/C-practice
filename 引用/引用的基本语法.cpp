#include <iostream>
using namespace std;
#include <string>

//���ã������������
//�﷨��   ��������  &���� = ԭ��
//ע��������ñ���Ҫ���Ի����ҳ�ʼ��֮��Ͳ����Ը���

int main()
{
	int a = 10;
	int& b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}