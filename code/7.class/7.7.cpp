#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string s;
	ifstream ifs("text.txt", ifstream::in);//�ļ���������Ĭ�ϴ�ģʽΪin���ļ������ 
	ifs >> s;
	ifs.close();
	cout << s << endl;
	
	ofstream ofs("file2.txt", ofstream::out);//�ļ��������Ĭ�ϴ�ģʽΪout�����ļ������ڣ��������ļ�
	ofs << "Hello file2!" << endl;
	ofs.close();
	
//	ofstream ofs3("file3.txt", ofstream::out);//file3���ڣ��򸲸�ԭ�ļ�
	ofstream ofs3("file3.txt", ofstream::out | ofstream::app);//�����ԭ�ļ��󣬲����ԭ�ļ� 
	ofs3 << "Test file3" << endl;
	ofs3.close();
	
	fstream fs("file3.txt", fstream::out | fstream::in);//fstream�ȿ�������Ҳ�������������� 
	fs >> s;
	fs.close();
	cout << s << endl;
	
	fstream fs2("file3.txt", fstream::out | fstream::in | fstream::ate);//���ļ�ĩβ���ate 
	fs2 << "ate";
	fs2.close(); 
	return 0;
}
