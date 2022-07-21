#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//输入一个十进制数字，将它转换而十六进制形式 
int main()
{
	const string hexdigits = "0123456789ABCDEF";
	string res;
	string::size_type i;//用于储存输入数字
	while(cin >> i)
		res += hexdigits[i];
	cout << res; 
	return 0;
}
