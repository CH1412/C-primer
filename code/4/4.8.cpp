#include <iostream>
#include <string>
#include <vector>

using namespace std;
//vector<string*>中存放指向string的指针，读取string 
int main()
{
	vector<string*> spvec;
	string s;
	cout << "Entry some strings:" << endl;
	while(cin >> s){
//		string *ps = s;
		string *ps = new string;
		*ps = s;
		spvec.push_back(ps);
	}	
	cout << "cout strings:" << endl;
	vector<string*>::iterator iter = spvec.begin();
	while(iter != spvec.end()){
		cout << **iter++ << " size: " << (**iter).size() << endl;//or (*iter)->size()
//		++iter;
	}
	//删除new 
	iter = spvec.begin();
	while(iter != spvec.end()){
		delete *iter;
		++iter;
	}
	return 0;
 } 
