#include <iostream>

using namespace std;

void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}
void f(int a, int b)
{
	cout << "f(int a, int b)" << endl; 
}
void f(double a, double b=3.14)
{
	cout << "f(double a, double b=3.14)" << endl;
}
void g(int a)
{
	cout << "g(int a)" << endl;
}
int main()
{
	f();//f() 
	f(8);//f(int a)
	f(5.6);//�������к���f(int a), f(double a, double b=3.14)���ƥ��
//	f(42, 2.56);//���ڶ����ԣ�����
//	f(3.14, 20);//���ڶ����� 
	f(5, 6);//f(int, int)
	f(3.14, 2.09);//f(double, double)
	return 0;
}
