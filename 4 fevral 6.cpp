#include <iostream>
#include <cstdlib>
using namespace std;
class myclass {
	int* p;
public:
	myclass(int i)
		myclass(const myclass ob);
	myclass();
	int getval() { return *p; }
};
myclass::myclass::myclass(const myclass ob)
{
	p = new int;
	*p = *ob.p;
	cout << "p xotira konstruksi ichun yaratilgan.\n";
}
myclass::myclass(int i)
{
	cout << "oddiy konstruksksiya bilan p xotira ajratilishi";
	p = new int;
	*p = i;
}
myclass::myclass()
{
	cout << "p xotira tozalash.\n";
	dalete d;
}
int main()
{
	myclass a(10);
	myclass b = a;
	return 0;
}