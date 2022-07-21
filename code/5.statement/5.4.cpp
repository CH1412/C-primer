#include <iostream>
#include <string>
using namespace std;
//输入连续重复的单词，输出重复次数最多的单词
// how now now now brown cow cow
// now 3
int main()
{
	string pWord, cWord, rWord;//上单词 当前单词 重复次数最多单词 
	int cCnt=0, maxCnt = 1;
	cout << "输入连续重复的单词：" << endl;
	while(cin >> cWord){
		if(cWord == pWord)
			++cCnt;
		else{
			if(cCnt > maxCnt){
				maxCnt = cCnt;
				rWord = pWord;
			}
			cCnt = 1;
		}
		pWord = cWord;//循环过程中将cWord保存起来 
	}
	//结束后的判断,当最后一个与上一个相当时，while语句中仅计数cCnt，需要再次判断cCnt与maxCnt关系 
	if(cCnt > maxCnt){
		maxCnt = cCnt;
		rWord = pWord;
	}
	if(maxCnt != 1)
		cout << "The string: " << rWord << " repest " << maxCnt << endl;
	else
		cout << "Bo repeat word" << endl;
	
	return 0;
}
