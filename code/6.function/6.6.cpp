#include <iostream>

using namespace std;
void print1(int *x, size_t size)//指向数组的第一个元素，需要把数组大小传进来 
{
	for(size_t i=0; i != size; ++i)
		cout << x[i] << " ";
	cout << endl;
}
void print2(int x[], size_t size)//同上 
{
	for(size_t i=0; i != size; ++i)
		cout << x[i] << " ";
	cout << endl;
}
void print3(int x[10], size_t size)//10没用，写不写不影响 
{
	
}
//int (&x)[10]：x是引用，指向含有10个元素的数组
//int &x[10]：x是数组，含有10个元素都是引用。 
void print4(int (&x)[10])//10必须写，不够灵活 
{
	cout << "传数组的引用:" << endl;
	for(size_t i=0; i != 10; ++i)
		cout << x[i] << " ";
	cout << endl;
}
//多维数组，x是一个指针，指向一个含有rowSize行的数组的第一行，每一行是10个数 
void print5(int (*x)[10], size_t rowSize)
{
	cout << "二维数组：" << endl;
	for(size_t i=0; i != rowSize; ++i){
		for(size_t j=0; j != 10; ++j)
			cout << x[i][j] << " ";
		cout << endl;
	}
}
//传入指向首个元素和末尾元素的指针
void print6(const int *beg, const int *end)
{
	cout << "传首尾元素指针：" << endl;
	while(beg != end)
		cout << *beg++ << " ";
	cout << endl;
 }
//传字符数组(C风格字符串)，最后一个字符是null(\0) 
void print7(const char *x)
{
	cout << "传字符数组/C风格字符串:" << endl;
	while(*x)//检测指针所指内容是否非空，C风格字符串最后一个字符'\0'为空 
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
