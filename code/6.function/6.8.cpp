#include <iostream>
#include <iostream>
using namespace std;
int& add_one(int &x)
{
	++x;
	return x;
 }
//const ��ʾ�����޸� 
const string& shorter_string(const string &s1, const string &s2)
{
	return s1.size() >= s2.size() ? s1 : s2;
}
//const string& mainp(const string &s)
//{
//	string ret = s;
//	return ret;//�����������ص���ret������ret��һ���ֲ����󣡺������ý���������� 
//}
char& get_val(string &s, string::size_type ix)
{
	return s[ix];
 } 

int main()
{
	int a=1;
	int &b = add_one(a);
	++b;
	cout << "a: " << a << " b: " << b << endl;
	cout << "The shorter string is: " << shorter_string("hello", "dog") << endl;
	
	string s("hello");
	char &c = get_val(s, 1);
	c = 'k';
	cout << s << endl; 
	return 0;//����0��ʾ���� 
}
