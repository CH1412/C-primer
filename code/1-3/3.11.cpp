#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//����һ��ʮ�������֣�����ת����ʮ��������ʽ 
int main()
{
	const string hexdigits = "0123456789ABCDEF";
	string res;
	string::size_type i;//���ڴ�����������
	while(cin >> i)
		res += hexdigits[i];
	cout << res; 
	return 0;
}
