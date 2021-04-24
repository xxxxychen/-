#include<iostream>
using namespace std;
bool Comp(int a, int b) {
	if (a > b) {
		return true;
	}
	else {
		return false;
	}
}
char Game(char r[], int n) {
	int i = n;
	while (i > 1) {
		i = i / 2;
		for (int j = 0; j < i; j++) {
			if (Comp(r[j + i], r[j])) {
				r[j] = r[j + i];
			}
		}
	}
	return r[0];
}
int main() {
	system("color FD");
	char r[] = { 'm','a','s','o','n' };
	cout << Game(r, 5) << endl;
	return 0;
}