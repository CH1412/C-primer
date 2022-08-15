#include <iostream>
#include <string>
using namespace std;

class Sales_item{
    public:
        //
    private:
        std::string isbn;
        int units_sold;
        double revenue;
};

class NoName{
public:
    NoName():pstring(new std::string), i(0), d(0.0){
        //打开文件
        //连接数据库
        //动态分配内存
        cout << "NoName()" << endl;
    }
    //复制构造函数
    NoName(const NoName &);
    //析构函数
    ~NoName();
    //赋值操作符
    NoName& operator=(const NoName &);
private:
    std::string *pstring;
    int i;
    double d;
};
//复制构造函数
NoName::NoName(const NoName &other){
    pstring = new std::string;
    *pstring  = *(other.pstring);
    i = other.i;
    d = other.i;
}
//赋值操作符
NoName& NoName::operator=(const NoName &rhs){
    pstring = new std::string;
    *pstring = *(rhs.pstring);
    i = rhs.i;
    d = rhs.d;
    return *this;
}
//析构函数
NoName::~NoName()
{
    //关闭文件
    //关闭数据库连接
    //回收动态分配的内存
    cout << "~NoName()" << endl;
    delete pstring;
}

int main()
{
    NoName a;
    NoName *p = new NoName;
    cout << "OK!" << endl;
    delete p;   //调用析构函数，释放p
    return 0;   //main函数结束时会清除对象，调用~NoName()
}