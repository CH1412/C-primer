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
	
	//在数组前面添加数据
	a.push_front(1);
	a.push_front(2);
	
	for(deque<int>::iterator iter=a.begin(); iter != a.end(); ++iter){
		size_t index = distance(a.begin(), iter);	//当前迭代器与首位的距离，即下标
		cout << "a[" << index << "]=" << *iter << endl; // 2 1 3 4 5
		
	}
	
	a.pop_back();	//删除末尾元素 5
	a.pop_front();	//删除首位元素 2
	
	cout << endl;
	for(size_t i=0; i != a.size(); ++i)
		cout << a[i] << " ";	// 1 2 3 4
	return 0;
}
