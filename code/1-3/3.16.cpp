#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;
//ʹ�õ�������дtext�д�д���� 
int main()
{
	vector<string> text;
	string word;
	cout << "������һ���ַ�����" << endl;
	while(cin >> word)
		text.push_back(word);
	vector<string>::iterator it=text.begin();
//	string::iterator i=(it->begin());
	for(; it != text.end() && !it->empty(); ++it){
		for(string::iterator i=(it->begin()); i != it->end(); ++i){
			*i = toupper(*i);
		}
		cout << *it << endl;
	}
	return 0;
}
