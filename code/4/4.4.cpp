#include <iostream>
#include <bitset>

using namespace std;
//���������30��ѧ����ѧ���Ƿ񼰸���01��ʾ 
int main()
{
	bitset<30> a;
	unsigned long b = 0;
	
	a.set(27);//��27λ��1
	b = b | (1UL << 27);//����27λ��1
	
	a.reset(22);//����22λ��0
	b = b & ~(1UL<<22);//����22λ��0
	
	bool status;
	status = a[27];
	status = b & (1UL<<27);//�鿴��27λ��
	cout << status << endl;//1 
	return 0;
 }
