#include <iostream>
#include<string>
using namespace std;

//��ά�������

int main()
{
	int arr[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	//��ά������ռ�ڴ�
	cout << "��ά����ռ�õ��ڴ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ������ռ�õ��ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//��ά�����׵�ַ
	cout << "��ά�����׵�ַΪ��" << (int)&arr << endl;
	cout << "��ά�����һ���׵�ַΪ��" << (int)&arr[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ��" << (int)&arr[1] << endl;
	cout << "��ά�����һ��Ԫ�ص��׵�ַΪ��" << (int)&arr[0][0] << endl;

	//��ά��������Ԫ�����
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "��ά��������Ԫ�صĺ�Ϊ��" << sum << endl;


	//��ά���������
	for (int i = 0; i < 3; i++)
	{
		int sum_row = 0;
		for (int j = 0; j < 3; j++)
		{
			sum_row += arr[i][j];
		}
		cout << "��" << i << "�еĺ�Ϊ��" << sum_row << endl;
	}


	//��ά���������
	for (int i = 0; i < 3; i++)
	{
		int sum_column = 0;
		for (int j = 0; j < 3; j++)
		{
			sum_column += arr[j][i];
		}
		cout << "��" << i << "�еĺ�Ϊ��" << sum_column << endl;
	}

	//��ά����Խ������
	int main_sum_diagonal = 0;
	int sub_sum_diagonal = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//���Խ���
			if (i == j)
			{
				main_sum_diagonal += arr[i][j];
			}
			//���Խ���
			if (i + j == 2)
			{
				sub_sum_diagonal += arr[i][j];
			}
		}
	}
	cout << "�������Խ���֮��Ϊ��" << main_sum_diagonal << endl;
	cout << "���鸱�Խ���֮��Ϊ��" << sub_sum_diagonal << endl;


	system("pause");

	return 0;
}