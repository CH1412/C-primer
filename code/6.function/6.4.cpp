#include <iostream>
using namespace std;
void ptrswap(int *&x, int *&y)//指针的引用，交换指针所指 
{
	int *tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int i=10, j=20;
	int *pi = &i, *pj = &j;
	cout << "i: " << i << " j: " << j << endl;
	cout << "*pi: " << *pi << " *pj: " << *pj << endl;
	
	ptrswap(pi, pj);
	cout << "\nafter ptrswap\n" << endl;
	cout << "i: " << i << " j: " << j << endl;
	cout << "*pi: " << *pi << " *pj: " << *pj << endl;
	return 0;
}
