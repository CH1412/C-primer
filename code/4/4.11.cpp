#include <iostream>

using namespace std;

class Dog
{
	//类的成员	
};
void demo()
{
	int i(1024);
	int *pi = new int(1024);//初始化
	
	string s(10,'9');//"9999999999"，堆栈 
	string *ps = new string(10, '9');// 自由存储区 
	
	delete pi;
	delete ps;
}

void demo2()
{
	int *pi = new int;//内置类型，没有小括号()则没有初始化
	int  *pi2 = new int(32);//初始化
	//使用对象 
	delete pi;
	delete pi2;//delete把创建的对象删除，pi2仍保存对象的地址
//	pi2 = 0；//将其设置成空指针 
 }

void demo3()
{
	const int *pci = new const int(1024);
	const string *pcs = new const string;
	
	delete pci;
	delete pcs;
 } 
int main()
{
	int i;//静态 创建对象，对象名 
	int *pi = new int;//动态创建对象，没名，需要使用指针 
	
	i = 12;
	*pi = 12;
	
	string *ps = new string();//默认构造函数初始化，小括号()可写可不写
	
	Dog dog;
	Dog dog2();
	Dog *pdog = new Dog;
	Dog *pdog2 = new Dog();
	
	delete pi;
	delete ps;
	delete pdog;
	delete pdog2;
	
	demo();
	demo2();
	demo3();
	cout << "OK" << endl;
	return 0;
}
