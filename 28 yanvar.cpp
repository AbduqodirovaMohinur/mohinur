﻿#include <iostream>
using namespace std;
struct sample {
	int a;
	char ch;
};
void f1(sample para);
int main()
{
	struct sample arg;
	arg.a = 1000;
	arg.ch = 'x';
	f1(arg);
	return 0;
}
void f1(sample para)