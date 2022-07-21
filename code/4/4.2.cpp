#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	char *cp = "Hello World";
	while(cp && *cp){//cp不是空指针，*cp不是null，'\0' 
		cout << *cp << endl;
		++cp;
	}
	return 0;
}
