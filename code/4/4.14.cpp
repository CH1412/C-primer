#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec1, ivec2;
	int ival;
	cout << "输入数字，等于32767结束：" << endl;
	while(cin >> ival && ival != 32767)
		ivec1.push_back(ival);
	cin.clear();
	cout << "请输入数字，等于32767结束：" << endl;
	while(cin >> ival && ival != 32767)
		ivec2.push_back(ival);
	
	//
	vector<int>::size_type size1=ivec1.size(), size2=ivec2.size();
	vector<int>::size_type size = (size1 < size2) ? size1 : size2;
	bool res = true;
	for(vector<int>::size_type i=0; i != size; ++i){
		if(ivec1[i] != ivec2[i]){
			res = false;
			break;
		}
	}
	if(res){
		if(size1 > size2)
			cout << "ivec1 ∈ ivec2" << endl;
		else if(size1 < size2)
			cout << "ivec1 ∈ ivec2" << endl;
		else
			cout << "ivec1 = ivec2" << endl;
	}
	else
		cout << "Not" << endl;
	return 0;
}
