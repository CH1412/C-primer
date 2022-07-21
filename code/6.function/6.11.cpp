#include <iostream>
using namespace std;
//带有inline的函数:内联函数 
//在编译的时候将内联函数展开，速度更快 
inline int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int x[] = {1,2,3,4,5};
	int y[] = {1,2,3,4,5};
	for(int i=0; i<5; ++i)
		cout << sum(x[i],y[i]) << endl;
	
	return 0;
}
