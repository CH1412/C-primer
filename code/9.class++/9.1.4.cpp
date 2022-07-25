#include <iostream>
#include <string>

using namespace std;

class Sales_data{
	public:
		string isbn() const { return bookNo; }
		Sales_data& combine(const Sales_data &rhs);
		double avg_price() const;
	
	public:
		string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;	// 返回调用该函数的对象 
}

double Sales_data::avg_price() const {
	if(units_sold)
		return revenue / units_sold;
	else
		return 0;
}

// 非成员函数 read() 和 print()
istream& read(istream& is, Sales_data& item){			//输入数据 
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

ostream& print(ostream& os, const Sales_data& item){	//打印信息 
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}
// 非成员函数 add()
Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;	//把lhs的数据成员拷贝给sum 
	sum.combine(rhs);		//把rhs的数据成员加到sum中 
	return sum;	//返回sum的副本。返回局部对象，不要用引用类型，因为函数结构后数据即被清除，使用复制 
} 


int main()
{
	return 0;
}
