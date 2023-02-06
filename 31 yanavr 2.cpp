#include <iostream>
using namespace std;
class myclass {
	int a;
public:
	int b;
	void setab(int i);
	int geta();
	void reset();
};
void myclass::setab(int i)
{
	a = 1;
	b = i * i;
}
int myclass::geta()
{
	return a;
}
void myclass::reset()
{
	setab(0);
}
int main()
{
	myclass ob;
	ob.setab(5);
	cout << "obyektni setab 5ning chiqarilgandan kegingi holati.\n";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	ob.b = 20;
	cout << "ob obyektini ob.b20 sozlangandan kegingi holati:";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	ob.reset();
	cout << "ob obyektni funksiya chaqirilgandan keyingi holati:";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	return 0;
}