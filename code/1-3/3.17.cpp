#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> ivec(10,2);
	for(vector<int>::iterator it=ivec.begin(); it != ivec.end(); ++it){
		*it *= 2;
		cout << *it << endl;
	}
	return 0;
 } 
