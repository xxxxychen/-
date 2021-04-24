#include<iostream>
using namespace std;
const int N = 8;
int a[N] = { 2,2,1,2,2,2,2,2 };
int Coin(int low, int high, int n) {
	int i, num1, num2, num3;
	int add1 = 0, add2 = 0;
	if (n == 1) {
		return low + 1;
	}
	if (n % 3 == 0) {
		num1 = num2 = n / 3;
	}
	else {
		num1 = num2 = n / 3 + 1;
	}
	num3 = n - num1 - num2;
	for (i = 0; i < num1; i++) {
		add1 = add1 + a[low + i];
	}
	for (i = num1; i < num1 + num2; i++) {
		add2 = add2 + a[low + i];
	}
	if (add1 < add2) {
		return Coin(low, low + num1 - 1, num1);
	}
	else if (add1 > add2) {
		return Coin(low + num1, low + num1 + num2 - 1, num2);
	}
	else {
		return Coin(low + num1 + num2, high, num3);
	}
}
int main() {
	system("color FD");
	cout << Coin(0, 7, 8) << endl;
	return 0;
}