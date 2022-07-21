#include <iostream>
#include <string>
#include <fstream>
#include <sstream>//字符串流 
using namespace std;

int main()
{
	//cout是流对象，ostream 
	cout << "Hello" << endl;
	
	//ofs是文件输出流 
	ofstream ofs("text.xtx");
	ofs << "hello" << endl;
	ofs.close();
	
	//字符串输出流
	ostringstream oss;
	oss << "hello!" << endl;
	cout << "显示字符串流中的字符串：" << oss.str() << endl;
	
	ostringstream format_message;
	format_message << "姓名："  << "张飞" << "\n"
		<< "年龄：" << 22 << "\n"
		<< "体重：" << 88.5 << "\n";//保存在字符串流中 
	cout << "显示张飞：\n" << format_message.str() << endl;
	 
	string dump;//接受舍弃的
	string name;
	int age;
	double weight;
	istringstream input_istring(format_message.str());
	input_istring >> dump;//扔掉“姓名” 
	input_istring >> name;
	input_istring >> dump;
	input_istring >> age;//会自动地将字符串转换为数值 
	input_istring >> dump;
	input_istring >> weight;
	cout << "读到的结果：" << endl;
	cout << name << endl;
	cout << age << endl;
	cout << weight << endl;
	return 0;
}
