#include<iostream>
using namespace std;
void Merge(int r[], int r1[], int s, int m, int t) {
	int i = s, j = m + 1, k = s;
	while (i <= m && j <= t) {
		if (r[i] <= r[j]) {
			r1[k++] = r[i++];
		}
		else {
			r1[k++] = r[j++];
		}
	}
	while (i <= m) {
		r1[k++] = r[i++];
	}
	while (j <= t) {
		r1[k++] = r[j++];
	}
}
void MergeSort(int r[], int s, int t) {
	int m, r1[1000];
	if (s == t) {
		return;
	}
	else {
		m = (s + t) / 2;
		MergeSort(r, s, m);
		MergeSort(r, m + 1, t);
		Merge(r, r1, s, m, t);
		for (int i = s; i <= t; i++) {
			r[i] = r1[i];
		}
	}
}
int main() {
	system("color FD");
	int r[8] = { 8,3,2,6,7,1,5,4 };
	MergeSort(r, 0, 7);
	cout << "�鲢����Ľ��Ϊ��";
	for (int i = 0; i < 8; i++) {
		cout << r[i];
	}
	cout << endl;
	return 0;
}