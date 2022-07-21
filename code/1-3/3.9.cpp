#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//输入一行字符串，如果含有标点符号，将标点符号去除后输出 
int main()
{
	string s, res;
	bool has_punct = false;
	char ch;
	cout << "请输入一行字符串" << endl;
	getline(cin, s);
	string::size_type len = s.size();//计算输入字符换的长度 
	for(string::size_type i=0; i<len; ++i){
		ch = s[i];
		if(ispunct(ch))
			has_punct = true;
		else
			res += ch;
	}
	if(has_punct)
		cout << "结果是：" << res << endl;
	else
		cout << "输入字符串中不含标点符号！" << endl;
	return 0;
}
