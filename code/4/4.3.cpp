#include <iostream>


using namespace std;
int main()
{
	int a = -127;//���λΪ����λ��c++û�й涨��β�������λ 
	
	unsigned char bits = 0227;//һ���˽���λ����3��������λ��010 010 111��ʮ���ƣ�151 
	//һ��char�ǰ�λ�����ƣ������� 10 010 111 
	
	//ȡ�� 
	bits = ~bits;//ȡ��,01 101 000,ʮ���ƣ�104
	cout << int(bits) << endl;//104
	
	//λ�� 
	bits = 1;
	unsigned char res;
	res = bits << 1;//����1λ(�Ŵ�һ��) ��10 
	cout << (int)res << endl;//2
	res = bits << 2;//����2λ, 100
	cout << int(res) << endl;//4 
	
	bits = 64;
	res = bits >> 3;//�����ƶ�3λ����С2^3=8�� 
	cout << int(res) << endl;//8
	
	//λ��
	unsigned char b1 = 0145;// 001 100 101
	unsigned char b2 = 0257;//010 101 111
	unsigned char result = b1 & b2;//λ�룺 000 100 101
	cout << (int)result << endl;//37
	
	//λ��
	result = b1 | b2;//011 101 111
	cout << (int)result << endl;//239
	
	//λ���
	result = b1 ^ b2;//��ͬΪ0����ͬΪ1  011 001 010
	cout << (int)result << endl;//202
	return 0;
 } 
