#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	char *cp = "Hello World";
	while(cp && *cp){//cp���ǿ�ָ�룬*cp����null��'\0' 
		cout << *cp << endl;
		++cp;
	}
	return 0;
}
