#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//字符串的第一个词改成大写形式 
int main()
{
	string s;
	cout << "请输入一行字符串：" << endl; 
	getline(cin, s);
	string::size_type len = s.size();
	for(string::size_type i=0; i != len && !isspace(s[i]); ++i)
		s[i] = toupper(s[i]);
	cout << s << endl;
	return 0;
 } 
