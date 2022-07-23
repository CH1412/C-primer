#include <iostream>
#include <string>

using namespace std;

class Person{
	public:
		Person(const string &nm, const string &addr)
		{
			this->name = nm;
			this->address = addr;
		}
		string getName() const
		{
			return this->name;//this可写可不写 
		}
		string getAddress() const
		{
			return address;
		}
		
	private:
		string name;
		string address;
};

class Screen{	//屏幕上的窗口 
	public:
		typedef string::size_type index;
		
		Screen(index ht=0, index wd=0):contents(ht*wd, 'A'), cursor(0), height(ht), width(wd), access_ctr(0)
		{}

		char get() const {
			return contents[cursor];
		}
		
		char get(index r, index c) const{
			index row = r * width;
			return contents[row+c];
		}
		
		Screen& move(index r, index c);		//改变光标位置 
		Screen& set(index, index, char);	//改变指定位置字符
		Screen& set(char);					//改变光标当前位置字符
		//常函数的返回类型也必须是常量 
		const Screen& display(ostream &os) const {	//显示所有内容 
			++access_ctr;
			do_display(os);
			return *this;
		}
		
		Screen& display(ostream &os){
			++access_ctr;
			do_display(os);
			return *this;
		}
		
	private:
		string contents;
		index cursor;
		index height, width;
		mutable size_t access_ctr;	//计数display调用次数，可变数据成员，可以被const函数修改 
		
		void do_display(ostream &os) const{
			os << contents;
		}
};

Screen& Screen::move(index r, index c){	
	index row = r * width;
	cursor = row + c;
	return *this;	//返回指向该对象的引用 
}

Screen& Screen::set(index r, index c, char ch){
	index row = r * width;
	contents[row+c] = ch;
	return *this;
}

Screen& Screen::set(char c){
	contents[cursor] = c;
	return *this;
}

int main()
{
	Person p("诸葛亮", "荆州");
	Person p2("刘备", "豫州");
	cout << p.getName() << endl;
	cout << p.getAddress() << endl;
	
	
	Screen myScreen(5, 3);
	cout << myScreen.get() << endl;	//A
	
	myScreen.set(3, 2, 'B');
	cout << myScreen.get(3, 2) << endl;	//B
	
//	myScreen.move(2, 3);
//	myScreen.set('C');
	myScreen.move(2, 3).set('C');	//将move()返回值设置为Screen&，返回原对象的引用才可以使用这种写法 
	myScreen.move(4, 0).set('X').move(4, 1).set('Y').move(4, 2).set('Z');
	cout << myScreen.get() << endl;	//C
	
	myScreen.display(cout);
	cout << endl;
	myScreen.move(1, 2).set('H').move(1, 3).set('O').move(1, 4).set('N').display(cout);
	
	return 0;
}
