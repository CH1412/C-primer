#include <iostream>
#include <string>
using namespace std;

//ȫ�ֱ����������඼����ʹ�� 
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
		
		void deposit(double money){	//��Ǯ 
			this->amount += money;
		}
		//ʹ�þ�̬��������̬��Ա 
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
		static double interestRate;//ֻ��һ��
		static const int period = 30;//��̬���ͳ������������ڳ�ʼ�� 
};

double Account::interestRate = 0.015;	//��ʼ��static��Ա���� 

int main()
{
	Account::rate(0.026);	//��̬��Ա��������ͨ����������ֱ�ӵ��� 
	
	Account a("����", 1000), b("����", 2000);
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
