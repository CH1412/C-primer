#include <iostream>

using namespace std;
//�������������ֵ 
int main()
{
	int i, j, k;
	cout << "Enter three nums:" << endl;
	cin >> i >> j >> k;
	int max = i;
	if(j>max)	max=j;
	if(k>max)	max=k;
	cout << max << endl;
	
	//ʹ���������ʽ
	max = i > j ? (i>k? i:k) : (j>k? j : k);
	cout << max << endl;
	return 0;
}
