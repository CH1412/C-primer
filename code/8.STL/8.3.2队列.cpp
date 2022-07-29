#include <iostream>
#include <queue>
#include <list>
#include <deque>
using namespace std;

int main()
{
	queue<int, deque<int> > a;
	queue<int, list<int> > b;
	queue<int> q;	//默认deque
	
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	
	cout << "queue大小为: " << q.size() << endl; //4
	cout << "队首的数据：" << q.front() << endl; //1
	cout << "队尾的数据：" << q.back() << endl; //4
	
	q.pop();	//删除队首的数据1
	cout << "pop后队首的数据：" << q.front() << endl; // 2
	
	while(q.size() != 0){
		cout << "删除：" << q.front() << endl;
		q.pop();
	}
	if(q.empty())
		cout << "现在队列是空的！" << endl;
	return 0;
}
