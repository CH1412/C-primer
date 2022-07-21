#include <iostream>
#include <vector>
using namespace std;
//判断两个数组是否相等 
bool Compare(const int *pb1, const int *pe1, const int *pb2, const int *pe2)
{
	if((pe1 - pb1) != (pe2 - pb2))//长度不同 
		return false;
	for(const int *i=pb1, *j=pb2; i != pe1 && j != pe2; i++, j++){
		if(*i != *j)
			return false;
	}
	return true;
}
int main()
{
	int a[] = {1, 2, 4};
	int b[] = {1, 2, 4};
	if(Compare(begin(a), end(a), begin(b), end(b)))
		cout << "a is equal to b!" << endl;
	else
		cout << "a is not equal to b!" << endl;
		
	cout << "=========" << endl;
	vector<int> c{0, 1, 2};
	vector<int> d{0, 1, 2};
	if(c == d)
		cout << "c is equal to d!" << endl;	
	else
		cout << "c is equal to d!" << endl;
	return 0;
}
