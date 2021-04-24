#include<iostream>
using namespace std;
int CommFactor2(int m, int n) {
	int r = m % n;
	while (r != 0) {
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}
int main() {
	system("color FD");
	int a, b, c;
	cout << "请输入两个自然数：" << endl;
	cin >> a >> b;
	c = CommFactor2(a, b);
	cout << "这两个自然数的最大公约数为：" << c << endl;
	return 0;
}