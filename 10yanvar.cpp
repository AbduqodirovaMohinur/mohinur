#include <iostream>
#include <cstdio>
using namespace std;
char name[2][40];
char phone[2][10];
float hours[2];
float wage[2];
int main();
void enter(), report();
int main()
{
	int choice;
	do {
		choice = main();
		switch (choice) {
		case 0: break;
		case 1:enter();
			break;
		case 2: report();
			break;
		default: cout << "yana bir bor urinib koring.\n\n";
		}
	} while (choice != 0);
	return 0;
}
int menu()
{
	int choise;
	cout << "0.programmadan chiqish\n";
	cout << "1.informatsiyani kirgizish\n";
	cout << "2.xisobotni qayta ishlash\n";
	cout << "kamandani tanlang\n:";
	cin >> choise;
	return choise;
}
void enter()
{
	int i;
	char temp[50];
	for (i = 0; i < 2; i++) {
		cout << "familyangizni kiriting:";
		cin >> name[i];
		cout << "telefon raqamingizni kiriting:";
		cin >> phone[i];
		cout << "nechi soat ishlab berganingizni kiriting:";
		cin >> hours[i];
		cout << "dolyani kiriting:";
		cin >> wage[i];
	}
}
void report()
{
	int i;
	for (i = 0; i < 2; i++) {
		cout << name[i] << ' ' << phone[i] << '\n';
		cout << "oylik ish haqqi:" << wage[i] * hours[i];
		cout << '\n';
	}
}
