#include <iostream>
#include <string>
using namespace std;
//读入多个字符串，并将它们连接在一起，输出连接成的大字符串 
int main()
{
	string line, str;
	while(getline(cin, line))
		//str += line;
		str = str + line + " ";
	cout << str;
	return 0;
}
