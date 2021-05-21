#include<iostream>
#include<cmath>
using namespace std;
const int N = 20;
int a[N];
int Prime(int x) {
	int i, n;
	n = (int)sqrt(x);
	for (i = 2; i < n; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}
int Check(int k, int n) {
	int flag = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] == a[k]) {
			return 0;
		}
	}
	flag = Prime(a[k] + a[k - 1]);
	if (flag == 1 && k == n - 1) {
		flag = Prime(a[k] + a[0]);
	}
	return flag;
}
void PrimeCircle(int n) {
	int i, k;
	for (i = 0; i < n; i++) {
		a[i] = 0;
	}
	a[0] = 1;
	k = 1;
	while (k >= 1) {
		a[k] = a[k] + 1;
		while (a[k] <= n) {
			if (Check(k, n) == 1) {
				break;
			}
			else {
				a[k] = a[k] + 1;
			}
		}
		if (a[k] <= n && k == n - 1) {
			for (i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			return;
		}
		if (a[k] <= n && k < n - 1) {
			k = k + 1;
		}
		else {
			a[k--] = 0;
		}
	}
}
int main() {
	system("color FD");
	int n;
	cout << "请输入一个整数：";
	cin >> n;
	PrimeCircle(n);
	return 0;
}