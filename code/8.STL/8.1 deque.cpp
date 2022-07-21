#include <iostream>
#include <deque>
#include <algorithm>	//distance 
using namespace std;
int main()
{
	deque<int> a;
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	
	//������ǰ���������
	a.push_front(1);
	a.push_front(2);
	
	for(deque<int>::iterator iter=a.begin(); iter != a.end(); ++iter){
		size_t index = distance(a.begin(), iter);	//��ǰ����������λ�ľ��룬���±�
		cout << "a[" << index << "]=" << *iter << endl; // 2 1 3 4 5
		
	}
	
	a.pop_back();	//ɾ��ĩβԪ�� 5
	a.pop_front();	//ɾ����λԪ�� 2
	
	cout << endl;
	for(size_t i=0; i != a.size(); ++i)
		cout << a[i] << " ";	// 1 2 3 4
	return 0;
}
