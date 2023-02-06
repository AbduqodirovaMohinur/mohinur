#include <iostream>
#include <iostream>
using namespace std;
int main()
{
	char str[80];
	char token[80];
	int i, j;
	cout << ":";
	gets(str);
	for (i = 0; ; i++) {
		for (j = 0; str[i] != '' && str[i]; j++, i++)
			token[j] = str[i];
		token[j] = '\0';
		cout << token << '\n';
		if (!str[i]) break;
	}
	return 0;
}