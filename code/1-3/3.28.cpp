#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
int main()
{
	vector<string> svec;
	string str;
	cout << "Entry strings " << endl;
	while(cin >> str)
		svec.push_back(str);
	//将向量里的字符串赋值给动态数组
	char **parr = new char*[svec.size()];//因为一个字符串就是一个字符指针，很多字符串就是字符指针数组
	 
	size_t ix = 0;//数组下标
	for(vector<string>::iterator iter=svec.begin(); iter != svec.end(); ++iter, ++ix){
		//由于每个string大小不确定，所以动态数组中的元素也是动态数组
		char *p = new char[(*iter).size()+1];//+1表示'\0' 
		strcpy(p, (*iter).c_str());//将string转换为C风格数组然后copy到p
		parr[ix] = p;//将字符数组放到字符指针数组中 
	}
	
	cout << "向量中的字符串：" << endl;
	for(vector<string>::iterator iter=svec.begin(); iter != svec.end(); ++iter)
		cout << *iter << " ";
	cout << "\n字符数组中的字符串：" << endl;
	for(ix=0; ix != svec.size(); ++ix)
		cout << parr[ix] << " ";
	//清除动态数组
	for(ix=0; ix != svec.size(); ++ix)
		delete[] parr[ix]; 
	delete[] parr;
	return 0;
 }
