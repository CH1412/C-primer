#include <iostream>

using namespace std;
int main()
{
	char ch;
	int aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0;
	int otherCnt=0; 
	//统计文本中元音字母的个数 
	while(cin >> ch){
		switch(ch)
		{
			//采用直落式，大小写都统计 
			case 'A':
			case 'a':
				++aCnt;
				break;
			case 'E':
			case 'e':
				++eCnt;
				break;
			case 'I':
			case 'i':
				++iCnt;
				break;
			case 'O':
			case 'o':
				++oCnt;
				break;
			case 'U':
			case 'u':
				++uCnt;
				break;
			default:
				++otherCnt;
				break;//default break 可写可不写 
		}
	}
	cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << endl;
	cout << "其它：" << otherCnt << endl;
	return 0;
}
