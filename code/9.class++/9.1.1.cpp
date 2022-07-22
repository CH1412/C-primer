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
				return revenue / units_sold;//����������0ʱ������ƽ�����ۼ۸� 
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
		string isbn;	//��� 
		unsigned units_sold;	//�������� 
		double revenue;	//�ܽ��	
};

class Person
{
	//��Ա
	public: 
//		Person(const string &nm, const string &addr){//���캯��
//			name = nm;
//			address = addr;
//		}

		Person(const string &nm, const string &addr): name(nm), address(addr)	//���캯����ʼ���б�	
		{
			
		}
		string getName() const //�������������޸ı��� 
		{
			return name;
		}

		string getAddress() const
		{
			return address;
		}
	
	private:
		string name;//���ݳ�Ա˽�У�ֻ��������ڲ�ʹ�ã����������ⲿ���� 
		string address;
		 
};

int main()
{
	Person a("Bill", "China");	//ͨ�����캯�����г�ʼ�� 
	//cout << a.name << ", " << a.address << endl;	//�ⲿ���ܷ���˽�г�Ա 
	cout << a.getName() << ", " << a.getAddress() << endl;
	
	cout << "Sales_item���ԣ�" << endl << endl;
	Sales_item x("0-399-82477-1", 2, 20.00);
	Sales_item y("0-399-82477-1", 6, 48.00);
	
	cout << "ƽ���۸�" << x.avg_price() << endl; // 10
	x.add(y);
	cout << "x+y��ƽ���۸�" << x.avg_price() << endl; //8.5
	
	
	return 0;
}
