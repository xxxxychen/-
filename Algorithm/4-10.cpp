#include<iostream>
using namespace std;
int ClosestPoints(int x[], int y[], int n) {
	int index1, index2;
	int d, minDist = 1000;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
			if (d < minDist) {
				minDist = d;
				index1 = i;
				index2 = j;
			}
		}
	}
	cout << "最近的点对是：" << index1 << "和" << index2 << endl;
	return minDist;
}
int main() {
	system("color FD");
	int x[5] = { 1,2,3,4,5 };
	int y[5] = { 6,7,8,9,10 };
	ClosestPoints(x, y, 5);
	return 0;
}