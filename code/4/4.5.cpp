#include <iostream>

using namespace std;
int main()
{
	int a;
	a = 1;//��ֵ�����ǵ���
	a = a + 1;
	//��ֵ��������߱�����һ�� ��const��ֵ
	int i, j, ival, jval;
	ival = 5;
	j = 3.14;//3����ֵ���ʽ���������ֵ������ 
	i = 12;
	//����������ֵ
	ival = jval = 0;//�Ȱ�0��ֵ��jval���ڰ�jval��ֵ��ival 
	const int ci = i;
	//1024 = i;//���� 
	// i + j = ival;//����
//	ci = ival;//����ci��const 
	cout << a << endl;
	
	double d;
	d = i = 3.5;//�Ƚ�3.5��ֵ��i��i=3���ٽ�i��ֵ��d=3
	cout << d << " " << i << endl;
	i = d = 3.5;
	cout << d << " " << i << endl;//d=3 i=3.5
	return 0;
 } 
