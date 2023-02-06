#include <iostream>
using namespace std;
enum apple { jonathan, golden_del, winesap, cortland, mcintosh };
char name[][20] = { 
	"jonnathan",
	"golden_delicious",
	"red_delicious",
	"winesap",
	"cortland",
	"mcintosh",
};
int main()
{
	apple fruit;
	fruit = jonathan;
	cout << name[fruit] << '\n';
	fruit = winesap;
	cout << name[fruit] << '\n';
	fruit = mcintosh;
	cout << name[fruit] << '\n';
	return 0;
}