#include <iostream>
#include <stdexcept>

using namespace std;
//����һֱ��ȡ��ֱ���ļ�����Ϊֹ 
istream& get(istream & in)
{
	int ival;
	while(in >> ival, !in.eof()){
		if(in.bad())
			throw runtime_error("IO stream corrupted");
		if(in.fail()){
			cerr << "bad data, try again" << endl;
			in.clear();//�������״̬
			in.ignore(200, '\n');
			continue; 
		}
		cout << "��������ݣ�" << ival << endl;
	}
	in.clear();

	return in;
}

int main()
{
	double dval;
	
	cout << "���Ժ�����" << endl;
	get(cin);
	cout << "�������Խ�����" << endl;	

	cin >> dval;
	cout << dval << endl;
	return 0;
}
