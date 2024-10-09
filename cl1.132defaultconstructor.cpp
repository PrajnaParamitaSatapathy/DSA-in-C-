#include <iostream>
using namespace std;

class Hero
{
	public:
	int health;
	char level;
	Hero()
	{
		cout<<"Constructor called:"<<endl;
	}
};
int main()
{
	cout<<"Hi"<<endl;
	Hero h1; //Static memory allocation
	Hero *h2 = new Hero(); //Dynamic memory allocation
	cout<<"Hello"<<endl;
	return 0;
}
