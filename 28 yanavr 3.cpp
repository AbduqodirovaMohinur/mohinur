#include <iostream>
using namespace std;
int main()
{
	union {
		short int count;
		char ch[2];
	};
	ch[0] = 'x';
	ch[1] = 'y';
	cout << "sinvlarning birikmasi:" << ch[0] << ch[1] << '\n';
	cout << "butun soning birikmasi:" << count << '\n';
	return 0;
}
