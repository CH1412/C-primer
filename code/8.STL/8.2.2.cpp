#include <iostream>
#include <list>

using namespace std;
void PrintList(const list<int>& ListInput);	//�������� 
int main()
{
	list<int> a;
	a.push_front(4);
	a.push_front(3);
	
	list<int>::iterator iter = a.insert(a.begin(), 2);//insert()����ָ�����Ԫ�صĵ�����
	
	a.push_front(1);
	a.push_front(0);
	PrintList(a);
	
	//ɾ��Ԫ��
	a.erase(iter);//������ָ���Ԫ��2��ɾ��
	//a.insert(a.begin(), iter);//ǰ�պ�ɾ��Ԫ�� 
	PrintList(a);
	a.erase(a.begin(), a.end());//Ԫ��ȫ��ɾ��
	PrintList(a); 
	return 0;
}

void PrintList(const list<int>& ListInput)
{
	cout << endl << "{ "; 
	list<int>::const_iterator iter;
	for(iter = ListInput.begin(); iter != ListInput.end(); ++iter)
		cout << *iter << " ";
	cout << "}";
}
