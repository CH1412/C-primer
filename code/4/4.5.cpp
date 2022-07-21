#include <iostream>

using namespace std;
int main()
{
	int a;
	a = 1;//赋值，不是等于
	a = a + 1;
	//赋值操作符左边必需是一个 非const左值
	int i, j, ival, jval;
	ival = 5;
	j = 3.14;//3，赋值表达式类型是左侧值的类型 
	i = 12;
	//可以连续赋值
	ival = jval = 0;//先把0赋值给jval，在把jval赋值给ival 
	const int ci = i;
	//1024 = i;//错误 
	// i + j = ival;//错误
//	ci = ival;//错误，ci是const 
	cout << a << endl;
	
	double d;
	d = i = 3.5;//先将3.5赋值给i，i=3，再将i赋值给d=3
	cout << d << " " << i << endl;
	i = d = 3.5;
	cout << d << " " << i << endl;//d=3 i=3.5
	return 0;
 } 
