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
	d.foo();//.������������ó�Ա����
	
	Dog *p;
	(*p).foo();
	p->foo();//->����ͷ������ 
	return 0;
 } 
