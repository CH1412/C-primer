#include <iostream>
using namespace std;
//����inline�ĺ���:�������� 
//�ڱ����ʱ����������չ�����ٶȸ��� 
inline int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int x[] = {1,2,3,4,5};
	int y[] = {1,2,3,4,5};
	for(int i=0; i<5; ++i)
		cout << sum(x[i],y[i]) << endl;
	
	return 0;
}
