#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
	char c1[] = {'C', '+', '+'};
	char c2[] = {'P', 'y'};
	strncpy(c1, c2, 1);
	for(int i(0); c1[i]; ++i)
		cout << c1[i] << " " << endl;
	return 0;
}
