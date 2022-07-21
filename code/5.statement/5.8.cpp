#include <iostream>
#include <stdexcept>
using namespace std;
class Stu
{
	public:
		Stu(int age){
			if(age<0 || age>150)
				throw out_of_range("年龄不能小于0或大于150");
			this->m_age = age;
		}
	private:
		int m_age;
};

int main()
{
	try{
		Stu a(200);
		cout << "Success!" << endl;
	}
	catch(out_of_range err){
		cout << "出错：" << err.what() << endl;//err.what()返回错误信息 
	}
	return 0;
}
