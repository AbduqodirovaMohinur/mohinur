#include <iostream>
using namespace std;
int div_zero();
int main()
{
	int i, j, result;
	cout << "boluvchi va bolinuvchi:";
	cin >> i >> j;
	result = j ? i / j : div_zero();
	cout << "natija:" << result;
	return 0;
}
int div_zero()
{
	cout << "nolga bolish mumkun emas.\n";
	return 0;
}