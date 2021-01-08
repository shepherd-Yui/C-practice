#include <iostream>
using namespace std;
#include <string>

//引用：给变量起别名
//语法：   数据类型  &别名 = 原名
//注意事项：引用必须要初试化，且初始化之后就不可以更改

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