#include <iostream>
#include <malloc.h>
#include <string>

using namespace std;
//��̬���鴴�� 
class Dog
{
};
int main()
{
	
	int *pia = new int[10];//��������int��û�г�ʼ�� 
	
	string *psa = new string[10];//Ĭ�ϵĹ��캯����ʼ�� 
	
	Dog *pDog = new Dog[10];
	
	int *pia2 = new int[10]();//��ʼ�� 
	
	cout << *(pia2+2) << endl;//2
	
	const int *pci_bad = new const int[100]();//
	//char arr[0];//���󣺾�̬�����С����Ϊ0
	char *cp = new char[0];//��̬�����С������0
	
	cout << "�����붯̬����Ĵ�С��";
	size_t n;
	cin >> n;
	int *p = new int[n];
	for(int *q=p; q != p+n; ++q){
		*q = 12;
		cout << *q << endl;
	}
	//����д��delete[]����ֹ�ڴ�й¶ 
	delete[] pia;
	delete[] psa;
	delete[] pDog;
	delete[] pia2;
	delete[] pci_bad;
	delete[] cp;
	delete[] p; 
	return 0;
}

