#include <iostream>
using namespace std;
//命令行选项：个数 字符串数组，每一个元素是一个字符串 
int main(int argc, char **argv)
{
	cout << argv[0] << endl;//argv[0]不是命令行选项，而是程序名称,本例为6.7 
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	for(int i=0; i<argc; ++i)
		cout << argv[i] << endl;
//	if(argc != 3){
//		cout << "you should entry three nums" << endl;
//		return -1;
//	}
//	cout << "sum of the nums is: "
//		<< (atof(argv[1])+atof(argv[2])) << endl;
	return 0;
}
