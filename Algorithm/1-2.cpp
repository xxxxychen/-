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
	cout << "������������Ȼ����" << endl;
	cin >> a >> b;
	c = CommFactor3(a, b);
	cout << "��������Ȼ�������Լ��Ϊ��" << c << endl;
	return 0;
}