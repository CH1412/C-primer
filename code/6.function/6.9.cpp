#include <iostream>
using namespace std;
void doA()
{
	cout << "hello" << endl;
	doA();
}
int Fact(int x)//Çó½×³Ë 
{
	if(x == 0 )
		return 1;
	return x * Fact(x-1);
}
int Fibo(int x)
{
	if(x == 1 || x == 2)
		return x;
	return x + Fibo(x-1);
}

int main()
{
//	doA();
	for(int a=1; a<=10; ++a)
		cout << a << "!=" << Fibo(a) << endl;
	return 0;
}
