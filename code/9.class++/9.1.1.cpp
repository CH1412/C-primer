#include <iostream>
#include <string>
using namespace std;

class Sales_item
{
	public:
		Sales_item(const string &book, unsigned units, double amount) : isbn(book), units_sold(units), revenue(amount)
		{
			
		}
		
		double avg_price() const
		{
			if(units_sold)
				return revenue / units_sold;//销售数量非0时，计算平均销售价格 
			else
				return 0;
		}
		
		bool same_isbn(const Sales_item &rhs) const
		{
			return isbn == rhs.isbn;
		}
		
		void add(const Sales_item &rhs){
			if(same_isbn(rhs)){
				units_sold += rhs.units_sold;
				revenue += rhs.revenue;
			}
			else
				cout << "not the same book!" << endl;
		}
		
		
	private:
		string isbn;	//书号 
		unsigned units_sold;	//销售数量 
		double revenue;	//总金额	
};

class Person
{
	//成员
	public: 
//		Person(const string &nm, const string &addr){//构造函数
//			name = nm;
//			address = addr;
//		}

		Person(const string &nm, const string &addr): name(nm), address(addr)	//构造函数初始化列表	
		{
			
		}
		string getName() const //常函数，不会修改变量 
		{
			return name;
		}

		string getAddress() const
		{
			return address;
		}
	
	private:
		string name;//数据成员私有，只能在类的内部使用，不可以在外部访问 
		string address;
		 
};

int main()
{
	Person a("Bill", "China");	//通过构造函数进行初始化 
	//cout << a.name << ", " << a.address << endl;	//外部不能访问私有成员 
	cout << a.getName() << ", " << a.getAddress() << endl;
	
	cout << "Sales_item测试：" << endl << endl;
	Sales_item x("0-399-82477-1", 2, 20.00);
	Sales_item y("0-399-82477-1", 6, 48.00);
	
	cout << "平均价格：" << x.avg_price() << endl; // 10
	x.add(y);
	cout << "x+y后平均价格：" << x.avg_price() << endl; //8.5
	
	
	return 0;
}
