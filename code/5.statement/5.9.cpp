#include <iostream>
#include <cassert>
using namespace std;
int money = 60000;
void Qu(int dollar)
{
	if(dollar<0){
		cout << "ȡǮ��������С��0"
			<< "\n�ļ���" << __FILE__	//�����ļ���ְ 
			<< "\n�У�" << __LINE__		//�У�10 
			<< "\n���ڣ�" << __DATE__	//���ڣ���ǰ���� 
			<< "\nʱ�䣺" << __TIME__ << endl;	//ʱ�䣺��ǰʱ�� 
		return;
	}
	money -= dollar;
}

int add(int x, int y){
	return x*y;
} 
 
int main()
{
	//Ԥ����ָ�� 
#ifndef NDEBUG
	cout << "start main...\n" << endl;
#endif

	Qu(-100);
	
	int res = add(1, 2);//���ԣ��������ԣ�����ʱ����ʾAssertion Failed! 
	
//	if(res != 3){
//		cout << "wrong result!" << endl;
//	}
	assert(res==3);
#ifndef NDEGUG
	cout << "\nend main..." << endl;
#endif
	return 0;
}
