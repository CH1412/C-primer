#include <iostream>
#include <string>
using namespace std;

//全局变量，所有类都可以使用 
//double interestRate;

class Dog{
	private:
		static double interestRate;
};

class Account{
	public:
		Account(string name, double money) : owner(name), amount(money) {}
		
		double getAmount() const{
			return this->amount;
		}
		
		void deposit(double money){	//存钱 
			this->amount += money;
		}
		//使用静态函数管理静态成员 
		static double rate() {return interestRate;}
		
		static void rate(double newRate) {
			interestRate = newRate;
		}
		
		void applyint(){
			amount += amount * interestRate;
		}
		
	private:
		string owner;
		double amount;
		static double interestRate;//只有一个
		static const int period = 30;//静态整型常量可以在类内初始化 
};

double Account::interestRate = 0.015;	//初始化static成员变量 

int main()
{
	Account::rate(0.026);	//静态成员函数可以通过类作用域直接调用 
	
	Account a("张三", 1000), b("李四", 2000);
	cout << a.getAmount() << endl;
	cout << b.getAmount() << endl;
	cout << a.rate() << endl; //0.026
	a.rate(0.018);
	cout << b.rate() << endl; //0.018
	
	Account::rate(0.02);
	a.applyint();
	b.applyint();
	cout << a.getAmount() << endl;
	cout << b.getAmount() << endl;
	return 0;	
}
