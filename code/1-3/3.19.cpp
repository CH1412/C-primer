#include <iostream>
#include <vector>

using namespace std;
//ʹ�õ��������ж��ֲ��� 
int main()
{
	vector<string> text;
	string word, sought;
	cout << "������������ҵĵ��ʣ�" << endl;
	cin >> sought;
	cout << "������һ���ַ�����" << endl;
	while(cin >> word)
		text.push_back(word);
	vector<string>::iterator beg = text.begin(), end = text.end();
	vector<string>::iterator mid = beg + (end - beg) / 2;
	//ִ������ѭ��
	while(mid != end && *mid != sought){
		if(sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}
	if(mid != end)
		cout << "Get it:" << *mid << endl;
	else
		cout << "no found!" << endl;
	return 0;
}
