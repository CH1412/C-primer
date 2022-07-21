#include <iostream>
#include <string>
using namespace std;
void doOp(int x, int y, int &add, int &sub, int &cheng, int &chu)//将结果值通过引用返回 
{
	add = x + y;
	sub = x - y;
	cheng = x * y;
	chu = x / y;
}
bool isShorter(const string &s1, const string &s2)//传引用，不需要复制，节省存储空间 
{
	return s1.size() < s2.size();
 }

string::size_type find_char(const string &s, char c)//返回字符c在字符串第一次出现的下标 
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
