#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//����һ���ַ�����������б����ţ���������ȥ������� 
int main()
{
	string s, res;
	bool has_punct = false;
	char ch;
	cout << "������һ���ַ���" << endl;
	getline(cin, s);
	string::size_type len = s.size();//���������ַ����ĳ��� 
	for(string::size_type i=0; i<len; ++i){
		ch = s[i];
		if(ispunct(ch))
			has_punct = true;
		else
			res += ch;
	}
	if(has_punct)
		cout << "����ǣ�" << res << endl;
	else
		cout << "�����ַ����в��������ţ�" << endl;
	return 0;
}
