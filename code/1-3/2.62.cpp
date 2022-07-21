#include <iostream>
#include <string>
using namespace std;
//使用自定义Sales_data类 
struct Sales_data{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main()
{
	Sales_data data1, data2;
	double price = 0;	//书的胆碱，用于计算销售收入 
	//读入data1
	cin >> data1.bookNo >> data1.units_sold >> price;
	//计算销售收入
	data1.revenue = data1.units_sold * price;
	//读入对象data2
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	//检查data1和data2的ISBN是否相同
	if(data1.bookNo == data2.bookNo){
	 	unsigned totalCnt = data1.units_sold + data2.units_sold;
	 	double totalRevenue = data1.revenue + data2.revenue;
	 	//输出：ISBN、总销售量、总销售额、平均加个
		cout << data1.bookNo << " " << totalCnt
			<< " " << totalRevenue << " ";
		if(totalCnt != 0){
			cout << totalRevenue/totalCnt << endl;
		}
		else
			cout << "(no sales)" << endl;
		return 0;
	 }
	else{
	 	cerr << "Data must refer to the same ISBN"
	 		<< endl;
	 	return -1;
	 }
}
