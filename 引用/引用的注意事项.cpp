#include <iostream>
using namespace std;
#include <string>

//���ã������������
//�﷨��   ��������  &���� = ԭ��
//ע��������ñ���Ҫ���Ի����ҳ�ʼ��֮��Ͳ����Ը���

int main()
{
	int a = 10;
	int b = 20;
	int& c = a;
	c = b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	

	system("pause");
	return 0;
}