#include <iostream>
#include <cstdio>
using namespace std;

//用作抛出异常的类 
class BadSrcFile{};
class BadDestFile{};
class BadCopy{};

int my_cp1(const char * src_file, const char * dest_file)
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//以二进制的方式读原文件 
	if(in_file == NULL)
		return 1;
	out_file = fopen(dest_file, "wb");//以二进制的方式写入目标文件 
	if(out_file == NULL)
		return 2;
	char rec[256];//暂存读取的256Bytes内容 
	size_t bytes_in, bytes_out;
	//从in_file读取1-256 Bytes内容，返回实际读取内容的大小 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//将rec中读取到的实际内容大小写入out_file
		if(bytes_in != bytes_out)
			return 3;//当读入的和写入的内容大小不相等时 
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}

//使用 try catch throw
void my_cp2(const char * src_file, const char * dest_file)//抛出数字 
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//以二进制的方式读原文件 
	if(in_file == NULL)
//		return 1;
		throw 1;
	out_file = fopen(dest_file, "wb");//以二进制的方式写入目标文件 
	if(out_file == NULL)
//		return 2;
		throw 2;
	char rec[256];//暂存读取的256Bytes内容 
	size_t bytes_in, bytes_out;
	//从in_file读取1-256 Bytes内容，返回实际读取内容的大小 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//将rec中读取到的实际内容大小写入out_file
		if(bytes_in != bytes_out)
//			return 3;//当读入的和写入的内容大小不相等时
			throw 3;
	}
	fclose(in_file);
	fclose(out_file);
//	return 0;//可以不要返回值 
} 

void my_cp3(const char * src_file, const char * dest_file)//抛出字符串 
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//以二进制的方式读原文件 
	if(in_file == NULL)
		throw "打开源文件时出错！";
	out_file = fopen(dest_file, "wb");//以二进制的方式写入目标文件 
	if(out_file == NULL)
		throw "打开目标文件时出错！";
	char rec[256];//暂存读取的256Bytes内容 
	size_t bytes_in, bytes_out;
	//从in_file读取1-256 Bytes内容，返回实际读取内容的大小 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//将rec中读取到的实际内容大小写入out_file
		if(bytes_in != bytes_out)
			throw "拷贝文件时出错！";
	}
	fclose(in_file);
	fclose(out_file);
} 

void my_cp4(const char * src_file, const char * dest_file)//抛出类 
{
	FILE *in_file, *out_file;
	in_file = fopen(src_file, "rb");//以二进制的方式读原文件 
	if(in_file == NULL)
		throw BadSrcFile();
	out_file = fopen(dest_file, "wb");//以二进制的方式写入目标文件 
	if(out_file == NULL)
		throw BadDestFile();
	char rec[256];//暂存读取的256Bytes内容 
	size_t bytes_in, bytes_out;
	//从in_file读取1-256 Bytes内容，返回实际读取内容的大小 
	while((bytes_in = fread(rec, 1, 256, in_file))>0){
		bytes_out = fwrite(rec, 1, bytes_in, out_file);//将rec中读取到的实际内容大小写入out_file
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
				cout << "打开原文件时出错" << endl;
				break;
			case 2:
				cout << "打开目标文件时出错" << endl;
				break;
			case 3:
				cout << "拷贝文件时出错" << endl;
				break;
			default:
				cout << "发生未知错误" << endl;
		}
	}
	
	// try catch throw
	try{
		//将可能放生错误的语句写在try{}语句中
		my_cp2("1.txt", "22.txt");//抛出数字 
		my_cp3("1.txt", "222.txt");//抛出字符串
		my_cp4("111.txt", "2222.txt");//抛出类 
		
	}
	catch(int e)//e 即是 throw 的值 
	{
		switch(e){
			case 1:
				cout << "打开原文件时出错" << endl;
				break;
			case 2:
				cout << "打开目标文件时出错" << endl;
				break;
			case 3:
				cout << "拷贝文件时出错" << endl;
				break;
			default:
				cout << "发生未知错误" << endl;
		}
	}
	catch(const char *e)//可以使用多个catch去获取throw值 
	{
		cout << e << endl;
	}
	catch(BadSrcFile e)
	{
		cout << "打开源文件时出错" << endl;
	}
	catch(BadDestFile e)
	{
		cout << "打开目标文件时出错" << endl;
	}
	catch(BadCopy e)
	{
		cout << "拷贝异常" << endl;
	}
	catch(...)//表示所有异常 
	{
		//只执行一个catch，放在最后检测前面遗漏的异常
	}
	
	cout << "OK\n";
	return 0;
}
