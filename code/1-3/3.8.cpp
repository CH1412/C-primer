#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s("Hello, world!");
	string::size_type n=0;	//n��������
	string::size_type len;
	len = s.size();
	for(string::size_type i=0; i<len; ++i){
		if(ispunct(s[i]))
			n++;
	} 
	cout << s << " ����" << n  << "������." << endl; 
	return 0;
}
