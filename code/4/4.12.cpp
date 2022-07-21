#include <iostream>
using namespace std;

class CAnimal
{
	public:
		virtual void Speak() = 0;
};
class CCat : public CAnimal
{
	public:
		void CatchMice(){
			cout << "Cat: catch a mouse!" << endl;
		}
		void Speak(){
			cout << "Cat: Miao!" << endl;
		}
};
class CDog : public CAnimal
{
	public:
		void WagTail(){
			cout << "Dog: I wagged my tail!" << endl;
		}
		void Speak(){
			cout << "Dog: Wang!" << endl;
		}
};
class Book
{
};

void DetermineType(CAnimal* pAnimal)
{
	//运行时的类型识别与转换 
	CDog *pDog = dynamic_cast<CDog *>(pAnimal);
	if(pDog){
		cout << "The animal is a dog!" << endl;
		pDog->WagTail();
	}	
	CCat *pCat = dynamic_cast<CCat *>(pAnimal);
	if(pCat){
		cout << "The animal is a cat!" << endl;
		pCat->CatchMice();	
	}	
}
int main()
{
	double dPi = 3.1415926;
	//尽量避免类型转换，c++风格起到提示的作用 
	int nNum1 = static_cast<int>(dPi);//c++静态类型转换，类似C中的隐式转换 
	int nNum2 = (int)dPi;//C风格
	int nNum3 = dPi;//隐式转换
	
	char *pszString = "Hello World!";
	int *pBuf = (int *)pszString;//C风格
//	int *pBuf2 = static_cast<int *>(pszString);//失败 
	int *pBuf3 = reinterpret_cast<int *>(pszString);//可行，有警告
	
	CAnimal *pAnimal = new CCat();
	CCat *pCat = static_cast<CCat *>(pAnimal);//由指向父类的指针，转成指向子类的指针 
	
//	CBook *pBook = static_cast<CBokk *>(pAnimal);//错误，两类型不相干 
//	CBook *pBook = (CBook *)pAnimal;//C风格转换可以，没有检测 

	const char *pc_str = "hello world";
	char *pc = const_cast<char *>(pc_str);//将const常量转换为非const 
	char *pc2 = (char *)pc_str;//C风格转换 
	return 0;
}
