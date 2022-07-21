#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string s;
	ifstream ifs("text.txt", ifstream::in);//文件输入流，默认打开模式为in，文件须存在 
	ifs >> s;
	ifs.close();
	cout << s << endl;
	
	ofstream ofs("file2.txt", ofstream::out);//文件输出流，默认打开模式为out，若文件不存在，将创建文件
	ofs << "Hello file2!" << endl;
	ofs.close();
	
//	ofstream ofs3("file3.txt", ofstream::out);//file3存在，则覆盖原文件
	ofstream ofs3("file3.txt", ofstream::out | ofstream::app);//添加在原文件后，不清空原文件 
	ofs3 << "Test file3" << endl;
	ofs3.close();
	
	fstream fs("file3.txt", fstream::out | fstream::in);//fstream既可以输入也可以输出，不清空 
	fs >> s;
	fs.close();
	cout << s << endl;
	
	fstream fs2("file3.txt", fstream::out | fstream::in | fstream::ate);//在文件末尾添加ate 
	fs2 << "ate";
	fs2.close(); 
	return 0;
}
