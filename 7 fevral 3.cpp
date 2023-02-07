#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int cups = 6;
	int spoons = cups;
	int saucers = cups;
	int amount = cups + spoons + saucers;
	cout << "hammasi" << amount << "narsalar" << endl;
	return 0;
}