#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int, vector<int> > pq1;
	priority_queue<int, deque<int>, greater<int> > pq2;	//��С���������� 
	priority_queue<int> pq;	//Ĭ��vector
	
	pq.push(10);
	pq.push(5);
	pq.push(-1);
	pq.push(20);
	
	cout << "���ȼ����д�С��" << pq.size() << endl; //4
	cout << pq.top() << endl; //���ף�20 ���ֵ 
	while(!pq.empty()){
		cout << "�����ȼ�������ɾ����" << pq.top() << endl; //20 10 5 -1
		pq.pop();//ɾ��(����)Ԫ�� 
	}
	
	cout << "��С���������У�" << endl;
	pq2.push(10);
	pq2.push(5);
	pq2.push(-1);
	pq2.push(20);
	cout << pq2.top() << endl;	// ���ף�-1 ��Сֵ 
	while(!pq2.empty()){
		cout << "����С����������ɾ��Ԫ�أ�" << pq2.top() << endl; //-1 5 10 20
		pq2.pop();
	}
	return 0;
}
