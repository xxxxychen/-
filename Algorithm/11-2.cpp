#include<iostream>
using namespace std;
#define C 10
int V[6][11];
int x[6];
int KnapSack(int n, int w[], int v[]) {
	int i, j;
	for (i = 0; i <= n; i++) {
		V[i][0] = 0;
	}
	for (j = 0; j <= C; j++) {
		V[0][j] = 0;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= C; j++) {
			if (j < w[i]) {
				V[i][j] = V[i - 1][j];
			}
			else {
				V[i][j] = max(V[i - 1][j], V[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	for (j = C, i = n; i > 0; i--) {
		if (V[i][j] > V[i - 1][j]) {
			x[i] = 1;
			j = j - w[i];
		}
		else {
			x[i] = 0;
		}
	}
	return V[n][C];
}
int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
int main() {
	system("color FD");
	int w[] = { -1,2,2,6,5,4 };
	int v[] = { -1,6,3,5,4,6 };
	cout << "背包获得的最大价值是：" << KnapSack(5, w, v) << endl;
	cout << "装入背包的物品是：";
	for (int i = 1; i <= 5; i++) {
		if (x[i] == 1) {
			cout << "物品" << i << " ";
		}
	}
	return 0;
}