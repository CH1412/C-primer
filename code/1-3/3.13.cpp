#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
*分数段计数
*0-9；10-19；20-29；30-39；40-49；50-59；60-69；70-79；80-89；90-99；100
*创建一个长度11，初始值全为0的vector<unsigned>对象 
*通过grade/10下标累加计数 
*/ 
int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while(cin >> grade)
		if(grade <= 100)
			++scores[grade/10];
	return 0;
 } 
