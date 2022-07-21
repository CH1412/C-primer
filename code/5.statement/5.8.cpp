#include <iostream>
#include <stdexcept>
using namespace std;
class Stu
{
	public:
		Stu(int age){
			if(age<0 || age>150)
				throw out_of_range("���䲻��С��0�����150");
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
		cout << "����" << err.what() << endl;//err.what()���ش�����Ϣ 
	}
	return 0;
}
