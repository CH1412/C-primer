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
	
	a.insert(a.begin(), 7);	//在开头位置前插入7
	a.insert(a.end(), 1, 12);	//在尾后元素前，即末尾处插入1个12
	PrintList(a);
	cout << endl;
	
	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	PrintList(b);
	cout << endl;
	
	a.insert(a.begin(), b.begin(), b.end());//在a前插入b
	PrintList(a); 
	
	//list 不能使用下标，使用迭代器 
//	list<int>::iterator iter;
//	for(iter=a.begin(); iter != a.end(); ++iter)
//		cout << *iter << endl;
	
	return 0; 
}
