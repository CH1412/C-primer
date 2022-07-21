#include <iostream>

using namespace std;

void check_cin_state(istream& is)
{
	if(is.bad())
		cout << "cin.bad()" << endl;
	else
		cout << "cin not bad" << endl;
	
	if(is.fail())
		cout << "cin fail()" << endl;
	else
		cout << "cin not fail()" << endl;
	
	if(is.eof())//������ end of file 
		cout << "cin eof()" << endl;
	else
		cout << "cin not eof()" << endl;
	
	if(is.good())
		cout << "cin good()" << endl;
	else
		cout << "cin not good()" << endl;
}

int main()
{
	cout << "���cin��״̬" << endl;
//	if(cin.bad())
//		cout << "cin.bad()" << endl;
//	else
//		cout << "cin not bad" << endl;
//	
//	if(cin.fail())
//		cout << "cin fail()" << endl;
//	else
//		cout << "cin not fail()" << endl;
//	
//	if(cin.eof())//������ end of file 
//		cout << "cin eof()" << endl;
//	else
//		cout << "cin not eof()" << endl;
//	
//	if(cin.good())
//		cout << "cin good()" << endl;
//	else
//		cout << "cin not good()" << endl;
	//ǿ�Ƹı�״̬ 
	//cin.setstate(istream::badbit);
	//cin.setstate(istream::failbit);
	cin.setstate(istream::badbit | istream::failbit);
	cin.clear(istream::badbit);//���һ��״̬
	cin.clear();//�������״̬
	
	istream::iostate old_state = cin.rdstate();//��ȡ����������״̬
	//ʹ����... 
	cin.setstate(old_state);//�ָ���ԭ״̬ 
	
	check_cin_state(cin);
	cout << "������һ��������" << endl;
	int n;
	cin >> n;
	cout << "�ٴμ��cin״̬" << endl;
	check_cin_state(cin);
	return 0;
}
