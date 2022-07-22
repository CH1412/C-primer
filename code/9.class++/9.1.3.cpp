#include <iostream>
#include <string>
using namespace std;

class Screen;	//��������δ���岻�ܴ�������û�������ڴ� 

class Y{
	private:
		Screen *ptr;//���Դ���ָ��δ�������ָ�� 
};

class Record{	//һ���������࣬�����ඨ������������ 
	public:
		Record():byte_count(0) {}
		Record(size_t x):byte_count(x) {}
		Record(string s):name(s), byte_count(0) {}
		
		size_t get_count() const{
			return byte_count;
		}
		
		string get_name() const{
			return name;
		}
			
	private:
		size_t byte_count;
		string name;//��¼���� 
}a;	//�������ⶨ�����

struct Person{
	public:
		Person(const string &nm, const string &addr):name(nm), address(addr){}
		
		string getName() const{
			return name;
		}
		
		string getAddress() const{
			return address;
		}
		
		
	private:
		string name;
		string address;
};

int main()
{
	Record r;	//�ڶ�ջ�ϴ�����Ķ���
	Record *p = new Record;	//�ڶ��϶�̬�ش�������
	delete p; 
	
	struct Person per("Bill", "�ɻ����");
	cout << per.getName() << " " << per.getAddress() << endl; 
	
	return 0;
}
