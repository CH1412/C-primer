#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
*�����μ���
*0-9��10-19��20-29��30-39��40-49��50-59��60-69��70-79��80-89��90-99��100
*����һ������11����ʼֵȫΪ0��vector<unsigned>���� 
*ͨ��grade/10�±��ۼӼ��� 
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
