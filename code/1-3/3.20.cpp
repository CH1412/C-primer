#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;
//������˹���ᡰɸ������������ 
int main()
{
	const int max_number(1000000);//����1000000���ڵ�����
	const int max_test(sqrt((double)max_number));
	
	bitset<max_number+1> number;//101��0
	number.set();//ȫ����Ϊ1��101��1
	//����number[0]����������0
	number[1] = 0;//1�Ȳ�������Ҳ���Ǻ���
	for(int i(2); i != max_test; ++i){
		if(number[i]){
			for(int j(i*i); j<max_number+1; j+=i){//��i��ƽ����ʼɸѡ����ΪС��i��ƽ�����ѱ���� 
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
