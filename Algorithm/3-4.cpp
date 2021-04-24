#include<iostream>
using namespace std;
int main() {
	system("color FD");
	int a, b, c;
	int flag1, flag2;
	cout << "请输入一个真分数的分子：" << endl;
	cin >> a;
	cout << "请输入这个真分数的分母：" << endl;
	cin >> b;
	c = b % a;
	flag1 = a;
	flag2 = b;
	while (c != 0) {
		flag2 = flag1;
		flag1 = c;
		c = flag2 % flag1;
	}
	cout << "这个真分数为：" << a << "/" << b << endl;
	cout << "这个真分数化简的最简分数为：" << (a / flag1) << "/" << (b / flag1) << endl;
	return 0;
}