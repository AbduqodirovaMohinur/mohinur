#include <iostream>
using namespace std;
int main()
{
	int x;
	for (x = 0; x < 7; x++) {
		if (x == 1) cout << "x birga teng.\n";
		else if (x == 2) cout << "x ikkiga teng.\n";
		else if (x == 3) cout << "x uchga teng.\n";
		else if (x == 4)cout << "x torga teng.\n";
		else if (x == 5)cout << "x beshga teng"
		else if (x == 6)cout << "x oltiga teng"
		else if (x == 7)cout << "x yettiga teng"
		else cout << "x 1 dan 4 gacha mas.\n";
		
	}
	return 0;
}