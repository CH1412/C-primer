#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

void error_msg(initializer_list<string> il)
{
	for(initializer_list<string>::iterator beg=il.begin(), end=il.end(); beg != end; ++beg)
		cout << *beg << " ";
	cout << endl;
}

int main()
{
	string expected, actual;
	cout << "Enter two strings:" << endl;
	cin >> expected, actual;
	if(expected != actual)
		error_msg({"functionX", expected, actual});
	else
		error_msg({"functionX", "okay"});
	return 0;
}
