#include <iostream>
#include <malloc.h>
#include <string>

using namespace std;
//动态数组创建 
class Dog
{
};
int main()
{
	
	int *pia = new int[10];//内置类型int，没有初始化 
	
	string *psa = new string[10];//默认的构造函数初始化 
	
	Dog *pDog = new Dog[10];
	
	int *pia2 = new int[10]();//初始化 
	
	cout << *(pia2+2) << endl;//2
	
	const int *pci_bad = new const int[100]();//
	//char arr[0];//错误：静态数组大小不能为0
	char *cp = new char[0];//动态数组大小可以是0
	
	cout << "请输入动态数组的大小：";
	size_t n;
	cin >> n;
	int *p = new int[n];
	for(int *q=p; q != p+n; ++q){
		*q = 12;
		cout << *q << endl;
	}
	//必需写上delete[]，防止内存泄露 
	delete[] pia;
	delete[] psa;
	delete[] pDog;
	delete[] pia2;
	delete[] pci_bad;
	delete[] cp;
	delete[] p; 
	return 0;
}

