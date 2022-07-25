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
	return *this;	// ���ص��øú����Ķ��� 
}

double Sales_data::avg_price() const {
	if(units_sold)
		return revenue / units_sold;
	else
		return 0;
}

// �ǳ�Ա���� read() �� print()
istream& read(istream& is, Sales_data& item){			//�������� 
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

ostream& print(ostream& os, const Sales_data& item){	//��ӡ��Ϣ 
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}
// �ǳ�Ա���� add()
Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;	//��lhs�����ݳ�Ա������sum 
	sum.combine(rhs);		//��rhs�����ݳ�Ա�ӵ�sum�� 
	return sum;	//����sum�ĸ��������ؾֲ����󣬲�Ҫ���������ͣ���Ϊ�����ṹ�����ݼ��������ʹ�ø��� 
} 


int main()
{
	return 0;
}
