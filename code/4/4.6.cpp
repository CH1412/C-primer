#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int a, b;
	a = 2;
	//a = a + 1;
	//++a;
	b = a++;//b=2
	cout << "b= " << b << endl;
	
	vector<int> ivec;
	int n = 10;
	while(n > 0){
		ivec.push_back(n--);
		//--n;
	}	
//	for(vector<int>::const_iterator iter=ivec.begin();
//		iter != ivec.end();
//		++iter)
//		cout << *iter << endl;

	vector<int>::const_iterator iter=ivec.begin();
	while(iter != ivec.end()){
		cout << "while: " << *iter++ << endl;//µÈ¼Û*(iter++)
//		++iter;
	}
	return 0;
 } 
