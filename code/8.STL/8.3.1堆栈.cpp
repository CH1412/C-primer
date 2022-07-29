#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

int main()
{
	stack<int, deque<int> > a;
	stack<int, vector<int> > b;
	stack<int, list<int> > c;
	stack<int> d;	//默认deque
	
	d.push(25);
	d.push(10);
	d.push(5);
	d.push(1);
	
	cout << d.size() << endl;//4
	int x = d.top();	//查看数据 
	cout << x << endl; 	//1
	d.pop();			//删除数据
	cout << d.top() << endl;//5 
	cout << "查看堆栈元素" << endl;
	while(!d.empty()){
		cout << d.top() << endl;
		d.pop();
	}
	return 0;
}
