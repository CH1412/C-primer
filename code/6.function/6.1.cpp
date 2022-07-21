#include <iostream>

using namespace std;
void AddOne(int x)//参数：非引用形参，就是copy 
{
	x = x + 1;//把copy加一 
}
void AddTwo(int *px)//非引用形参(指针是非引用)，把地址copy 
{
	*px = *px + 2;
}
void AddThree(int &x)//引用形参 
{
	x = x + 3;
}

int main()
{
	int a=1, b=1, c=1;
	AddOne(a);
	AddTwo(&b);
	AddThree(c);
	cout << "a: " << a
		<< "\nb: " << b
		<< "\nc: " << c << endl;
	return 0;
}
