#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
using namespace std;

ifstream& open_file(ifstream &in, const string &file)//���ӱ��� 
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
			in.clear();//�������״̬
			in.ignore(200, '\n');
			continue; 
		}
		cout << "��������ݣ�" << ival << endl;
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
	//���ļ� 
	if(!open_file(inFile, fileName)){
		cout << "error: can not open file" << endl;
		return -1;
	}
	
	//��ȡ�ļ�����
	get(inFile);
	inFile.close(); 
	return 0;
}
