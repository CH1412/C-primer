#include <iostream>
#include <string>

using namespace std;

class Dog
{
	public:
		void foo()
		{
			cout << "Hello Dog foo!" << endl;
		}
};
int main()
{
	Dog d;
	d.foo();//.：点操作符调用成员函数
	
	Dog *p;
	(*p).foo();
	p->foo();//->：箭头操作符 
	return 0;
 } 
