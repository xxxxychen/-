#include<iostream>
using namespace std;
int main() {
	system("color FD");
	int a, b, c;
	int flag1, flag2;
	cout << "������һ��������ķ��ӣ�" << endl;
	cin >> a;
	cout << "���������������ķ�ĸ��" << endl;
	cin >> b;
	c = b % a;
	flag1 = a;
	flag2 = b;
	while (c != 0) {
		flag2 = flag1;
		flag1 = c;
		c = flag2 % flag1;
	}
	cout << "��������Ϊ��" << a << "/" << b << endl;
	cout << "�������������������Ϊ��" << (a / flag1) << "/" << (b / flag1) << endl;
	return 0;
}