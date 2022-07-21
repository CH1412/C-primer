#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;
//埃拉托斯特尼“筛法”查找质数 
int main()
{
	const int max_number(1000000);//查找1000000以内的质数
	const int max_test(sqrt((double)max_number));
	
	bitset<max_number+1> number;//101个0
	number.set();//全部置为1，101个1
	//忽略number[0]，即不考虑0
	number[1] = 0;//1既不是质数也不是合数
	for(int i(2); i != max_test; ++i){
		if(number[i]){
			for(int j(i*i); j<max_number+1; j+=i){//从i的平方开始筛选，因为小于i的平方的已被检测 
				number[j] = 0;
			}
		}
	}
	cout << "the number of primes less than " << max_number+1 << " is "
		<< number.count() << endl;
	for(int i(1); i != max_number; ++i){
		if(number[i])
			cout << i << " ";
	}
	return 0;
}
