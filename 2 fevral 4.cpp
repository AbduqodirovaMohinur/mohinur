#include <iostream>
using namespace std;
struct cl {
	int get_i();
	void put_i(int j);
private:
	int i;
};
int cl::get_i()
{
	return i;
}
void cl::put_i(int j)
{
	i = j;
}
int main()
{
	cl s;
	s.put_i(10);
	cout << s.get_i();
}