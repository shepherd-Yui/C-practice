#include <iostream>
using namespace std;

//ָ�볣��֪ʶ
int main()
{
	////����ָ��
	//int a = 10;
	//int* p;
	//p = &a;
	//cout << "a�ĵ�ַΪ��" << &a << endl;
	//cout << "ָ��pΪ��" << p << endl;

	////ʹ��ָ��
	////����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	////ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
	//*p = 1000;
	//cout << "a= " << a << endl;
	//cout << "p = " << *p << endl;

	//ָ����ռ�ռ��С
	//������ʲô�������ͣ�ָ����32λ����ϵͳ��ռ4���ֽ�
	//��64λ����ϵͳ�¶�ռ8���ֽ�
	/*int a = 10;
	int* p = &a;
	
	cout << "sizeiof(int *) = " << sizeof(p) << endl;
	cout << "sizeiof(int *) = " << sizeof(int *) << endl;
	cout << "sizeiof(int *) = " << sizeof(float *) << endl;
	cout << "sizeiof(int *) = " << sizeof(double *) << endl;
	cout << "sizeiof(int *) = " << sizeof(char *) << endl;*/

	//��ָ���Ұָ��
	//��ָ�����ڸ�ָ��������г�ʼ����ָ��λ��Ϊ0���ڴ�
	//��ָ�벻�ܷ��ʣ�0~255֮����ڴ�Ϊϵͳռ�ã����ܷ��ʣ�
	// ��   int* p = NULL;


	/*const����ָ��
	1.����ָ��
	const int* p = &a;
	�ص㣺ָ��ָ������޸ģ�����ָ��ָ���ֵ�����޸�

	2.ָ�볣��
	int* const p = &a;
	�ص㣺ָ��ָ���ֵ�����޸ģ���ָ���ܸ�

	������䣺const��ǰ�棬*�ں�����ǳ���ָ�룻*��ǰ�棬const�ں������ָ�볣����
			  * ��ָ���ֵ��p��ָ��const���ĸ�ǰ���ĸ��Ͳ������޸�

	3.const ������ָ�룬�����γ���
	const int * const p = &a;
	�ص㣺ָ���ָ���ָ��ָ���ֵ�������Ը�*/

	

	system("pause");
	return 0;
}