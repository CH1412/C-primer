#include <iostream>
using namespace std;
void print_array(int a[], int n)
{
	for(int i=0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	int a;
	cout << "a: " << sizeof a << endl;//�������Բ������ţ������������ 
	cout << "bool: " << sizeof(bool) << endl;//bool 1 Byte
	cout << "char: " << sizeof(char) << endl;//char 1 Byte
	cout << "int: " << sizeof(int) << endl;//int 4 Byte
	cout << "short: " << sizeof(short) << endl;//short 2 Byte
	cout << "long: " << sizeof(long) << endl;//long 4 Byte
	cout << "long long: " << sizeof(long long) << endl;// long long 8 Byte
	cout << "float: " << sizeof(float) << endl;//float 4 Byte
	cout << "double: " << sizeof(double) << endl;//double 8 Byte
	
	int x[] = {2, 4, 5, 7, 8, 9, 3, 1, 0};
	for(int i=0, j=10; i < 9; ++i, --j)//���Ų����� ',' 
		x[i] = j; 
	print_array(x, sizeof(x)/sizeof(int));//sizeof()��������Ԫ�صĸ���
	
	double dval = 3.14;
	double *p = &dval;
	cout << *p << endl;
	cout << sizeof(p) << endl;//ָ���С, 32λϵͳ 4 Byte; 64λϵͳ 8 Byte 
	cout << sizeof(*p) << endl;//doube 8 Byte
	
	
	return 0;
}
