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
	stack<int> d;	//Ĭ��deque
	
	d.push(25);
	d.push(10);
	d.push(5);
	d.push(1);
	
	cout << d.size() << endl;//4
	int x = d.top();	//�鿴���� 
	cout << x << endl; 	//1
	d.pop();			//ɾ������
	cout << d.top() << endl;//5 
	cout << "�鿴��ջԪ��" << endl;
	while(!d.empty()){
		cout << d.top() << endl;
		d.pop();
	}
	return 0;
}
