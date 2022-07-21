#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main()
{
//	ofstream outfile("text.txt");//创建对象时就和文件绑定在一起，会覆盖原文件 
//	outfile << "Hello file!";//写入文件
//	outfile.close();//关闭文件 
	
	string file("a.txt");
	ifstream infile(file.c_str());//输入文件流对象读文件,使用C风格字符串;注意：C++11可以使用string类型 
//	if(infile)//打开文件成功
	if(!infile)
		cerr << "打开文件失败" << endl;
	string s;
	//infile 状态是eof时结束 
	while(infile >> s)//每次读入一行 
		cout << s << endl;
	infile.close();//inflie流状态不会因为关闭而发生改变；C++11会恢复 
	
//	infile.clear();//清除eof等状态，再绑定另一文件；注：C++11可以不用清除 
	infile.open("text.txt");//创建对象时未绑定，使用open绑定
	if(!infile)
		cout << "open file failure" << endl;
	string str;
	while(infile>>str)
		cout << str << endl;
	infile.close(); 
	
	return 0;
}
