#include <iostream>
#include <string>

using namespace std;
string init()
{
	return "Hello";
}
void func()
{
//	int init = 0;//注意：变量名init和上面相同，则将上述函数屏蔽
	string s = init();
	cout << s << endl; 
}
void print(int);
void print(double);
void print(const string &);
void foo()
{
	//发生函数屏蔽
//	void print(int:;//这是一个局部的函数声明，不是函数重载，要在同一个作用域中声明 
	print(3);
	print(3.14);
	print("Hello");
}
int main()
{
	func();
	foo();
	return 0;
}

void print(int x)
{
	cout << x << endl;
}
void print(double y)
{
	cout << y << endl;
}
void print(const string &s)
{
	cout << s << endl;
}
