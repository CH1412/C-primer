#include <iostream>
#include <vector>

using namespace std;
//�����һ���͵�����һ���ĺ� 
int main()
{
	vector<int> ivec;
	int x;
	cout << "������һ��������" << endl;
	while(cin >> x)
		ivec.push_back(x);
	vector<int>::size_type len = ivec.size();
	vector<int>::size_type start=0, end=len-1;
	for(; start<end; start++, end--)
		cout << ivec[start] + ivec[end] << endl;
	return 0;
}
