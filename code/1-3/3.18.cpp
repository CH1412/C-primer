#include <iostream>
#include <bitset>
#include <string>

using namespace std;
int main()
{
	bitset<32> a;//a的大小是32位二进制，全都初始化值是0
	cout << a << endl; 
	
	bitset<16> b(0xffff);//1个十六进制位=4个二进制位，4×4=16位 
	cout << b << endl;
	
	bitset<32> c(0xffff);
	cout << c << endl;//空余位默认填0
	
	bitset<32> d(255);//10进制数初始化，将会被转换为二进制
	cout << d << endl; 
	
	// 使用字符串初始化
	string str("10011001");
	bitset<5> e(str, 3,4);//从str的第3位开始取4个字符，不足的在前面补0  
	cout << e << endl;//输出结果：0 1100 
	
	bitset<32> f(str, str.size()-4);//用字符串最后4位初始化 
	cout << f << endl;//输出：000... 1001 
	return 0;
}
