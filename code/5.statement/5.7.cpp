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
	catch(invalid_argument err){//�Ƿ����� 
		cout << "bitset error: " << err.what() << endl;//what()�����ַ�����Ϣ 
	}
	return 0;
}
