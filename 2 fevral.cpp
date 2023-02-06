#include <iostream>
using namespace std;
class queue {
	int q[100];
	int sloc, rloc;
	int who;
public:
	queue(int id);
	queue();
	void qput(int i);
	int qget;
};
queue::queue(int id)
{
	sloc = rloc = 0;
	who = id;
	cout << "navbat" << who << "raqam berildi";
}
queue::queue()
{
	if (sloc == 100) {
		cout << "navbat" << who << "uzulgan.\n";
	}
	void queue::qput(int i)
	{
		if (sloc == 100) {
			cout << "ochired toldi";
			return;
		}
		sloc++;
		q[sloc] = i;
	}
	int queue::qget()
	{
		if (rloc == sloc) {
			cout << "ochired bosh";
			return 0;
			rloc++;
			return q[rloc];
		}
		int main()
		{
			queue a(1), (2);
			a.qput(10);
			b.qput(19);
			a.qput(20);
			return 0;
		}

