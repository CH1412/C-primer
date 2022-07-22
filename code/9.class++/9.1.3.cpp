#include <iostream>
#include <string>
using namespace std;

class Screen;	//类声明，未定义不能创建对象，没法分配内存 

class Y{
	private:
		Screen *ptr;//可以创建指向未定义类的指针 
};

class Record{	//一个完整的类，既是类定义又是类声明 
	public:
		Record():byte_count(0) {}
		Record(size_t x):byte_count(x) {}
		Record(string s):name(s), byte_count(0) {}
		
		size_t get_count() const{
			return byte_count;
		}
		
		string get_name() const{
			return name;
		}
			
	private:
		size_t byte_count;
		string name;//记录名称 
}a;	//可以在这定义变量

struct Person{
	public:
		Person(const string &nm, const string &addr):name(nm), address(addr){}
		
		string getName() const{
			return name;
		}
		
		string getAddress() const{
			return address;
		}
		
		
	private:
		string name;
		string address;
};

int main()
{
	Record r;	//在堆栈上创建类的对象
	Record *p = new Record;	//在堆上动态地创建对象
	delete p; 
	
	struct Person per("Bill", "成华大道");
	cout << per.getName() << " " << per.getAddress() << endl; 
	
	return 0;
}
