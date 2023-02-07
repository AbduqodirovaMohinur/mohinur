#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int chocolate = 2;
	int milk = 3;
	int coffee = 1;
	float price0fCHocolote = 11.04;
	float price0fmilk = 9.04;
	float price0fcoffee = 70.77;
	float sum = 0;
	sum = (chocolate * price0fCHocolote) * (milk * price0fmilk) + (coffee * price0fCHocolote);
	cout << "jami=";
	cout << chocolate * price0fCHocolote << '+' << milk * price0fmilk << '+' << coffee * price0fcoffee;
	cout << "=" << sum << endl << endl;
	return 0;
}