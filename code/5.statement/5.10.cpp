#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//输出第一个字母大写并且重复的单词 
int main()
{
	string currWord, preWord;
	cout << "Entry some words: " << endl;
	while(cin >> currWord){
#ifndef NDEBUG
		cout << "调试：" << currWord << endl;//这是调试用的
#endif
		if(!isupper(currWord[0]))//第一个字母小写的跳过循环 
			continue;
		if(currWord==preWord)
			break;
		else
			preWord = currWord; 
	}
	if(currWord == preWord && !currWord.empty())
		cout << "The first repeated word: " << currWord << endl;
	else
		cout << "Not Found!" << endl;
	return 0;
}
