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
	//����ʱ������ʶ����ת�� 
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
	//������������ת����c++�������ʾ������ 
	int nNum1 = static_cast<int>(dPi);//c++��̬����ת��������C�е���ʽת�� 
	int nNum2 = (int)dPi;//C���
	int nNum3 = dPi;//��ʽת��
	
	char *pszString = "Hello World!";
	int *pBuf = (int *)pszString;//C���
//	int *pBuf2 = static_cast<int *>(pszString);//ʧ�� 
	int *pBuf3 = reinterpret_cast<int *>(pszString);//���У��о���
	
	CAnimal *pAnimal = new CCat();
	CCat *pCat = static_cast<CCat *>(pAnimal);//��ָ�����ָ�룬ת��ָ�������ָ�� 
	
//	CBook *pBook = static_cast<CBokk *>(pAnimal);//���������Ͳ���� 
//	CBook *pBook = (CBook *)pAnimal;//C���ת�����ԣ�û�м�� 

	const char *pc_str = "hello world";
	char *pc = const_cast<char *>(pc_str);//��const����ת��Ϊ��const 
	char *pc2 = (char *)pc_str;//C���ת�� 
	return 0;
}
