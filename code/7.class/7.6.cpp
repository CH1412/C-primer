#include <iostream>
#include <vector>
#include <string>
#include <fstream>//包含文件流，读取文件 
using namespace std;

int fileToVector(string fileName, vector<string>& svec)
{
	ifstream inFile(fileName.c_str());
	if(!inFile)
		return 1;//文件为空 
	string s;
//	while(getline(inFile, s))//读取一行 
//		svec.push_back(s);
	while(inFile >> s)
		svec.push_back(s);
	inFile.close();
	if(inFile.eof())
		return 4;//文件结束 
	if(inFile.bad())
		return 2;//文件错误 
	if(inFile.fail())
		return 3;//打开文件失败 
}

int main()
{
	cout << "测试：" << endl;
	vector<string> svec;
	string fileName, s;
	cout << "Enter filename: ";
	cin >> fileName;
	switch(fileToVector(fileName, svec)){
		case 1:
			cout << "error: can not open file: " << fileName << endl;
			break;
		case 2:
			cout << "error: system failure." << endl;
			return -1;
		case 3:
			cout << "error: read failure." << endl;
			break;
		default:
			cout << "success!" << endl;
	}
	cout << "输出向量里的内容：" << endl;
	for(vector<string>::iterator iter=svec.begin(); iter!=svec.end(); ++iter){
		cout << *iter << endl;
	}
	cout << "The size of the file is " << svec.size() << "行/单词" << endl;
	return 0;
}
