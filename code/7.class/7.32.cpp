#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void process(string &s)
{
	cout << s << endl;
}

int main()
{
	vector<string> files;
	files.push_back("a.txt");
	files.push_back("text.txt");
	files.push_back("b.txt");
	
	string s;
	vector<string>::const_iterator it = files.begin();
	while(it != files.end()){
		ifstream input(it->c_str());
		if(!input){
			cout << "error: can not open file: "
				<< *it << endl;
//			break;//停止
			++it;
			continue;//结束错误文件，读取下一个文件 
		}
		while(input>>s)
			process(s);
		input.close();//读文件结束，关闭文件 
		++it;
	}
	return 0;
}
