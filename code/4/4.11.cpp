#include <iostream>

using namespace std;

class Dog
{
	//��ĳ�Ա	
};
void demo()
{
	int i(1024);
	int *pi = new int(1024);//��ʼ��
	
	string s(10,'9');//"9999999999"����ջ 
	string *ps = new string(10, '9');// ���ɴ洢�� 
	
	delete pi;
	delete ps;
}

void demo2()
{
	int *pi = new int;//�������ͣ�û��С����()��û�г�ʼ��
	int  *pi2 = new int(32);//��ʼ��
	//ʹ�ö��� 
	delete pi;
	delete pi2;//delete�Ѵ����Ķ���ɾ����pi2�Ա������ĵ�ַ
//	pi2 = 0��//�������óɿ�ָ�� 
 }

void demo3()
{
	const int *pci = new const int(1024);
	const string *pcs = new const string;
	
	delete pci;
	delete pcs;
 } 
int main()
{
	int i;//��̬ �������󣬶����� 
	int *pi = new int;//��̬��������û������Ҫʹ��ָ�� 
	
	i = 12;
	*pi = 12;
	
	string *ps = new string();//Ĭ�Ϲ��캯����ʼ����С����()��д�ɲ�д
	
	Dog dog;
	Dog dog2();
	Dog *pdog = new Dog;
	Dog *pdog2 = new Dog();
	
	delete pi;
	delete ps;
	delete pdog;
	delete pdog2;
	
	demo();
	demo2();
	demo3();
	cout << "OK" << endl;
	return 0;
}
