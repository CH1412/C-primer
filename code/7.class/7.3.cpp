#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main()
{
//	ofstream outfile("text.txt");//��������ʱ�ͺ��ļ�����һ�𣬻Ḳ��ԭ�ļ� 
//	outfile << "Hello file!";//д���ļ�
//	outfile.close();//�ر��ļ� 
	
	string file("a.txt");
	ifstream infile(file.c_str());//�����ļ���������ļ�,ʹ��C����ַ���;ע�⣺C++11����ʹ��string���� 
//	if(infile)//���ļ��ɹ�
	if(!infile)
		cerr << "���ļ�ʧ��" << endl;
	string s;
	//infile ״̬��eofʱ���� 
	while(infile >> s)//ÿ�ζ���һ�� 
		cout << s << endl;
	infile.close();//inflie��״̬������Ϊ�رն������ı䣻C++11��ָ� 
	
//	infile.clear();//���eof��״̬���ٰ���һ�ļ���ע��C++11���Բ������ 
	infile.open("text.txt");//��������ʱδ�󶨣�ʹ��open��
	if(!infile)
		cout << "open file failure" << endl;
	string str;
	while(infile>>str)
		cout << str << endl;
	infile.close(); 
	
	return 0;
}
