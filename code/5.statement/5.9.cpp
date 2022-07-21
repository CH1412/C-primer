#include <iostream>
#include <cassert>
using namespace std;
int money = 60000;
void Qu(int dollar)
{
	if(dollar<0){
		cout << "取钱数量不能小于0"
			<< "\n文件：" << __FILE__	//返回文件文职 
			<< "\n行：" << __LINE__		//行：10 
			<< "\n日期：" << __DATE__	//日期：当前日期 
			<< "\n时间：" << __TIME__ << endl;	//时间：当前时间 
		return;
	}
	money -= dollar;
}

int add(int x, int y){
	return x*y;
} 
 
int main()
{
	//预处理指令 
#ifndef NDEBUG
	cout << "start main...\n" << endl;
#endif

	Qu(-100);
	
	int res = add(1, 2);//断言：用来调试，出错时，显示Assertion Failed! 
	
//	if(res != 3){
//		cout << "wrong result!" << endl;
//	}
	assert(res==3);
#ifndef NDEGUG
	cout << "\nend main..." << endl;
#endif
	return 0;
}
