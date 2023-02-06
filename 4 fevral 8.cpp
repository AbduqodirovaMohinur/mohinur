#include <iostream>
using namespace std;
class myclass {
	int* p;
public:
	myclass(int i);
	myclass(const myclass& ob);
	myclass();
	int galval() { return *p; }
};
myclass::myclass(const myclass& obj)
{
	p = new int;
	*p = obj.p;
	cout << "konstruksiyani kopiyasi chiqarildi";
	myclass
}