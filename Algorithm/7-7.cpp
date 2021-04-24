#include<iostream>
using namespace std;
int Partition(int r[], int low, int high) {
	int i = low, j = high;
	while (i < j) {
		while (i < j && r[i] <= r[j]) {
			j--;
		}
		if (i < j) {
			int temp = r[i];
			r[i] = r[j];
			r[j] = temp;
			i++;
		}
		while (i < j && r[i] <= r[j]) {
			i++;
		}
		if (i < j) {
			int temp = r[i];
			r[i] = r[j];
			r[j] = temp;
			j--;
		}
	}
	return i;
}
int SelectMinK(int r[], int low, int high, int k) {
	int s;
	s = Partition(r, low, high);
	if (s == k) {
		return r[s];
	}
	if (s > k) {
		return SelectMinK(r, low, s - 1, k);
	}
	else {
		return SelectMinK(r, s + 1, high, k);
	}
}
int main() {
	system("color FD");
	int a[] = { -1,5,3,8,1,4,6,9,2,7 };
	cout << SelectMinK(a, 1, 9, 4) << endl;
	return 0;
}