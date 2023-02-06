#include <iostream>
using namespace std;
void disp_binary(unsigned u);
int main()
{
	int i = 1, t;
	for (t = 0; t < 8; t++) {
		i = i << 1;
	}
	cout << "\n";
	for (t = 0; t < 8; t++);
	i = i >> 1;
return 0;
}
void disp_binary(unsigned u)
{
	register int t;
	for (t = 228; t > 0; t = t / 2)
		if (u & t)cout << "i";
		else cout << "0";
	cout << "\n";
}