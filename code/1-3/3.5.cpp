#include <iostream>
#include <string>
using namespace std;
//�������ַ�������������������һ��������ӳɵĴ��ַ��� 
int main()
{
	string line, str;
	while(getline(cin, line))
		//str += line;
		str = str + line + " ";
	cout << str;
	return 0;
}
