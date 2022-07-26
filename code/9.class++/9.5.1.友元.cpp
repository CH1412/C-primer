#include <iostream>
#include <string>

class Sales_data{
	//为Sales_data的非成员函数所做的友元声明
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
	friend std::ostream &print(std::ostream, const Sales_data&);
	//其它成员即访问说明符与之前一致
	public:
		Sales_data() = default;
		Sales_data(const std::string &s, unsigned n, double p) :
				bookNo(s), units_sold(n), revenue(p*n) {}
		Sales_data(const std::string &s) : bookNo(s) {}
		Sales_data(std::istream &);
		std::string isbn() const {return bookNo;}
		Sales_data &combine(const Sales_data&);
	private:
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0; 
};
// Sales_data接口的非成员组成部分的声明
//Sales_data add(const Sales_data&, const Sales_data&);
//std::istream &read(std::istream&, Sales_data&);
//std::ostream &print(std::ostream, const Sales_data&);
// member functions
Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
// friend functions
Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
std::istream& read(std::istream &is, Sales_data &rhs){
	double price = 0.0;
	is >> rhs.bookNo >> rhs.units_sold >> price;
	rhs.revenue = price * rhs.units_sold;
	return is;
}
std::ostream& print(std::ostream &os, const Sales_data &rhs){
	os << rhs.isbn() << " " << rhs.units_sold << " " << rhs.revenue;
	return os;
}

int main()
{
	return 0;
}
