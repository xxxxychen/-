#include<iostream>
using namespace std;
void SiftHeap(int r[], int k, int n) {
	int i, j, temp;
	i = k;
	j = 2 * i;
	while (j <= n) {
		if (j < n && r[j] < r[j + 1]) {
			j++;
		}
		if (r[i] > r[j]) {
			break;
		}
		else {
			temp = r[i];
			r[i] = r[j];
			r[j] = temp;
			i = j;
			j = 2 * i;
		}
	}
}
void HeapSort(int r[], int n) {
	int i, temp;
	for (i = n / 2; i >= 1; i--) {
		SiftHeap(r, i, n);
	}
	for (i = 0; i <= n - 1; i++) {
		temp = r[1];
		r[1] = r[n - i];
		r[n - i] = temp;
		SiftHeap(r, 1, n - i - 1);
	}
}
int main() {
	system("color FD");
	int r[] = { -1,47,33,35,2,18,71,26,13 };
	HeapSort(r, 8);
	for (int i = 1; i <= 8; i++) {
		cout << r[i] << " ";
	}
	return 0;
}