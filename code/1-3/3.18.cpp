#include <iostream>
#include <bitset>
#include <string>

using namespace std;
int main()
{
	bitset<32> a;//a�Ĵ�С��32λ�����ƣ�ȫ����ʼ��ֵ��0
	cout << a << endl; 
	
	bitset<16> b(0xffff);//1��ʮ������λ=4��������λ��4��4=16λ 
	cout << b << endl;
	
	bitset<32> c(0xffff);
	cout << c << endl;//����λĬ����0
	
	bitset<32> d(255);//10��������ʼ�������ᱻת��Ϊ������
	cout << d << endl; 
	
	// ʹ���ַ�����ʼ��
	string str("10011001");
	bitset<5> e(str, 3,4);//��str�ĵ�3λ��ʼȡ4���ַ����������ǰ�油0  
	cout << e << endl;//��������0 1100 
	
	bitset<32> f(str, str.size()-4);//���ַ������4λ��ʼ�� 
	cout << f << endl;//�����000... 1001 
	return 0;
}
