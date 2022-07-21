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
		else{//单词的第一个字母大写 
			cout << "Get a big xie word: \""
				<< word << "\" its size is "
				<< word.size() << endl;
		}
	}
	return 0;
}
