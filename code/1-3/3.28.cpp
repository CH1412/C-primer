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
	//����������ַ�����ֵ����̬����
	char **parr = new char*[svec.size()];//��Ϊһ���ַ�������һ���ַ�ָ�룬�ܶ��ַ��������ַ�ָ������
	 
	size_t ix = 0;//�����±�
	for(vector<string>::iterator iter=svec.begin(); iter != svec.end(); ++iter, ++ix){
		//����ÿ��string��С��ȷ�������Զ�̬�����е�Ԫ��Ҳ�Ƕ�̬����
		char *p = new char[(*iter).size()+1];//+1��ʾ'\0' 
		strcpy(p, (*iter).c_str());//��stringת��ΪC�������Ȼ��copy��p
		parr[ix] = p;//���ַ�����ŵ��ַ�ָ�������� 
	}
	
	cout << "�����е��ַ�����" << endl;
	for(vector<string>::iterator iter=svec.begin(); iter != svec.end(); ++iter)
		cout << *iter << " ";
	cout << "\n�ַ������е��ַ�����" << endl;
	for(ix=0; ix != svec.size(); ++ix)
		cout << parr[ix] << " ";
	//�����̬����
	for(ix=0; ix != svec.size(); ++ix)
		delete[] parr[ix]; 
	delete[] parr;
	return 0;
 }
