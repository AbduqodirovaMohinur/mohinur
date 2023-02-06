#include <iostream>
using namespace std;
class p_exmple {
	int num;
public:
	void set_num(int val) { num = val; }
	void show_num();
};
void P_exmple::show_num()
{
	cout << num << "\n";
}
int main()
{
	p_exmple ob[2], * p;
	ob[0].set_num(10);
	ob[1].set_num(20);
	p = &ob[0];
	p->show_num();
	p++
		p->show
}