#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef bool (*cmpFcn)(const string &, const string &);//使用typedef简化函数指针定义 
typedef int (*PF)(int *, int);

bool lengthCompare(const string &s1, const string &s2)
{
	return s1.size() == s2.size();
}

string::size_type sumLength(const string &s1, const string &s2)
{
	return s1.size() + s2.size();
}

void useBigger(const string &s1, const string &s2, bool (*pf)(const string &, const string &))
{
	cout << pf(s1, s2) << endl;
}

int demo(int *p, int a)
{
	return 12;
}
//	  ff是一个函数，有一个形参x，返回结果是一个函数指针int (*)(int *, int) 
//int (*ff(int x))(int *, int)
PF ff(int x)
{
	cout << x << endl;
	return demo;//函数名字是一个指针 
}

void ff(vector<double> vec)
{
	cout << "ff(vector<double> vec" << endl;
}
void ff(unsigned int x)
{
	cout << "ff(unsigned int x)" << endl;
}

int main()
{
	//		pf是一个指针，指向函数的指针：函数返回类型bool 
	bool (*pf)(const string &, const string &);//必须加上()
	bool (*pf2)(const string &, const string &);
	cmpFcn pf3;//通过typedef简化函数指针定义 
	
//	pf = &lengthCompare;//指向函数的指针 
	pf = lengthCompare;//函数名字就是指向函数地址的指针，可以把&省略 
	 
	cout << lengthCompare("hello", "world") << endl;//直接调用函数 
//	cout << (*pf)("hello", "world") << endl;//通过解引用指针调用函数
	cout << pf("hello", "world") << endl;
	
//	pf3 = sumLength;//报错，指向另外一种类型的函数，必须返回类型和形参都一致才可以

	useBigger("bruce", "lee", pf);//也可以直接传函数名称
	
	int a=5;
	cout << ff(2)(&a, a) << endl;
	
	//指向重载函数的指针，必须要精确匹配
//	void (*pf4)(int) = &ff;//错误，形参类型不匹配 
	void (*pf5)(unsigned int) = &ff; 
//	double (*pf6)(vector<double>) = &ff;//出错，返回类型不匹配 
	return 0;
}
