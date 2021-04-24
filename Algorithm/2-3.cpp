#include<iostream>
#include<cmath>
using namespace std;
int main() {
	system("color FD");
	double sum = 0;
	for (int i = 1; i <= 64; i++) {
		sum += pow(2, i - 1);
	}
	cout << sum << endl;
}