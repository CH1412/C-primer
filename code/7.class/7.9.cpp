#include <iostream>
#include <string>
#include <fstream>
#include <sstream>//�ַ����� 
using namespace std;

int main()
{
	//cout��������ostream 
	cout << "Hello" << endl;
	
	//ofs���ļ������ 
	ofstream ofs("text.xtx");
	ofs << "hello" << endl;
	ofs.close();
	
	//�ַ��������
	ostringstream oss;
	oss << "hello!" << endl;
	cout << "��ʾ�ַ������е��ַ�����" << oss.str() << endl;
	
	ostringstream format_message;
	format_message << "������"  << "�ŷ�" << "\n"
		<< "���䣺" << 22 << "\n"
		<< "���أ�" << 88.5 << "\n";//�������ַ������� 
	cout << "��ʾ�ŷɣ�\n" << format_message.str() << endl;
	 
	string dump;//����������
	string name;
	int age;
	double weight;
	istringstream input_istring(format_message.str());
	input_istring >> dump;//�ӵ��������� 
	input_istring >> name;
	input_istring >> dump;
	input_istring >> age;//���Զ��ؽ��ַ���ת��Ϊ��ֵ 
	input_istring >> dump;
	input_istring >> weight;
	cout << "�����Ľ����" << endl;
	cout << name << endl;
	cout << age << endl;
	cout << weight << endl;
	return 0;
}
