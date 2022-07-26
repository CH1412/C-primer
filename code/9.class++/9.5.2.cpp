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
	
	friend int calArea(Screen &);	//��Ԫ���� 
	friend class Window_Mgr;		//��Ԫ��
//	friend class Dog;
	friend int Dog::foo(Screen &);	//�����ĳ����Ա������Ԫ 
	
};
// �ǳ�Ա���� 
int calAera(Screen &screen){
	return screen.width * screen.height;
}

class Window_Mgr{	//���ڹ����࣬��Screen���й��� 
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
