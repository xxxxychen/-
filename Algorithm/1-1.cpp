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
	cout << "������������Ȼ����" << endl;
	cin >> a >> b;
	c = CommFactor2(a, b);
	cout << "��������Ȼ�������Լ��Ϊ��" << c << endl;
	return 0;
}