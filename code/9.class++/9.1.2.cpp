#include <iostream>
#include <string>

using namespace std;

class Screen{
	public:
		
		typedef string::size_type index;	//���ͱ��� 
		
		Screen(index ht=0, index wd=0):contents(ht * wd, 'A'), cursor(0), height(ht), width(wd)
		{}
		Screen(index ht, index wd, const string &conts);
//		char get() const{
//			return contents[cursor];	//���ع��λ�ô��ַ� 
//		}
		char get() const;	//�������� 
		
		char get(index r, index c) const
		{
			index row = r * width;
			return contents[row + c];	//����ָ��λ�ô����ַ� 
		}
		
		
	
	private:
		string contents;//���� 
		index cursor;//���λ��
		index height, width;//���ڸߺͿ� 
};

inline char Screen::get() const{
	return contents[cursor];
}

Screen::Screen(index ht, index wd, const string &conts):contents(conts), cursor(0), height(ht), width(wd)
{}	//������������ 

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
