#include <iostream>
#include <string>
using namespace std;

void doA(){
	int a;
	a = 12;
}

void doB(){
	int b;
	b = 99;
}

class First{
	public:
		int memi;
		double memd;
	public:
		void doC(){
			memi = 22;
		}
		void doD(){
			doC();
		}
};

class ScreenA{
	public:
		typedef string::size_type index;
		char get(index r, index c) const;
		index get_cursor() const;
		
	private:
		string contents;
		index cursor;
		index height, width;
};

char ScreenA::get(index r, index c) const{	//"SreenA::"作用域操作符 
	index row = r * width;
	return contents[row+c];
}

ScreenA::index ScreenA::get_cursor() const{	//类型别名index前也要加上类作用域 
	return cursor;
}

int height;
class ScreenB{
	public:
		typedef string::size_type index;
		void dummy_func(index height){
//			cursor = width * height;	//形参height隐藏了类私有成员height，隐藏了外部变量height 
//			cursor= width * this->height;	//this指向类成员height
			cursor = width * ::height;//::表示全局作用域的变量，即int height 
		}
		
	private:
		index cursor;
		index height, width;
}; 

int main()
{
	doA();
	doB();
	//doC()
	
	First obj;
	obj.memi = 12;
	First *ptr = &obj;
	ptr->doC();
	
	ScreenA::index ht;
	return 0;
}
