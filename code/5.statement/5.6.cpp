#include <iostream>
#include <new>
using namespace std;
class Dog{
	public:
		Dog()
		{
			parr = new int[1000000];//4MB
		}
	private:
		int *parr;			
};

int main()
{
	Dog *pDog;
	try{
		for(int i=1; i<100; ++i){
			pDog = new Dog();
			cout << i << ": new Dog �ɹ�." << endl;
		}
	}
	catch(bad_alloc err){//�ڴ治��ʱ���׳��쳣 
		cout << "new Dog ʧ�ܣ�" << err.what() << endl;
	}
	return 0;
}
