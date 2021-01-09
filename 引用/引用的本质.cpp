#include <iostream>
using namespace std;
#include <string>

// 引用的本质
// 引用的本质在C++内部实现是一个指针常量

// 发现是引用，自动转换成 int* const ref = 100
void func(int& ref)
{
	ref = 100;
}

int main()
{
	int a = 10;

	int& ref = a;
	// 自动转换成int* const ref = &a，
	// 指针常量是指针指向不可更改，也说明为什么引用不可更改
	ref = 20;
	// 内部发现ref是引用，自动帮我们转换成 *ref = 20

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	
	// C++推荐使用引用，因为语法方便，引用本质是指针变量
	// 但是所有指针操作编译器都帮我们做了

	system("pause");
	return 0;
}