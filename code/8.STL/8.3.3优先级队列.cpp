#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int, vector<int> > pq1;
	priority_queue<int, deque<int>, greater<int> > pq2;	//最小级优先序列 
	priority_queue<int> pq;	//默认vector
	
	pq.push(10);
	pq.push(5);
	pq.push(-1);
	pq.push(20);
	
	cout << "优先级队列大小：" << pq.size() << endl; //4
	cout << pq.top() << endl; //队首：20 最大值 
	while(!pq.empty()){
		cout << "从优先级队列中删除：" << pq.top() << endl; //20 10 5 -1
		pq.pop();//删除(队首)元素 
	}
	
	cout << "最小级优先序列：" << endl;
	pq2.push(10);
	pq2.push(5);
	pq2.push(-1);
	pq2.push(20);
	cout << pq2.top() << endl;	// 队首：-1 最小值 
	while(!pq2.empty()){
		cout << "从最小级优先序列删除元素：" << pq2.top() << endl; //-1 5 10 20
		pq2.pop();
	}
	return 0;
}
