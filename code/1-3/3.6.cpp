#include <iostream>
#include <string>

using namespace std;
//�Ƚ������ַ����Ĵ�С 
int main()
{
	string s1, s2;
	cout << "Enter two strings:" << endl;
	cin >> s1 >> s2;
	if(s1 == s2)
		cout << "They are equal." << endl;
	else if(s1 > s2)
		cout << "\"" << s1 << "\" is bigger than" << "\""
			<< s2 << "\"\n";
	else
		cout << "\"" << s2 << "\" is bigger than" << "\""
			<< s1 << "\"\n";	
	return 0;
}
