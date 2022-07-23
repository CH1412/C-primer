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
			return this->name;//this��д�ɲ�д 
		}
		string getAddress() const
		{
			return address;
		}
		
	private:
		string name;
		string address;
};

class Screen{	//��Ļ�ϵĴ��� 
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
		
		Screen& move(index r, index c);		//�ı���λ�� 
		Screen& set(index, index, char);	//�ı�ָ��λ���ַ�
		Screen& set(char);					//�ı��굱ǰλ���ַ�
		//�������ķ�������Ҳ�����ǳ��� 
		const Screen& display(ostream &os) const {	//��ʾ�������� 
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
		mutable size_t access_ctr;	//����display���ô������ɱ����ݳ�Ա�����Ա�const�����޸� 
		
		void do_display(ostream &os) const{
			os << contents;
		}
};

Screen& Screen::move(index r, index c){	
	index row = r * width;
	cursor = row + c;
	return *this;	//����ָ��ö�������� 
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
	Person p("�����", "����");
	Person p2("����", "ԥ��");
	cout << p.getName() << endl;
	cout << p.getAddress() << endl;
	
	
	Screen myScreen(5, 3);
	cout << myScreen.get() << endl;	//A
	
	myScreen.set(3, 2, 'B');
	cout << myScreen.get(3, 2) << endl;	//B
	
//	myScreen.move(2, 3);
//	myScreen.set('C');
	myScreen.move(2, 3).set('C');	//��move()����ֵ����ΪScreen&������ԭ��������òſ���ʹ������д�� 
	myScreen.move(4, 0).set('X').move(4, 1).set('Y').move(4, 2).set('Z');
	cout << myScreen.get() << endl;	//C
	
	myScreen.display(cout);
	cout << endl;
	myScreen.move(1, 2).set('H').move(1, 3).set('O').move(1, 4).set('N').display(cout);
	
	return 0;
}
