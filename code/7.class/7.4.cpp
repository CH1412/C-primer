#include <iostream>
#include <stdexcept>

using namespace std;
//函数一直读取流直到文件结束为止 
istream& get(istream & in)
{
	int ival;
	while(in >> ival, !in.eof()){
		if(in.bad())
			throw runtime_error("IO stream corrupted");
		if(in.fail()){
			cerr << "bad data, try again" << endl;
			in.clear();//清除流的状态
			in.ignore(200, '\n');
			continue; 
		}
		cout << "输入的数据：" << ival << endl;
	}
	in.clear();

	return in;
}

int main()
{
	double dval;
	
	cout << "测试函数：" << endl;
	get(cin);
	cout << "函数测试结束！" << endl;	

	cin >> dval;
	cout << dval << endl;
	return 0;
}
