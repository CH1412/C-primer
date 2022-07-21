#include <iostream>
using namespace std;

//C++允许使用同一个函数名定义多个函数，要求参数类型不同-函数重载 
void func(int i)
{
	cout << i << endl;
}
void func(double i)
{
	cout << i << endl;
}
int getBigger(int x, const int *y)
{
	return x > *y ? x : *y;
}
void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void swap2(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void swap3(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a=2, b=9;
	cout << getBigger(a, &b) << endl;
	cout << "a: " << a << " b: " << b << endl;
	swap3(a, b);
	cout << "a: " << a << " b: " << b << endl;
	return 0; 
}
