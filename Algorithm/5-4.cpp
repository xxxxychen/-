#include<iostream>
using namespace std;
int Partition(int r[], int first, int end) {
	int i = first, j = end;
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
void QuickSort(int r[], int first, int end) {
	int pivot;
	if (first < end) {
		pivot = Partition(r, first, end);
		QuickSort(r, first, pivot - 1);
		QuickSort(r, pivot + 1, end);
	}
}
int main() {
	system("color FD");
	int r[8] = { 8,3,2,6,7,1,5,4 };
	QuickSort(r, 0, 7);
	cout << "快速排序的结果为：";
	for (int i = 0; i < 8; i++) {
		cout << r[i];
	}
	cout << endl;
	return 0;
}