#include <iostream>
using namespace std;

int main()
{
	int sum=0, val;
	//����һ���򵥵ķ��� 
//	while(cin>>val){//����һ�μ������״̬bad fail eof 
//		sum+=val;
//		cout << "sum is " << sum << endl;
//	}

	//���õķ���
	while(cin >> val, !cin.eof()){//���ű��ʽ�ұ���ѭ��������������eof���� 
		if(cin.bad())
//			throw std::runtime_error("IO stream corrupted.");
			cout << "bad!" << endl;
		if(cin.fail()){
			cerr << "bad data, try again" << endl;
			cin.clear();//���״̬��־���ָ�����
			cin.ignore(200, '\n');//���200�����������'\n'
			continue; 
		}
		sum += val;
		cout << "Sum is " << sum << endl;
	}
	return 0;
}
