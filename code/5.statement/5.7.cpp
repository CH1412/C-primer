#include <iostream>
#include <bitset>
#include <string>
#include <stdexcept>
using namespace std; 

int main()
{
	try{
		string s("1010ab0010");
		bitset<10> b(s);
		cout << "bitset OK";
	}
	catch(invalid_argument err){//非法参数 
		cout << "bitset error: " << err.what() << endl;//what()返回字符串信息 
	}
	return 0;
}
