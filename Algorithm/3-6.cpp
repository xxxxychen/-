#include<iostream>
using namespace std;
int main() {
	system("color FD");
	int x, y;
	int value = 0;
	int maxvalue = 0;
	for (int i = 0; i <= 4; ++i) {
		for (int j = 0; (i + j <= 4) && (i + 3 * j <= 6); ++j) {
			value = 3 * i + 5 * j;
		}
		if (value >= maxvalue) {
			maxvalue = value;
		}
	}
	cout << "Ŀ�꺯��3x+5yȡ�õļ���ֵΪ��" << maxvalue << endl;
	return 0;
}