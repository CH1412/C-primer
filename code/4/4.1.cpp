#include <iostream>

using namespace std;
int main()
{
	int i(1024);
	int j(2);
	cout << i + j << endl;
	cout << i - j << endl;
	cout << i * j << endl;
	cout << i / j << endl;
	cout << i % j << endl;
	
	int m = --i;
	cout << "m: " << m << " i: " << i << endl;
	
	//���
	short sv = 32767;//short���͵ķ�Χ��-32768~32767
	short val = 1;
	sv += val;
	cout << sv << endl;//�����-32678 
	
	//���������õģ�����(���߶�������)��С����(������һ����С��) 
	double dval = 10 / 3;//����������������������3 
	cout << dval << endl; 
	
	//ȡ����������������趼���������� 
	int ival = 45;
	cout << ival % 4 << endl;//1
//	cout << ival % 3.1 << endl;//������������Ǹ�������
	cout << -21 / -8 << endl;//2
	cout << -21 % -8 << endl;//-5,��������ȡ�������Ǹ��� 
	cout << -21 / 8 << endl;//-2
	cout << -21 % 8 << endl; //-5,C++��׼û���ϸ�涨һ������2��һ������ȡ���� 
	cout << 21 % -8 << endl;//5
	
	//10��һ�����1~100����
	for(int i(1); i != 101; i++){
		cout << i << " ";
		if(i % 10 == 0)
			cout << endl;
	} 
	return 0;
 } 
