#include <iostream>
#include <vector>
using namespace std;
int compute_value()
{
	return 6;
}

int main()
{
	int x;
	x = 80;
	if(x >= 60)	//���� bool 
		cout << "Pass!" << endl;
	if(int ival = compute_value())
		cout << "hello!" << endl;
	//��������Ҫ������
	int a[] = {9,7,5,3,1,2,1,14,6,8,9,1};
	vector<int> ivec;
	for(int i=0; i != sizeof(a)/sizeof(*a); ++i){
		ivec.push_back(a[i]);
//		cout << a[i] << " ";
	}
	//�����Сֵ�Լ���Сֵ���ֵĴ��� 
	int minVal = ivec[0];
	int occurs = 1;
	for(int i=0; i != ivec.size(); ++i){
		if(minVal == ivec[i])
			++occurs;
		else if(minVal > ivec[i]){
			minVal = ivec[i];
			occurs = 1;
		}
	}
	cout << "minVal: " << minVal << endl;
	cout << "occurs: " << occurs << endl;
	return 0;
 } 
