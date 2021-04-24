#include<iostream>
using namespace std;
void InsertSort(int r[], int n) {
	for (int i = 1; i < n; i++) {
		int temp = r[i];
		int j = i - 1;
		while (j >= 0 && r[j] > temp) {
			r[j + 1] = r[j];
			j--;
		}
		r[j + 1] = temp;
	}
}
int main() {
	system("color FD");
	int r[6] = { 12, 15, 9, 20, 10, 6 };
	InsertSort(r, 6);
	for (int i = 0; i < sizeof(r) / sizeof(r[0]); i++) {
		cout << r[i] << " ";
	}
	cout << endl;
	return 0;
}