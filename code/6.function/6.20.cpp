#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string s;
	for(int i=1; i != argc; ++i)
		s += string(argv[i]) + " ";//string将C风格字符串转化为字符串，字符串可以和空格" "拼接 
	cout << "拼接结果：" << s << endl;
	return 0;
}
