#include <iostream>
#include <cstring>
using namespace std;

class CDemo{
    public:
        //构造函数
        CDemo(int pa, char *cstr){
            this->a = pa;
            this->str = new char[1024];
            strcpy(this->str, cstr);
        }
        //析构函数
        ~CDemo(){
            delete str;
        }
        //数据成员
        int a;
        char *str;

};

int main()
{
    CDemo A(10, "hello");
    
    CDemo B = A;    //复制，默认
    
    /* 未自定义时，会自动合成的复制构造函数，默认为简单的浅复制
    CDemo(CDemo &obj){
        this->a = obj.a;
        this->str = obj.str;    //当修改obj.str所指向的内容时，this->str也会被改变
        
        //深复制如下
        // this->str = new char[1024];
        // if(str != 0){
        //     strcpy(this->str, obj.str);
        // }
    }
    */

    cout << A.a << ", " << A.str << endl;//10, hello
    cout << B.a << ", " << B.str << endl;//10, hello
    
    B.a = 8;
    B.str[0] = 'H';

    cout << A.a << ", " << A.str << endl;//10, Hello
    cout << B.a << ", " << B.str << endl;//8, Hello
    cout << "OK!" << endl;
    return 0;
}