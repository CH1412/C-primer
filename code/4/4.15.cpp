#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2, str3;
	do{
		cout << "Entry two strings: " << endl;
		cin >> str1 >> str2;
		if(str1 < str2)
			cout << "The first is smaller than the second" << endl;
		else if(str1 > str2)
			cout << "The first is bigger than the second" << endl;
		else
			cout << "The same" << endl;
		cout << "Go on?(yes or no)" << endl;
		cin >> str3;
	}while(!str3.empty() && str3[0] != 'n');
	return 0;
}
