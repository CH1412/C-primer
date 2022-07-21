#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main()
{
	//use string
	string s1("hello"), s2("world");
	if(s1 == s2)
		cout << "same string" << endl;
	else if(s1 < s2)
		cout << s1 << " < " << s2 << endl;
	else
		cout << s1 << " > " << s2 << endl;
	cout << "=============" << endl;
	//using C-style character strings.
	const char *cs1 = "Bruce";
	const char *cs2 = "Lee";
	int res = strcmp(cs1, cs2);
	if(res == 0)
		cout << "same string" << endl;
	else if(res < 0)
		cout << "Bruce < Lee" << endl;
	else
		cout << "Bruce > Lee" << endl;
	return 0;
 } 
