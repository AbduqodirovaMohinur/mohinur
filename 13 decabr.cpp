#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int magic;//
	int guess;//
	magic = rand();
	cout << "taxminingizni kiriting";
	cin >> guess;
		if(guess==magic) {
		cout << "**togri**/n";
		cout << magic << " sehirli son shunga teng /n";
	}
	else {
		cout << "...sehirli son bunga teng emas.";
		if (guess > magic); cout << " taxmin magic sondan koproq ./n";
		else cout << "taxmin magic sondan koproq/n";
	}
	return 0;
}