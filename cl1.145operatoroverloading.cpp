#include <iostream>
using namespace std;
class B
{
	public:
	int a;
	int b;
	void operator+ (B &obj)
	{
		int value1=this->a;
		int value2= obj.a;
		cout<<"The difference using + operator is:"<<value2-value1<<endl;
	}
	void operator() ()
	{
		cout<<"Hi this is bracket "<<this->a<<endl;
	}
};
int main()
{
	B obj1,obj2;
	obj1.a=4;
	obj2.a=7;
	obj1+obj2;
	obj1();
	return 0;
}
