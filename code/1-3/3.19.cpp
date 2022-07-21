#include <iostream>
#include <vector>

using namespace std;
//使用迭代器进行二分查找 
int main()
{
	vector<string> text;
	string word, sought;
	cout << "请输入你想查找的单词：" << endl;
	cin >> sought;
	cout << "请输入一行字符串：" << endl;
	while(cin >> word)
		text.push_back(word);
	vector<string>::iterator beg = text.begin(), end = text.end();
	vector<string>::iterator mid = beg + (end - beg) / 2;
	//执行搜索循环
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
