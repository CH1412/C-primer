#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

//void print(ofstream of)//�������θ��ƣ����� 
//{
//	cout << "test!" << endl;
//}

ofstream& print(ofstream& of)//���Է������� 
{
	cout << "test!" << endl;
//	ofstream of2;//���ؾֲ��������� 
	return of;
}

void foo(ostream& os)
{
	cout << "test ostream" << endl;
}

int main()
{
	foo(cout);//�����ܽ��ܸ���ĺ�����Ҳ�ܽ������� 
	ofstream ofs;
	foo(ofs);
	
	//cout��ostream���� 
	cout << "Hello, world!" << endl;
	
	fstream fs;
	stringstream ss;
	
	ofstream s1, s2;
//	s1 = s2;//���󣬲��ܸ��ƣ���������Ҳ���� 
	
//	vector<ofstream> vec;
//	vec.push_back(s1);
//	vec.push_back(s2);//������Ϊ�����������еĶ�������ܹ����и��� 
	
	return 0;
}
