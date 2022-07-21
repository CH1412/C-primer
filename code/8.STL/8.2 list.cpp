#include <iostream>
#include <list>

using namespace std;
void PrintList(const list<int>& ListInput)
{
	list<int>::const_iterator iter;
	for(iter = ListInput.begin(); iter != ListInput.end(); ++iter)
		cout << *iter << endl;
}
int main()
{
	list<int> a, b;
	a.push_front(10);
	a.push_front(9);
	a.push_front(8);
	a.push_back(11);
	PrintList(a);
	cout << endl;
	
	a.insert(a.begin(), 7);	//�ڿ�ͷλ��ǰ����7
	a.insert(a.end(), 1, 12);	//��β��Ԫ��ǰ����ĩβ������1��12
	PrintList(a);
	cout << endl;
	
	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	PrintList(b);
	cout << endl;
	
	a.insert(a.begin(), b.begin(), b.end());//��aǰ����b
	PrintList(a); 
	
	//list ����ʹ���±꣬ʹ�õ����� 
//	list<int>::iterator iter;
//	for(iter=a.begin(); iter != a.end(); ++iter)
//		cout << *iter << endl;
	
	return 0; 
}
