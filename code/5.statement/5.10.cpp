#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//�����һ����ĸ��д�����ظ��ĵ��� 
int main()
{
	string currWord, preWord;
	cout << "Entry some words: " << endl;
	while(cin >> currWord){
#ifndef NDEBUG
		cout << "���ԣ�" << currWord << endl;//���ǵ����õ�
#endif
		if(!isupper(currWord[0]))//��һ����ĸСд������ѭ�� 
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
