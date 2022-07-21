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
	
	if(is.eof())//结束符 end of file 
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
	cout << "检查cin的状态" << endl;
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
//	if(cin.eof())//结束符 end of file 
//		cout << "cin eof()" << endl;
//	else
//		cout << "cin not eof()" << endl;
//	
//	if(cin.good())
//		cout << "cin good()" << endl;
//	else
//		cout << "cin not good()" << endl;
	//强制改变状态 
	//cin.setstate(istream::badbit);
	//cin.setstate(istream::failbit);
	cin.setstate(istream::badbit | istream::failbit);
	cin.clear(istream::badbit);//清除一种状态
	cin.clear();//清除所有状态
	
	istream::iostate old_state = cin.rdstate();//读取并保存流的状态
	//使用流... 
	cin.setstate(old_state);//恢复到原状态 
	
	check_cin_state(cin);
	cout << "请输入一个整数：" << endl;
	int n;
	cin >> n;
	cout << "再次检测cin状态" << endl;
	check_cin_state(cin);
	return 0;
}
