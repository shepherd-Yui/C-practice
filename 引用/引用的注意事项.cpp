#include <iostream>
using namespace std;
#include <string>

//引用：给变量起别名
//语法：   数据类型  &别名 = 原名
//注意事项：引用必须要初试化，且初始化之后就不可以更改

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