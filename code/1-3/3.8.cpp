#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s("Hello, world!");
	string::size_type n=0;	//n用作计数
	string::size_type len;
	len = s.size();
	for(string::size_type i=0; i<len; ++i){
		if(ispunct(s[i]))
			n++;
	} 
	cout << s << " 中有" << n  << "标点符号." << endl; 
	return 0;
}
