#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int* i;
	double* j;
	i = (int*)malloc(sizeof(int));
	if (!i) {
		cout << "xotirada joy ajratilmadi.\n";
		return 0;
	}
	j = (double*)malloc(sizeof(double));
	if (!j) {
		cout << "xotrirada joy ajratilmadi.\n";
		return 0;
	}
	*i = 10;
	*j = 100.123;
	cout << *i << ' ' << *j;
	free(i);
	free(j);
	return 0;
}