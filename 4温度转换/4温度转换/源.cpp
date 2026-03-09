#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	double f = 1.0 * c * 9 / 5 + 32;
	printf("%.2lf\n", f);
	return 0;
}