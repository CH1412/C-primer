#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
using namespace std;

ifstream& open_file(ifstream &in, const string &file)//更加保险 
{
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;
}

istream& get(istream & in)
{
	int ival;
	while(in >> ival, !in.eof()){
		if(in.bad())
			throw runtime_error("IO stream corrupted");
		if(in.fail()){
			cerr << "bad data, try again" << endl;
			in.clear();//清除流的状态
			in.ignore(200, '\n');
			continue; 
		}
		cout << "输入的数据：" << ival << endl;
	}
	in.clear();

	return in;
}

int main()
{
	string fileName, s;
	cout << "Enter filename: ";
	cin >> fileName;
	ifstream inFile;
	//打开文件 
	if(!open_file(inFile, fileName)){
		cout << "error: can not open file" << endl;
		return -1;
	}
	
	//读取文件内容
	get(inFile);
	inFile.close(); 
	return 0;
}
