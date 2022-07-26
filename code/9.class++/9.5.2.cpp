#include <iostream>
#include <string>
using namespace std; 

class Screen;

class Dog{
	public:
		int foo(Screen &screen);
		
		int koo(Screen &screen);
};

class Screen{
	public:
		typedef string::size_type index;
		
		Screen(int ht=0, int wd=0) : contents(ht*wd, ' '), cursor(0), height(ht), width(wd) {}
		
		
		int area() const{
			return width * height;
		}
		
	private:
		string contents;
		index cursor;
		int height, width;
	
	friend int calArea(Screen &);	//友元函数 
	friend class Window_Mgr;		//友元类
//	friend class Dog;
	friend int Dog::foo(Screen &);	//仅类的某个成员函数友元 
	
};
// 非成员函数 
int calAera(Screen &screen){
	return screen.width * screen.height;
}

class Window_Mgr{	//窗口管理类，对Screen进行管理 
	public:
		void relocate(int r, int c, Screen &s){
			s.height += r;
			s.width += c;
		}
};

int Dog::foo(Screen &){
	return screen.height * screen.width;
}

int Dog::koo(Screen &){
//	return screen.height * screen.width;
	return screen.area();
}

int main()
{
	Screen a(60, 100);
	cout << a.area() << endl;
	cout << calArea(a) << endl;
	return 0;
}
