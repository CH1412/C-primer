#include <iostream>
#include <bitset>

using namespace std;
//假设班内有30名学生，学生是否及格用01表示 
int main()
{
	bitset<30> a;
	unsigned long b = 0;
	
	a.set(27);//第27位置1
	b = b | (1UL << 27);//将第27位置1
	
	a.reset(22);//将第22位置0
	b = b & ~(1UL<<22);//将第22位置0
	
	bool status;
	status = a[27];
	status = b & (1UL<<27);//查看第27位置
	cout << status << endl;//1 
	return 0;
 }
