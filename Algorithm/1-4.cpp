#include<iostream>
using namespace std;
int perfect(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}
int main3() {
	system("color FD");
	int a, b;
	cout << "请输入一个自然数：" << endl;
	cin >> a;
	b = perfect(a);
	if (a == b) {
		cout << "这个自然数是完美数！" << endl;
	}
	else {
		cout << "这个自然数不是完美数！" << endl;
	}
	return 0;
}