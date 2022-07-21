#include <iostream>

using namespace std;
 
void ff(int x)
{
	cout << "ff(int x)" << endl;
}
void ff(short y)
{
	cout << "ff(short x)" << endl;
}

void f(double x)
{
	cout << "f(double x)" << endl;
}
void f(float x)
{
	cout << "f(float x)" << endl;
}
void f(int *p)
{
	cout << "f(int *p)" << endl;
}
void f(const int *p)
{
	cout << "f(const int *p)" << endl;
}

int main()
{
	ff('a');//cahr类型优先转换成int
	f(3.14);//优先double 
	
	int m=4, n=5;
	int *p = &m;
	const  int *k = &n;
	f(p);
	f(k);
	return 0;
}
