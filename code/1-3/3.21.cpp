#include <iostream>

using namespace std;

typedef string * pstring; 
int main()
{
	string s = "Hello";
	pstring sp = &s;
	cout << *sp << endl;//Hello
	const pstring csp = &s;//�ȼ���ostring const csp;��ָ������ʼ�� 
	return 0;
}
