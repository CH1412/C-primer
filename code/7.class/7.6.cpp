#include <iostream>
#include <vector>
#include <string>
#include <fstream>//�����ļ�������ȡ�ļ� 
using namespace std;

int fileToVector(string fileName, vector<string>& svec)
{
	ifstream inFile(fileName.c_str());
	if(!inFile)
		return 1;//�ļ�Ϊ�� 
	string s;
//	while(getline(inFile, s))//��ȡһ�� 
//		svec.push_back(s);
	while(inFile >> s)
		svec.push_back(s);
	inFile.close();
	if(inFile.eof())
		return 4;//�ļ����� 
	if(inFile.bad())
		return 2;//�ļ����� 
	if(inFile.fail())
		return 3;//���ļ�ʧ�� 
}

int main()
{
	cout << "���ԣ�" << endl;
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
	cout << "�������������ݣ�" << endl;
	for(vector<string>::iterator iter=svec.begin(); iter!=svec.end(); ++iter){
		cout << *iter << endl;
	}
	cout << "The size of the file is " << svec.size() << "��/����" << endl;
	return 0;
}
