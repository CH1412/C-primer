#include <iostream>
using namespace std;
int main()
{
	int ival = 1;
	ival = ival + 5;
	
	for(int i=0; i<10; ++i){
		//����䣬�տ� 
	}
	
	for(int j=0; j<10; ++j)
		;//�����
	
	int a[9] = {1, 6, 3, 7, 5, 2, 9, 4, 8};
	int i = 0;
	int j = 8;
	int p = a[4];
	//��������5ǰ�����5��������5����С��5���� 
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
