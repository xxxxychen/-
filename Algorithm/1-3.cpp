#include<iostream>
using namespace std;
int separate(int b[], int low, int high) {
	int value = b[low];
	b[0] = b[low];
	while (low < high) {
		while (low < high && b[high] >= value) {
			--high;
		}
		b[low] = b[high];
		while (low < high && b[low] <= value) {
			++low;
		}
		b[high] = b[low];
	}
	b[low] = b[0];
	return low;
}
void quicksort1(int l[], int low, int high) {
	int value;
	if (low < high) {
		value = separate(l, low, high);
		quicksort1(l, low, value - 1);
		quicksort1(l, value + 1, high);
	}
}
void quicksort2(int l[], int n) {
	quicksort1(l, 1, n);
}
int main() {
	system("color FD");
	int a[12] = { 0,2,32,43,23,45,36,57,14,27,39 };
	int value = 0;
	cout << "这个自然数组为：" << endl;
	for (int i = 1; i < 11; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	quicksort2(a, 11);
	for (int j = 0; j != 9; ++j) {
		if ((a[j + 1] - a[j]) <= (a[j + 2] - a[j + 1])) {
			value = a[j + 1] - a[j];
		}
		else {
			value = a[j + 2] - a[j + 1];
		}
	}
	cout << "这个自然数组中相差最小的两个元素的差为：" << value << endl;
	return 0;
}