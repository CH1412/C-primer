#include <iostream>
#include <cstdio>
using namespace std;

//�����׳��쳣���� 
class BadSrcFile{};
class BadDestFile{};
class BadCopy{};

int my_cp1(const char * src_file, const char * dest_file)
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//�Զ����Ƶķ�ʽ��ԭ�ļ� 
	if(in_file == NULL)
		return 1;
	out_file = fopen(dest_file, "wb");//�Զ����Ƶķ�ʽд��Ŀ���ļ� 
	if(out_file == NULL)
		return 2;
	char rec[256];//�ݴ��ȡ��256Bytes���� 
	size_t bytes_in, bytes_out;
	//��in_file��ȡ1-256 Bytes���ݣ�����ʵ�ʶ�ȡ���ݵĴ�С 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//��rec�ж�ȡ����ʵ�����ݴ�Сд��out_file
		if(bytes_in != bytes_out)
			return 3;//������ĺ�д������ݴ�С�����ʱ 
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}

//ʹ�� try catch throw
void my_cp2(const char * src_file, const char * dest_file)//�׳����� 
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//�Զ����Ƶķ�ʽ��ԭ�ļ� 
	if(in_file == NULL)
//		return 1;
		throw 1;
	out_file = fopen(dest_file, "wb");//�Զ����Ƶķ�ʽд��Ŀ���ļ� 
	if(out_file == NULL)
//		return 2;
		throw 2;
	char rec[256];//�ݴ��ȡ��256Bytes���� 
	size_t bytes_in, bytes_out;
	//��in_file��ȡ1-256 Bytes���ݣ�����ʵ�ʶ�ȡ���ݵĴ�С 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//��rec�ж�ȡ����ʵ�����ݴ�Сд��out_file
		if(bytes_in != bytes_out)
//			return 3;//������ĺ�д������ݴ�С�����ʱ
			throw 3;
	}
	fclose(in_file);
	fclose(out_file);
//	return 0;//���Բ�Ҫ����ֵ 
} 

void my_cp3(const char * src_file, const char * dest_file)//�׳��ַ��� 
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//�Զ����Ƶķ�ʽ��ԭ�ļ� 
	if(in_file == NULL)
		throw "��Դ�ļ�ʱ����";
	out_file = fopen(dest_file, "wb");//�Զ����Ƶķ�ʽд��Ŀ���ļ� 
	if(out_file == NULL)
		throw "��Ŀ���ļ�ʱ����";
	char rec[256];//�ݴ��ȡ��256Bytes���� 
	size_t bytes_in, bytes_out;
	//��in_file��ȡ1-256 Bytes���ݣ�����ʵ�ʶ�ȡ���ݵĴ�С 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//��rec�ж�ȡ����ʵ�����ݴ�Сд��out_file
		if(bytes_in != bytes_out)
			throw "�����ļ�ʱ����";
	}
	fclose(in_file);
	fclose(out_file);
} 

void my_cp4(const char * src_file, const char * dest_file)//�׳��� 
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//�Զ����Ƶķ�ʽ��ԭ�ļ� 
	if(in_file == NULL)
		throw BadSrcFile();
	out_file = fopen(dest_file, "wb");//�Զ����Ƶķ�ʽд��Ŀ���ļ� 
	if(out_file == NULL)
		throw BadDestFile();
	char rec[256];//�ݴ��ȡ��256Bytes���� 
	size_t bytes_in, bytes_out;
	//��in_file��ȡ1-256 Bytes���ݣ�����ʵ�ʶ�ȡ���ݵĴ�С 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//��rec�ж�ȡ����ʵ�����ݴ�Сд��out_file
		if(bytes_in != bytes_out)
			throw BadCopy();
	}
	fclose(in_file);
	fclose(out_file);
}

int main()
{
	int res;
	res = my_cp1("1.txt", "2.txt");
	if(res != 0){
		switch(res){
			case 1:
				cout << "��ԭ�ļ�ʱ����" << endl;
				break;
			case 2:
				cout << "��Ŀ���ļ�ʱ����" << endl;
				break;
			case 3:
				cout << "�����ļ�ʱ����" << endl;
				break;
			default:
				cout << "����δ֪����" << endl;
		}
	}
	
	// try catch throw
	try{
		//�����ܷ�����������д��try{}�����
		my_cp2("1.txt", "22.txt");//�׳����� 
		my_cp3("1.txt", "222.txt");//�׳��ַ���
		my_cp4("111.txt", "2222.txt");//�׳��� 
		
	}
	catch(int e)//e ���� throw ��ֵ 
	{
		switch(e){
			case 1:
				cout << "��ԭ�ļ�ʱ����" << endl;
				break;
			case 2:
				cout << "��Ŀ���ļ�ʱ����" << endl;
				break;
			case 3:
				cout << "�����ļ�ʱ����" << endl;
				break;
			default:
				cout << "����δ֪����" << endl;
		}
	}
	catch(const char *e)//����ʹ�ö��catchȥ��ȡthrowֵ 
	{
		cout << e << endl;
	}
	catch(BadSrcFile e)
	{
		cout << "��Դ�ļ�ʱ����" << endl;
	}
	catch(BadDestFile e)
	{
		cout << "��Ŀ���ļ�ʱ����" << endl;
	}
	catch(BadCopy e)
	{
		cout << "�����쳣" << endl;
	}
	catch(...)//��ʾ�����쳣 
	{
		//ִֻ��һ��catch�����������ǰ����©���쳣
	}
	
	cout << "OK\n";
	return 0;
}
