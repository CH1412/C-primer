#include <iostream>
#include <vector>
using namespace std;
typedef vector<int>::const_iterator Iter;
void print(Iter beg, Iter end)
{
	if(beg != end){
		cout << *beg << " ";
		print(++beg, end);
	}
}
int main()
{
	vector<int> ivec(10, 6);
	Iter beg=ivec.begin(), end = ivec.end();
	print(beg, end);
	return 0;
}
