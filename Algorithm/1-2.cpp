#include<iostream>
using namespace std;
int CommFactor3(int m, int n) {
	while (n != 0) {
		if (m > n) {
			m = m - n;
		}
		else {
			n = n - m;
		}
	}
	return m;
}
int main1() {
	system("color FD");
	int a, b, c;
	cout << "请输入两个自然数：" << endl;
	cin >> a >> b;
	c = CommFactor3(a, b);
	cout << "这两个自然数的最大公约数为：" << c << endl;
	return 0;
}