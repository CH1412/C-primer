#include <iostream>
#include <string> 
using namespace std;
//��Ĺ��캯��
class Person
{
	public:
		//Ĭ�ϵĹ��캯����û�в��� 
		Person():money(0)//��Ĺ��캯��; ��ʼ���б� 
		{
//			money = 0; 
		} 
	public:
		int money;
		
};
class Dog
{
	public:
		int num;
		string name;
}; 
Dog d;//ȫ�ֶ��󣬻����������ͻ��Զ���ʼ�� 

int main()
{
	Person a, b;//��������ʱ����ͨ������person�Ĺ��캯�������� 
	
	cout << a.money << endl;
	cout << b.money << endl;
	
	cout << "Hello, ���캯��" << endl << endl;;
	Dog c;//�����ֲ�����c�������������Ͳ�����г�ʼ����������徲̬�ֲ�������ͬȫ�ֶ��� 
	cout << "�ֲ�����" << endl;
	cout << c.name << endl;
	cout << c.num << endl;//δ���г�ʼ������ֵ
	cout << "ȫ�ֶ���"  << endl;
	cout << d.num << endl;
	cout << d.name << endl; 
	return 0;
}
