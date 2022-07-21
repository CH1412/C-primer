#include <iostream>
using namespace std;
int main()
{
	int ival = 1;
	ival = ival + 5;
	
	for(int i=0; i<10; ++i){
		//块语句，空块 
	}
	
	for(int j=0; j<10; ++j)
		;//空语句
	
	int a[9] = {1, 6, 3, 7, 5, 2, 9, 4, 8};
	int i = 0;
	int j = 8;
	int p = a[4];
	//挨个交换5前面大于5的数，与5后面小于5的数 
	do{
		while(a[++i]<p)
			;
		while(a[--j]>p)
			;
		if(i<j)	swap(a[i], a[j]);
	}while(i<j);
	
	for(size_t n=0; n<9; ++n)
		cout << a[n] << endl;
	 
	
	return 0;
}
