#include <iostream>
#include <list>

using namespace std;
void PrintList(const list<int>& ListInput);	//函数声明 
int main()
{
	list<int> a;
	a.push_front(4);
	a.push_front(3);
	
	list<int>::iterator iter = a.insert(a.begin(), 2);//insert()返回指向插入元素的迭代器
	
	a.push_front(1);
	a.push_front(0);
	PrintList(a);
	
	//删除元素
	a.erase(iter);//迭代器指向的元素2被删除
	//a.insert(a.begin(), iter);//前闭后开删除元素 
	PrintList(a);
	a.erase(a.begin(), a.end());//元素全部删除
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
