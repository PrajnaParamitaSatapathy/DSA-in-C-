#include <iostream>
using namespace std;
class Hero{
	public:
	int health;
	char level;
	Hero(int health)
	{
		cout<<"This->"<<this<<endl;
		this->health=health;
	}
	Hero(int health, char level)
	{
		this->health=health;
		this->level=level;
	}
};
int main()
{
	Hero h1(70);
	cout<<"Health:"<<h1.health<<&h1<<endl;
	return 0;
}
