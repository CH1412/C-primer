#include <iostream>
#include <vector>

using namespace std;
class Account
{
	
};
class Phone
{
	
};
class Name
{
	
};

class Record
{
	public:
		Account a;
		Phone b;
		Name c;
}; 
void lookup(const Account &a)
{
	cout << "根据账号查找" << endl;
}
void lookup(const Phone &b)
{
	cout << "根据点好查找" << endl;
}
void lookup(const Name &c)
{
	cout << "根据姓名查找" << endl;
}

void show(int x)
{
	cout << x << endl;
}
void show(vector<int> &v)
{
	for(vector<int>::iterator iter=v.begin();
		iter!=v.end(); ++iter)
		cout << *iter << endl;
}

int main()
{
	Account x;
	Phone y;
	Name z;
	lookup(x);
	lookup(y);
	lookup(z);
	
	int a=89;
	vector<int> b;
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	//使用的时候，C++自动识别形参类型调用函数 
	show(a);
	show(b);
	return 0;
}
