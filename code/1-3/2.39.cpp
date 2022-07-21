#include <iostream>
using namespace std;
// 编译不写类定义体后面的分号会发生什么？ 
// [Error] expected ';' after struct definition
struct Foo{
}
int main()
{
	return 0;
}
