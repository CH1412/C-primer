#include <iostream>
#include <string>

using namespace std;
string init()
{
	return "Hello";
}
void func()
{
//	int init = 0;//ע�⣺������init��������ͬ����������������
	string s = init();
	cout << s << endl; 
}
void print(int);
void print(double);
void print(const string &);
void foo()
{
	//������������
//	void print(int:;//����һ���ֲ��ĺ������������Ǻ������أ�Ҫ��ͬһ�������������� 
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
