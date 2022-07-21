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
			cout << i << ": new Dog 成功." << endl;
		}
	}
	catch(bad_alloc err){//内存不足时，抛出异常 
		cout << "new Dog 失败：" << err.what() << endl;
	}
	return 0;
}
