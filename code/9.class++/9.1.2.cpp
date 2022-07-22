#include <iostream>
#include <string>

using namespace std;

class Screen{
	public:
		
		typedef string::size_type index;	//类型别名 
		
		Screen(index ht=0, index wd=0):contents(ht * wd, 'A'), cursor(0), height(ht), width(wd)
		{}
		Screen(index ht, index wd, const string &conts);
//		char get() const{
//			return contents[cursor];	//返回光标位置处字符 
//		}
		char get() const;	//函数声明 
		
		char get(index r, index c) const
		{
			index row = r * width;
			return contents[row + c];	//返回指定位置处的字符 
		}
		
		
	
	private:
		string contents;//内容 
		index cursor;//光标位置
		index height, width;//窗口高和宽 
};

inline char Screen::get() const{
	return contents[cursor];
}

Screen::Screen(index ht, index wd, const string &conts):contents(conts), cursor(0), height(ht), width(wd)
{}	//不是内联函数 

int main()
{
	Screen a(10, 100);
	cout << a.get() << endl; //A
	cout << a.get(2, 8) << endl; //A
	
	Screen b(3, 6, "hello screen class");
	cout << b.get() << endl; //h
	cout << b.get(1, 4) << endl; //e
	
	return 0;
}
