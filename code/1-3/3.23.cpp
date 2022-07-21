#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char s1[] = {'C', '+', '+'};
	char s2[] = {'C', '+', '+', '\0'};
	char s3[] = "C++";
	
	cout << strlen(s1) << endl;
	cout << strlen(s2) << endl;
	cout << strlen(s3) << endl;
	return 0;
 } 
