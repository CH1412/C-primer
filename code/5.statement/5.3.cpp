#include <iostream>

using namespace std;
int main()
{
	char ch;
	int aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0;
	int otherCnt=0; 
	//ͳ���ı���Ԫ����ĸ�ĸ��� 
	while(cin >> ch){
		switch(ch)
		{
			//����ֱ��ʽ����Сд��ͳ�� 
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
				break;//default break ��д�ɲ�д 
		}
	}
	cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << endl;
	cout << "������" << otherCnt << endl;
	return 0;
}
