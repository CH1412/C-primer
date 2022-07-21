#include <iostream>

using namespace std;
//求三个数的最大值 
int main()
{
	int i, j, k;
	cout << "Enter three nums:" << endl;
	cin >> i >> j >> k;
	int max = i;
	if(j>max)	max=j;
	if(k>max)	max=k;
	cout << max << endl;
	
	//使用条件表达式
	max = i > j ? (i>k? i:k) : (j>k? j : k);
	cout << max << endl;
	return 0;
}
