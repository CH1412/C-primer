#include <iostream>
#include <string>
using namespace std;
void doOp(int x, int y, int &add, int &sub, int &cheng, int &chu)//�����ֵͨ�����÷��� 
{
	add = x + y;
	sub = x - y;
	cheng = x * y;
	chu = x / y;
}
bool isShorter(const string &s1, const string &s2)//�����ã�����Ҫ���ƣ���ʡ�洢�ռ� 
{
	return s1.size() < s2.size();
 }

string::size_type find_char(const string &s, char c)//�����ַ�c���ַ�����һ�γ��ֵ��±� 
{
	string::size_type i = 0;
	while(i != s.size() && s[i] != c)
		++i;
	return i;
}
int main()
{
	int a=3, b=4;
	int add, sub, cheng, chu;
	doOp(a, b, add, sub, cheng, chu);
	cout << add << " " << sub << " " << cheng << " " << chu << endl; 
	
	string s1("one");
	string s2("hello");
	
	if(isShorter(s1, s2))
		cout << "s1 is shorter!" << endl;
	else
		cout << "s2 is shorter!" << endl;
		
	string s("hello world");
	cout << find_char(s, 'o') << endl;
	
	return 0;
}
