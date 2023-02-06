#include <iostream>
using namespace std;
class P_example {
	int num;
public:
	void sed_num(int val) { num = val; }
	void show_num();
};
void P_example::show_num()
{
	cout << num << "\n";
}
int main()
{
	P_example ob, * p;
	ob.sed_num(1);
	ob.show_num();
	p = &ob;
	p->show_num();
	return 0;
}