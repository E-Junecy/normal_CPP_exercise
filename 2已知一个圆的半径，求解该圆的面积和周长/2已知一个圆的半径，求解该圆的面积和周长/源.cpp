#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#define pi 3.1415926

using namespace std;

int main() {
	double r ,c , s;
	cin >> r;
	c = 2 * pi * r;
	s = pi * r * r;
	printf("%.2lf\n", s);
	printf("%.2lf\n", c);
}