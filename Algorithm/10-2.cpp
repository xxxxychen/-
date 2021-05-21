#include<iostream>
#include<iomanip>
using namespace std;
const int n = 3;
void Floyd(int arc[n][n], int dist[n][n]) {
	int i, j, k;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			dist[i][j] = arc[i][j];
		}
	}
	for (k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (dist[i][k] + dist[k][j] < dist[i][j]) {
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
}
int main() {
	system("color FD");
	int i, j;
	int arc[3][3] = { 0,5,12,7,0,3,4,999,0 };
	int dist[3][3];
	Floyd(arc, dist);
	cout << setw(4);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << dist[i][j] << setw(4);
		}
		cout << endl;
	}
	return 0;
}