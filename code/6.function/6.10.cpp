#include <iostream>
using namespace std;
//函数声明，也是函数定义 
void print(int *array, int size)
{
	for(int i=0; i != size; ++i)
		cout << array[i] << endl;
}
//函数声明
int sum(int a=1, int b=2);//参数名可以省略 
int main()
{
//	int a[] = {4, 5, 6, 3};
//	print(a, 4);
	
	return 0;
}
int sum(int a, int b)//默认形参只能在声明或定义中的一个写，建议写在声明 
{
	return a + b;
}
