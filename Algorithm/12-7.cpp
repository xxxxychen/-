#include<iostream>
using namespace std;
const int n = 3;
int KnapSack(int w[], int v[], int n, int C){
	int i;
	double x[10] = { 0 };
	int maxValue = 0;
	for (i = 0; w[i] < C; i++){
		x[i] = 1;
		maxValue += v[i];
		C = C - w[i];
	}
	x[i] = (double)C / w[i];
	maxValue += x[i] * v[i];
	return maxValue;
}
int main() {
	system("color FD");
	int w[] = { 10,30,20 };
	int v[] = { 50,120,60 };
	int C = 50;
	int value = KnapSack(w, v, 3, C);
	cout << "背包获得的最大价值是：" << value << endl;
	return 0;
}