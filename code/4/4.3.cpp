#include <iostream>


using namespace std;
int main()
{
	int a = -127;//最高位为符号位，c++没有规定如何操作符号位 
	
	unsigned char bits = 0227;//一个八进制位等于3个二进制位，010 010 111，十进制：151 
	//一个char是八位二进制，所以是 10 010 111 
	
	//取反 
	bits = ~bits;//取反,01 101 000,十进制：104
	cout << int(bits) << endl;//104
	
	//位移 
	bits = 1;
	unsigned char res;
	res = bits << 1;//左移1位(放大一倍) ，10 
	cout << (int)res << endl;//2
	res = bits << 2;//左移2位, 100
	cout << int(res) << endl;//4 
	
	bits = 64;
	res = bits >> 3;//向右移动3位，缩小2^3=8倍 
	cout << int(res) << endl;//8
	
	//位与
	unsigned char b1 = 0145;// 001 100 101
	unsigned char b2 = 0257;//010 101 111
	unsigned char result = b1 & b2;//位与： 000 100 101
	cout << (int)result << endl;//37
	
	//位或
	result = b1 | b2;//011 101 111
	cout << (int)result << endl;//239
	
	//位异或
	result = b1 ^ b2;//相同为0，不同为1  011 001 010
	cout << (int)result << endl;//202
	return 0;
 } 
