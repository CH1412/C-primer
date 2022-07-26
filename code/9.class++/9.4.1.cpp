#include <iostream>
#include <string>
using namespace std;

class Person{
	public:
		Person(const string &nm) : name(nm), age(0) {}
		
	
	public:
		string name;
		int age;
};

class Sales_item{
	public:
		Sales_item() : bookNo(" "), units_sold(0), revenue(0.0) {}
		Sales_item(const string &book) : bookNo(book), units_sold(0), revenue(0.0) {}
		
	private:
		string bookNo;
		unsigned units_sold;
		double revenue;
};

int main()
{
	Person a("уе╥и");
	cout << a.name << endl;
	
	Sales_item item1;
	return 0;
}
