#include <iostream>
#include <string>
using namespace std;

class Screen;//声明
class Dog{
public:
    int foo(Screen &);
    int koo(Screen &);
};

class Screen{
public:
    typedef std::string::size_type index;
    
    friend int calArea(Screen &);   //友元函数，可以访问类的私有成员
    friend class Window_Mgr;        //友元类，所有成员函数都可以使用类的私有成员
    friend int Dog::foo(Screen &);  //将类的特定函数作为友元函数，则该类中只有友元函数可以访问类的私有成员

    Screen(int ht=0, int wd=0) : contents(ht*wd, ' '), cursor(0), height(ht), width(wd) {}

    //略

    int area() const{
        return height * width;
    }

private:
    std::string contents;
    index cursor;
    int height, width;
};
//非类的成员函数
int calArea(Screen &sc){
    return sc.height * sc.width;
}

class Window_Mgr{   //窗口管理类 - 对Screen进行管理
    public:
        void relocate(int r, int c, Screen &s){
            s.height += r;
            s.width += c;
        }
        //略
};
//Dog类中foo()函数定义
int Dog::foo(Screen &screen){
    return screen.height * screen.width;
}

int Dog::koo(Screen &sc){
    return sc.area();   //koo()非Screen类的友元函数，只能访问类的公有成员
}

int main()
{
    Screen a(60, 100);
    cout << a.area() << endl;   //6000

    Window_Mgr wm;
    wm.relocate(40, 0, a);
    cout << calArea(a) << endl; //10000

    Dog b;
    cout << b.foo(a) << endl;   //10000
    cout << b.koo(a) << endl;   //10000
    cout << "OK" << endl;
    return 0;
}