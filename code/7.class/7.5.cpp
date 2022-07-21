#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
using namespace std;

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
	string fileName;
	cout << "Enter file name: " << endl;
	cin >> fileName;
	
	ifstream inFile(fileName.c_str());
	if(!inFile){
		cerr << "error: can not open the file: " << fileName << endl;
		return -1;
	}
	get(inFile);//ifstream是istream的派生类 
	
	return 0;
}

