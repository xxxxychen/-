#include<iostream>
using namespace std;
int main() {
	system("color FD");
	int i, j, k, l;
	for (i = 1; i <= 711; i++) {
		for (j = 1; j <= 711; j++) {
			for (k = 1; k <= 711; k++) {
				l = 711 - i - j - k;
				if (i * j * k * l == 711000000) {
					cout << "这四样东西的价格分别为：" << i / 100.0 << "、" << j / 100.0 << "、" << k / 100.0 << "、" << l / 100.0 << endl;
					return 0;
				}
			}
		}
	}
	return 0;
}