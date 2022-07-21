#include <iostream>
#include <string> 
using namespace std;
//类的构造函数
class Person
{
	public:
		//默认的构造函数，没有参数 
		Person():money(0)//类的构造函数; 初始化列表 
		{
//			money = 0; 
		} 
	public:
		int money;
		
};
class Dog
{
	public:
		int num;
		string name;
}; 
Dog d;//全局对象，基本内置类型会自动初始化 

int main()
{
	Person a, b;//创建对象时，是通过调用person的构造函数创建的 
	
	cout << a.money << endl;
	cout << b.money << endl;
	
	cout << "Hello, 构造函数" << endl << endl;;
	Dog c;//创建局部对象c，基本内置类型不会进行初始化；如果定义静态局部对象，则同全局对象 
	cout << "局部对象：" << endl;
	cout << c.name << endl;
	cout << c.num << endl;//未进行初始化，乱值
	cout << "全局对象："  << endl;
	cout << d.num << endl;
	cout << d.name << endl; 
	return 0;
}
