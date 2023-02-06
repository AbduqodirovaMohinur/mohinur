#include <iostream>
using namespace std;
struct mystruct {
	int a; int b;
};
mystruct& f(mystruct& var);
int main()
{
	mystruct x, y;
	x.a = 10; x.b = 20;
	cout << "hozirdagi elementlar x.a and x.b:";
	cout << x.a << ' ' << x.b << '\n';
	y = f(x);
	cout << "ozgartirilgan element x.a i x.b:";
	cout << x.a << ' ' << x.b << '\n';
	cout << "ozgartirilgan element y. a i y.b:";
	cout << y.a << ' ' << y.b << '\n';
	return 0;
}
mystruct& f(mystruct& var)
{
	var.a = var.a * var.a;
	var.b = var.b / var.b;
	return var;
}