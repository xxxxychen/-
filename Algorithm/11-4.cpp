#include<iostream>
#include<iomanip>
using namespace std;
#define N 5
double C[N + 1][N + 1];
int R[N + 1][N + 1];
double OptimalBST(double p[], int n) {
	int i, j, k, d, mink;
	double min, sum;
	for (i = 1; i <= n; i++) {
		C[i][i - 1] = 0;
		C[i][i] = p[i - 1];
		R[i][i] = i;
	}
	C[n + 1][n] = 0;
	for (d = 1; d < n; d++) {
		for (i = 1; i <= n - d; i++) {
			j = i + d;
			min = 1000;
			mink = i;
			sum = 0;
			for (k = i; k <= j; k++) {
				sum = sum + p[k - 1];
				if (C[i][k - 1] + C[k + 1][j] < min) {
					min = C[i][k - 1] + C[k + 1][j];
					mink = k;
				}
			}
			C[i][j] = min + sum;
			R[i][j] = mink;
		}
	}
	return C[1][n];
}
int main() {
	system("color FD");
	int i, j;
	double p[] = { 0.1,0.2,0.4,0.3 };
	cout << OptimalBST(p, 4) << endl;
	for (i = 1; i < 6; i++) {
		for (j = 0; j < 5; j++) {
			cout << setw(6) << C[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (i = 1; i < 6; i++) {
		for (j = 0; j < 5; j++) {
			cout << setw(4) << R[i][j];
		}
		cout << endl;
	}
	return 0;
}