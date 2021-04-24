#include<iostream>
using namespace std;
int main() {
	system("color FD");
	int a[9] = { 5,6,2,8,4,3,7,4,8 };
	int sum = 0;
	for (int i = 0; i < 9; ++i) {
		if (i % 2 == 0) {
			sum += a[i];
		}
		else {
			sum += 10 * a[i];
		}
	}
	if (sum % 11 == 0) {
		cout << "562843748能被11整除！" << endl;
	}
	else {
		cout << "562843748不能被11整除！" << endl;
	}
	return 0;
}