#include <iostream>
using namespace std;
class Sales_item
{
	public:
		//默认构造函数，没有参数 
		Sales_item():units_sold(0), revenue(0)//构造函数的初始化列表 
		{
			//可以空着 
		}
	public:
		bool same_isbn(const Sales_item &rhs) const //常函数，不对数据成员进行修改 
		{
			return this->isbn==rhs.isbn;//this表示当前对象，可以省略 
		}
		
		double avg_prive() const;//函数原型声明 
		
	public:
		std::string isbn;//书号 
		unsigned units_sold;//数量 
		double revenue;//金额 
};
//在类的外部定义函数体 
double Sales_item::avg_prive() const//::表示范围解析，函数属于该类 
{
	if(this->units_sold)
		return this->revenue / this->units_sold;
	else
		return 0;
}


int main()
{
	//类		对象 
	Sales_item item1, item2;
	item1.isbn = "0-201-78345-X";
	item1.units_sold = 10;
	item1.revenue = 300.00;
	
	cout << item1.avg_prive() << endl;
	
	item2.isbn = "0-201-78345-X";
	item2.units_sold = 2;
	item2.revenue = 70.00;
	
	cout << item2.avg_prive() << endl;
	
	if(item1.same_isbn(item2))
		cout << "The two books are the same." << endl;
	else
		cout << "Not the same." << endl;
	return 0;
}
