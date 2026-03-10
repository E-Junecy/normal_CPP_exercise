#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void main() {
	int x, a, b;
	cin >> x;
	a = x / 100;
	b = x % 10;
	a == b ? cout << "Y" << endl : cout << "N" << endl;
}