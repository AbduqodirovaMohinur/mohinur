#include <iostream>
#include <cstdlib>
#include <conio.h>
char* fortunes[] = {
	"sizga yaqinda pul keladi \n",
	"sizning hayotingizga sevgi kirib keladi \n",
	"siz uzoq baxtli hayot kechirasz \n",
	"hozir tikkan pulingiz qaytib keladi \n",
	"sizni yaqin dostingiz sizni izlaydi \n".
};
int main() {
	int chance;
	cout << ":";
	while (!kbhit()) rand();
	cout << '\n';
	chance = rand();
	chance = chance % 5;
	cout << fortunes[chance];
	return 0;
}