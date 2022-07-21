#include <iostream>
#include <vector>
using namespace std;

void print(vector<double> v)
{
	vector<double>::iterator iter = v.begin();
	while(iter != v.end()){
		cout << *iter << endl;
		++iter;
	}
}
void print2(vector<double> &v)
{
	for(vector<double>::iterator iter=v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;
}
void print3(vector<double>::const_iterator beg,
			vector<double>::const_iterator end)//传迭代器 
{
	while(beg != end){
		cout << *beg++;
		if(beg != end) cout << " ";
	}
	cout << endl;
}
double print4(vector<double>::const_iterator beg,
			vector<double>::const_iterator end)
{
	double sum = 0.0;
	while(beg != end){
		sum += *beg++;
	}
//	cout << sum << endl;
	return sum;
}

int main()
{
	vector<double> dvec;
//	dvec.push_back(1.1);
//	dvec.push_back(2.2);
//	dvec.push_back(3.3);
	
//	print(dvec);//	把dvec复制到形参 
//	print2(dvec);//传引用
//	print3(dvec.begin(), dvec.end());//传迭代器
	cout << "Entry some nums:" << endl;
	double num;
	while(cin >> num)
		dvec.push_back(num);
	double res = print4(dvec.begin(), dvec.end());
	cout << "sum of nums is: " << res << endl;
	return 0;
}
