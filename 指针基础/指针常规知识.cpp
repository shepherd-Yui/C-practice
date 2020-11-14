#include <iostream>
using namespace std;

//指针常规知识
int main()
{
	////定义指针
	//int a = 10;
	//int* p;
	//p = &a;
	//cout << "a的地址为：" << &a << endl;
	//cout << "指针p为：" << p << endl;

	////使用指针
	////可以通过解引用的方式来找到指针指向的内存
	////指针前加*代表解引用，找到指针指向的内存中的数据
	//*p = 1000;
	//cout << "a= " << a << endl;
	//cout << "p = " << *p << endl;

	//指针所占空间大小
	//无论是什么数据类型，指针在32位操作系统都占4个字节
	//在64位操作系统下都占8个字节
	/*int a = 10;
	int* p = &a;
	
	cout << "sizeiof(int *) = " << sizeof(p) << endl;
	cout << "sizeiof(int *) = " << sizeof(int *) << endl;
	cout << "sizeiof(int *) = " << sizeof(float *) << endl;
	cout << "sizeiof(int *) = " << sizeof(double *) << endl;
	cout << "sizeiof(int *) = " << sizeof(char *) << endl;*/

	//空指针和野指针
	//空指针用于给指针变量进行初始化，指向位置为0的内存
	//空指针不能访问（0~255之间的内存为系统占用，不能访问）
	// 如   int* p = NULL;


	/*const修饰指针
	1.常量指针
	const int* p = &a;
	特点：指针指向可以修改，但是指针指向的值不能修改

	2.指针常量
	int* const p = &a;
	特点：指针指向的值可以修改，但指向不能改

	方便记忆：const在前面，*在后面就是常量指针；*在前面，const在后面就是指针常量；
			  * 是指向的值，p是指向，const在哪个前面哪个就不可以修改

	3.const 即修饰指针，又修饰常量
	const int * const p = &a;
	特点：指针的指向和指针指向的值都不可以改*/

	

	system("pause");
	return 0;
}