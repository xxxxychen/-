#include<iostream>
using namespace std;
int IncreaseOrder(int a[], int n) {
	int i, j, k, index;
	int L[10], x[10][10];
	for (i = 0; i < n; i++) {
		L[i] = 1;
		x[i][0] = a[i];
	}
	for (i = 1; i < n; i++) {
		int max = 1;
		for (j = i - 1; j >= 0; j--) {
			if ((a[j] < a[i]) && (max < L[j] + 1)) {
				max = L[j] + 1;
				L[j] = max;
				for (k = 0; k < max - 1; k++) {
					x[i][k] = x[j][k];
				}
				x[i][max - 1] = a[i];
			}
		}
	}
	for (index = 0, i = 1; i < n; i++) {
		if (L[index] < L[i]) {
			index = i;
		}
	}
	cout << "������������ǣ�";
	for (i = 0; i < L[index]; i++) {
		cout << x[index][i] << " ";
	}
	return L[index];
}
int main() {
	system("color FD");
	int a[] = { 6,2,5,7,6,7,3,5 };
	cout << IncreaseOrder(a, 8) << endl;
	return 0;
}