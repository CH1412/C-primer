#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef bool (*cmpFcn)(const string &, const string &);//ʹ��typedef�򻯺���ָ�붨�� 
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
//	  ff��һ����������һ���β�x�����ؽ����һ������ָ��int (*)(int *, int) 
//int (*ff(int x))(int *, int)
PF ff(int x)
{
	cout << x << endl;
	return demo;//����������һ��ָ�� 
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
	//		pf��һ��ָ�룬ָ������ָ�룺������������bool 
	bool (*pf)(const string &, const string &);//�������()
	bool (*pf2)(const string &, const string &);
	cmpFcn pf3;//ͨ��typedef�򻯺���ָ�붨�� 
	
//	pf = &lengthCompare;//ָ������ָ�� 
	pf = lengthCompare;//�������־���ָ������ַ��ָ�룬���԰�&ʡ�� 
	 
	cout << lengthCompare("hello", "world") << endl;//ֱ�ӵ��ú��� 
//	cout << (*pf)("hello", "world") << endl;//ͨ��������ָ����ú���
	cout << pf("hello", "world") << endl;
	
//	pf3 = sumLength;//����ָ������һ�����͵ĺ��������뷵�����ͺ��βζ�һ�²ſ���

	useBigger("bruce", "lee", pf);//Ҳ����ֱ�Ӵ���������
	
	int a=5;
	cout << ff(2)(&a, a) << endl;
	
	//ָ�����غ�����ָ�룬����Ҫ��ȷƥ��
//	void (*pf4)(int) = &ff;//�����β����Ͳ�ƥ�� 
	void (*pf5)(unsigned int) = &ff; 
//	double (*pf6)(vector<double>) = &ff;//�����������Ͳ�ƥ�� 
	return 0;
}
