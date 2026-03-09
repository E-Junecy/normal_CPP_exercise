#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main() {
	int n;
	int p, s;
	cin >> n;
	p = 2 * n + 3;
	s = n * n;
	printf("%.1lf%%\n",100* (1.0*p )/ s);

	return 0;
}