#include <iostream>
#include <string>
using namespace std;
//���������ظ��ĵ��ʣ�����ظ��������ĵ���
// how now now now brown cow cow
// now 3
int main()
{
	string pWord, cWord, rWord;//�ϵ��� ��ǰ���� �ظ�������൥�� 
	int cCnt=0, maxCnt = 1;
	cout << "���������ظ��ĵ��ʣ�" << endl;
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
		pWord = cWord;//ѭ�������н�cWord�������� 
	}
	//��������ж�,�����һ������һ���൱ʱ��while����н�����cCnt����Ҫ�ٴ��ж�cCnt��maxCnt��ϵ 
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
