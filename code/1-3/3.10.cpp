#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//�ַ����ĵ�һ���ʸĳɴ�д��ʽ 
int main()
{
	string s;
	cout << "������һ���ַ�����" << endl; 
	getline(cin, s);
	string::size_type len = s.size();
	for(string::size_type i=0; i != len && !isspace(s[i]); ++i)
		s[i] = toupper(s[i]);
	cout << s << endl;
	return 0;
 } 
