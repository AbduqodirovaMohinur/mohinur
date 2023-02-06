#include <iostream>
using namespace std;
int main()
{
	int x;
	for (x = 0; x < 6; x++) {
		if (x == 1) cout << "x birga teng.\n";
		else if (x == 2) cout << "x ikkiga teng.\n";
		else if (x == 3) cout << "x uchga teng.\n";
		else if (x == 4)cout << "xtorga teng.\n";
		else cout << "x 1 dan 4 gacha mas.\n";
	}
	return 0;
}