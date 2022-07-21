#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

//void print(ofstream of)//函数传参复制，不可 
//{
//	cout << "test!" << endl;
//}

ofstream& print(ofstream& of)//可以返回引用 
{
	cout << "test!" << endl;
//	ofstream of2;//返回局部变量不好 
	return of;
}

void foo(ostream& os)
{
	cout << "test ostream" << endl;
}

int main()
{
	foo(cout);//凡是能接受父类的函数，也能接受子类 
	ofstream ofs;
	foo(ofs);
	
	//cout是ostream对象 
	cout << "Hello, world!" << endl;
	
	fstream fs;
	stringstream ss;
	
	ofstream s1, s2;
//	s1 = s2;//错误，不能复制；函数传参也不行 
	
//	vector<ofstream> vec;
//	vec.push_back(s1);
//	vec.push_back(s2);//错误，因为保存在容器中的对象必须能够进行复制 
	
	return 0;
}
