#include <iostream>
using namespace std;
struct stype {
	int a, b;
};
int main()
{
	stype svarl, svar2;
	svarl.a = svarl.b = 10;
	svar2.a = svar2.b = 20;
	cout << "ozlashtirilishidan oldin struktura holati";
	cout << "svarl" << svarl.a << ' ' << svarl.b;
	cout << '\n';
	cout << "svar2:" << svar2.a << ' ' << svar2.b;
	cout << "\n\n";
	svar2 = svarl;
	cout << "ozlashtirilgandan kegingi struktura holati";
	cout << "svarl:" << svarl.a << ' ' << svarl.b;
	cout << "\n";
	cout << "svar2:" << svar2.a << ' ' << svar2.b;
	return 0;
}