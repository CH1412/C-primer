#include <iostream>
#include <string>

using namespace std;

//全局变量
// double interestRate;
class Dog{
private:
    static double rate;
};

class Account{
    public:
        Account(std::string name, double money) : owner(name), amount(money) {}
        //返回账号存款
        double getAmount() const{
            return this->amount;
        }
        //存钱
        void deposit(double money){
            this->amount += money;
        }
        //返回利率
        static double getRate(){    //静态成员不允许使用类型限定符 const
            return rate;    //不能使用this指针，因为不属于任何对象，而是属于类
        }
        //设定利率
        static void setRate(double newRate){    //使用静态函数管理静态数据成员
            rate = newRate;
        }
        //计算利息
        void applyRate(){
            amount += amount * rate * period;
        }
    private:
        std::string owner;
        double amount;
        // double rate;    //将利率设为普通私有成员
        static double rate; //静态数据成员，只有一个，为类的所有对象共用
        static const int period = 30;   //静态整型常量可以在类内设置初始值
};

double Account::rate = 0.015;   //对静态数据成员进行初始化

int main()
{

    // interestRate = 0.05;//使用全局变量保存利率，可以让类的所有对象，程序的所有对象都可以使用

    Account::setRate(0.026);    //静态成员函数，可以通过类直接调用，也可以通过类的对象调用
    Account a("张三", 1000);
    Account b("李四", 2000);

    cout << a.getAmount() << endl;  //1000
    a.deposit(200);
    cout << a.getAmount() << endl;  //1200

    cout << a.getRate() << endl;    //0.026
    a.setRate(0.01);
    cout << a.getRate() << endl;    //0.01
    cout << b.getRate() << endl;    //0.01

    //加上利息
    a.applyRate();
    b.applyRate();
    cout << a.getAmount() << endl;  //1560 = (1000+200)*0.01*30 + 1200
    cout << b.getAmount() << endl;  //2600 = 2000*0.01*30 + 2000
    cout << "OK" << endl;
    return 0;
}