#include <iostream>
using namespace std;
class Sales_item
{
	public:
		//Ĭ�Ϲ��캯����û�в��� 
		Sales_item():units_sold(0), revenue(0)//���캯���ĳ�ʼ���б� 
		{
			//���Կ��� 
		}
	public:
		bool same_isbn(const Sales_item &rhs) const //���������������ݳ�Ա�����޸� 
		{
			return this->isbn==rhs.isbn;//this��ʾ��ǰ���󣬿���ʡ�� 
		}
		
		double avg_prive() const;//����ԭ������ 
		
	public:
		std::string isbn;//��� 
		unsigned units_sold;//���� 
		double revenue;//��� 
};
//������ⲿ���庯���� 
double Sales_item::avg_prive() const//::��ʾ��Χ�������������ڸ��� 
{
	if(this->units_sold)
		return this->revenue / this->units_sold;
	else
		return 0;
}


int main()
{
	//��		���� 
	Sales_item item1, item2;
	item1.isbn = "0-201-78345-X";
	item1.units_sold = 10;
	item1.revenue = 300.00;
	
	cout << item1.avg_prive() << endl;
	
	item2.isbn = "0-201-78345-X";
	item2.units_sold = 2;
	item2.revenue = 70.00;
	
	cout << item2.avg_prive() << endl;
	
	if(item1.same_isbn(item2))
		cout << "The two books are the same." << endl;
	else
		cout << "Not the same." << endl;
	return 0;
}
