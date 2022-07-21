#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
	string s("this is a string");
	
	for(auto &x : s)
		x = 'X';
	cout << s << endl;
}
