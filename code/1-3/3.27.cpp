#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
	const char *pc = "a very long literal string";
	const size_t len = strlen(pc);
	
	for(size_t ix=0; ix !=10; ++ix){
		char *pc2 = new char[len+1];//C风格字符串拷贝！ 
		strcpy(pc2, pc);
		
		cout << pc2 << endl;
		delete[] pc2;
	}
	
	string str("a very long literal string");
	for(int ix=0; ix != 6; ix++){
		string str2 = str;//就是string copy
		cout << "C++:" << str2 << endl;
	}
	return 0;
}
