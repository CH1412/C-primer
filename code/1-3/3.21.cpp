#include <iostream>

using namespace std;

typedef string * pstring; 
int main()
{
	string s = "Hello";
	pstring sp = &s;
	cout << *sp << endl;//Hello
	const pstring csp = &s;//等价于ostring const csp;常指针必需初始化 
	return 0;
}
