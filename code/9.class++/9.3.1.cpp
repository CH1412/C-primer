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

char ScreenA::get(index r, index c) const{	//"SreenA::"����������� 
	index row = r * width;
	return contents[row+c];
}

ScreenA::index ScreenA::get_cursor() const{	//���ͱ���indexǰҲҪ������������ 
	return cursor;
}

int height;
class ScreenB{
	public:
		typedef string::size_type index;
		void dummy_func(index height){
//			cursor = width * height;	//�β�height��������˽�г�Աheight���������ⲿ����height 
//			cursor= width * this->height;	//thisָ�����Աheight
			cursor = width * ::height;//::��ʾȫ��������ı�������int height 
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
