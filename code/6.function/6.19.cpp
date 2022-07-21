#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool is_all_upper(const string &s)
{
	string::size_type k=0, size = s.size();
	for(string::const_iterator iter=s.begin(); iter != s.end(); ++iter){
		if(*iter == toupper(*iter))
			++k;
	}
	if(k == size)
		return true;
	return false;
}

void func(int i)
{
	cout << ++i << endl;
}

void to_lower(string &s)
{
	string::size_type size = s.size();
	for(string::iterator iter=s.begin(); iter != s.end(); ++iter){
		if(islower(*iter))
			*iter = toupper(*iter);
	}
}

int compare(const int a, const int *b)
{
	return a > (*b) ? a : (*b);
}

int main()
{
//	const int i=0;
//	func(i);//1
//	cout << i << endl;//0
	
//	string s;
//	cout << "Enter a string: ";
//	cin >> s;
//	bool flag = is_all_upper(s);
//	if(flag)
//		cout << "是全部都是大写！" << endl;
//	else
//		cout << "不是全部都是大写！" << endl;
//	to_lower(s);
//	cout << "convert to lower: " << s << endl;

	int x=10, y=6;
	cout << compare(x, &y) << endl;
	return 0;
}
