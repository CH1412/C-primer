#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int i=0;
	for(; ;){
		if(i>10)	break;
		cout << i << endl;
		++i;
	}
	
	vector<string> svec;
	svec.push_back("I");
	svec.push_back("love");
	svec.push_back("C++");
	for(vector<string>::size_type ix=0; ix != svec.size(); ++ix){
		cout << svec[ix];
		if(ix +1 != svec.size())
			cout << " ";
	}
	cout << endl;
	
	const int size = 12;
	int val = 0, ia[size] = {0,1,2,3,4,5,6,7,8,9,10,11};
//	int *pi = ia;
//	int &ri = val;
//	for(int ival=0; ival != size; ++ival){
//		cout << ia[ival] << ", " << ia[ri] << ", " << ia[val] << ", " << *pi << endl;
//		++pi;
//		++ri;
//	}
	for(int ival=0, *pi=ia, &ri=val; ival != size; ++ival, ++pi, ++ri)
		cout << ia[ival] << ", " << ia[ri] << ", " << ia[val] << ", " << *pi << endl;
	return 0;
}
