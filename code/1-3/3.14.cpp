#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;
int main()
{
	vector<string> text;
	string word;
	while(cin >> word)
		text.push_back(word);
	vector<string>::size_type len = text.size(), ix=0;
	cout << "vector<string>对象的长度是" << len << endl;
	for(; ix<len; ++ix){
		string::size_type n = text[ix].size(), i=0;
		for(; i<n; ++i)
			text[ix][i] = toupper(text[ix][i]);
		cout << text[ix] << endl;
	}
	return 0;
 } 
