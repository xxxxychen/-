#include<iostream>
using namespace std;
int BinSearch1(int r[], int n, int k) {
	int low = 0, high = n - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (k < r[mid]) {
			high = mid - 1;
		}
		else if (k > r[mid]) {
			low = high + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main() {
	system("color FD");
	int r[] = { 7,14,18,21,23,29,31,35,38 };
	int i = BinSearch1(r, 9, 18);
	cout << "在数组中的下标是：" << i << endl;
	return 0;
}