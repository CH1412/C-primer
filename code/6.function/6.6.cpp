#include <iostream>

using namespace std;
void print1(int *x, size_t size)//ָ������ĵ�һ��Ԫ�أ���Ҫ�������С������ 
{
	for(size_t i=0; i != size; ++i)
		cout << x[i] << " ";
	cout << endl;
}
void print2(int x[], size_t size)//ͬ�� 
{
	for(size_t i=0; i != size; ++i)
		cout << x[i] << " ";
	cout << endl;
}
void print3(int x[10], size_t size)//10û�ã�д��д��Ӱ�� 
{
	
}
//int (&x)[10]��x�����ã�ָ����10��Ԫ�ص�����
//int &x[10]��x�����飬����10��Ԫ�ض������á� 
void print4(int (&x)[10])//10����д��������� 
{
	cout << "�����������:" << endl;
	for(size_t i=0; i != 10; ++i)
		cout << x[i] << " ";
	cout << endl;
}
//��ά���飬x��һ��ָ�룬ָ��һ������rowSize�е�����ĵ�һ�У�ÿһ����10���� 
void print5(int (*x)[10], size_t rowSize)
{
	cout << "��ά���飺" << endl;
	for(size_t i=0; i != rowSize; ++i){
		for(size_t j=0; j != 10; ++j)
			cout << x[i][j] << " ";
		cout << endl;
	}
}
//����ָ���׸�Ԫ�غ�ĩβԪ�ص�ָ��
void print6(const int *beg, const int *end)
{
	cout << "����βԪ��ָ�룺" << endl;
	while(beg != end)
		cout << *beg++ << " ";
	cout << endl;
 }
//���ַ�����(C����ַ���)�����һ���ַ���null(\0) 
void print7(const char *x)
{
	cout << "���ַ�����/C����ַ���:" << endl;
	while(*x)//���ָ����ָ�����Ƿ�ǿգ�C����ַ������һ���ַ�'\0'Ϊ�� 
		cout << *x++;
	cout << endl;	
} 

int main()
{
	int arr[] = {2, 4, 6, 8, 0, 1, 3, 5, 7, 9};
	print1(arr, 10);
	print2(arr, 10);
	print4(arr);
	print6(arr, arr+10);
	int m[][10] = {
		{1,2,3,4,5,6,7,8,9,10},
		{9,8,7,6,5,4,3,2,1,0},
		{5,8,9,6,3,2,1,4,7,11}
	};
	print5(m, 3);
	
	char x[] = "bruce lee go";
	print7(x);
	return 0;
}
