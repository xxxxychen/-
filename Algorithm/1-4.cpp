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
	cout << "������һ����Ȼ����" << endl;
	cin >> a;
	b = perfect(a);
	if (a == b) {
		cout << "�����Ȼ������������" << endl;
	}
	else {
		cout << "�����Ȼ��������������" << endl;
	}
	return 0;
}