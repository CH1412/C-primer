#include <iostream>
using namespace std;

int main()
{
	int sum=0, val;
	//这是一个简单的方法 
//	while(cin>>val){//这里一次检测三个状态bad fail eof 
//		sum+=val;
//		cout << "sum is " << sum << endl;
//	}

	//更好的方法
	while(cin >> val, !cin.eof()){//逗号表达式右边是循环的条件，仅在eof结束 
		if(cin.bad())
//			throw std::runtime_error("IO stream corrupted.");
			cout << "bad!" << endl;
		if(cin.fail()){
			cerr << "bad data, try again" << endl;
			cin.clear();//清空状态标志，恢复正常
			cin.ignore(200, '\n');//清除200个错误或遇到'\n'
			continue; 
		}
		sum += val;
		cout << "Sum is " << sum << endl;
	}
	return 0;
}
