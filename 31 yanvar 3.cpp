﻿#include <iostream>
using namespace std;

class queue {
	int q[100];
	int sloc, rloc;
public:
	queue();
	queue();
	void qput(int i);
	int qget();
};
queue::queue()
{
	sloc = rloc = 0;
	cout << "occgired nomlandi";
}
queue::queue()
{
	cout << "qator buzildi.\n";
}
void queue::qput(int i)
{
	if (sloc == 100) {
		cout << "ochred toldi.\n";
		return;
	}
	sloc++;
	q[sloc] = i;
}
int queue::qget()
{
	if (rloc == sloc) {
		cout << "ochired pustoy.\n";
		return 0;
	}
	rloc++;
	return q[rloc];
}
int main()
{
	queue a, b;
	a.qput(10);
	b.qput(19);
	a.qput(20);
	b.qput(1);
	cout << a.qget() << " ";
	cout << b.qget() << "\n";
	cout << a.qget() << " ";
	cout << b.qget() << "\n";
	return 0;
}