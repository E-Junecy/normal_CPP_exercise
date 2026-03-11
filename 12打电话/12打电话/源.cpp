#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void main() {
	int n;
	cin >> n;
	if (n < 10)printf("%.1f\n", 1.5 * n);
	else printf("%.1f\n", 1.2 * n);
}