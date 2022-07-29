#include <iostream>
#include <queue>
#include <list>
#include <deque>
using namespace std;

int main()
{
	queue<int, deque<int> > a;
	queue<int, list<int> > b;
	queue<int> q;	//Ĭ��deque
	
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	
	cout << "queue��СΪ: " << q.size() << endl; //4
	cout << "���׵����ݣ�" << q.front() << endl; //1
	cout << "��β�����ݣ�" << q.back() << endl; //4
	
	q.pop();	//ɾ�����׵�����1
	cout << "pop����׵����ݣ�" << q.front() << endl; // 2
	
	while(q.size() != 0){
		cout << "ɾ����" << q.front() << endl;
		q.pop();
	}
	if(q.empty())
		cout << "���ڶ����ǿյģ�" << endl;
	return 0;
}
