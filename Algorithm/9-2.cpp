#include<iostream>
using namespace std;
const int n = 5;
int DataTower(int d[n][n]) {
	int maxAdd[n][n] = { 0 }, path[n][n] = { 0 };
	int i, j;
	for (j = 0; j < n; j++) {
		maxAdd[n - 1][j] = d[n - 1][j];
	}
	for (i = n - 2; i >= 0; i--) {
		for (j = 0; j <= i; j++) {
			if (maxAdd[i + 1][j] > maxAdd[i + 1][j + 1]) {
				maxAdd[i][j] = d[i][j] + maxAdd[i + 1][j];
				path[i][j] = j;
			}
			else {
				maxAdd[i][j] = d[i][j] + maxAdd[i + 1][j + 1];
				path[i][j] = j + 1;
			}
		}
	}
	printf("Â·¾¶Îª£º%d", d[0][0]);
	j = path[0][0];
	for (i = 1; i < n; i++) {
		printf("-->%d", d[i][j]);
		j = path[i][j];
	}
	return maxAdd[0][0];
}
int main() {
	system("color FD");
	int d[5][5] = { {6},{16,11},{7,10,11},{10,8,11,6},{5,13,10,15,7} };
	DataTower(d);
	return 0;
}