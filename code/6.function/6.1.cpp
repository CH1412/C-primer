#include <iostream>

using namespace std;
void AddOne(int x)//�������������βΣ�����copy 
{
	x = x + 1;//��copy��һ 
}
void AddTwo(int *px)//�������β�(ָ���Ƿ�����)���ѵ�ַcopy 
{
	*px = *px + 2;
}
void AddThree(int &x)//�����β� 
{
	x = x + 3;
}

int main()
{
	int a=1, b=1, c=1;
	AddOne(a);
	AddTwo(&b);
	AddThree(c);
	cout << "a: " << a
		<< "\nb: " << b
		<< "\nc: " << c << endl;
	return 0;
}
