#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string word;
	cout << "Enter some words:" << endl;
	while(cin >> word){
		if(islower(word[0]))
			continue;
		else{//���ʵĵ�һ����ĸ��д 
			cout << "Get a big xie word: \""
				<< word << "\" its size is "
				<< word.size() << endl;
		}
	}
	return 0;
}
