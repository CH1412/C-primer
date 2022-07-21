#include <iostream>

using namespace std;
int main()
{
	int i(1024);
	int j(2);
	cout << i + j << endl;
	cout << i - j << endl;
	cout << i * j << endl;
	cout << i / j << endl;
	cout << i % j << endl;
	
	int m = --i;
	cout << "m: " << m << " i: " << i << endl;
	
	//溢出
	short sv = 32767;//short类型的范围是-32768~32767
	short val = 1;
	sv += val;
	cout << sv << endl;//溢出：-32678 
	
	//除号是两用的，整除(两者都是整数)，小数除(至少有一个是小数) 
	double dval = 10 / 3;//整除相除仍是整数，输出：3 
	cout << dval << endl; 
	
	//取余运算的运算对象必需都是整数类型 
	int ival = 45;
	cout << ival % 4 << endl;//1
//	cout << ival % 3.1 << endl;//错误：运算对象是浮点类型
	cout << -21 / -8 << endl;//2
	cout << -21 % -8 << endl;//-5,两个负数取余结果仍是负数 
	cout << -21 / 8 << endl;//-2
	cout << -21 % 8 << endl; //-5,C++标准没有严格规定一个整数2与一个负数取余结果 
	cout << 21 % -8 << endl;//5
	
	//10个一行输出1~100数字
	for(int i(1); i != 101; i++){
		cout << i << " ";
		if(i % 10 == 0)
			cout << endl;
	} 
	return 0;
 } 
