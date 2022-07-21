#include <iostream>
#include <list>
using namespace std;
void PrintList(const list<int>& ListInput);	//函数声明 

int main()
{
	list<int> a;
	a.push_back(6);
	a.push_back(9);
	a.push_back(5);
	a.push_back(2);
	a.push_back(7);
	PrintList(a);
	
	a.reverse();	//将链表反转 
	PrintList(a);
	
	//排序,默认从小到大 
	a.sort();
	PrintList(a); 
	return 0;
}
void PrintList(const list<int>& ListInput)
{
	cout << endl << "{ "; 
	list<int>::const_iterator iter;
	for(iter = ListInput.begin(); iter != ListInput.end(); ++iter)
		cout << *iter << " ";
	cout << "}";
}
