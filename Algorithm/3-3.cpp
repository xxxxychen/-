#include<iostream>
using namespace std;
void GetNext(char T[], int next[]) {
	int i, j, len;
	next[0] = -1;
	for (j = 1; T[j] != '\0'; j++) {
		for (len = j - 1; len >= 1; len--) {
			for (i = 0; i < len; i++) {
				if (T[i] != T[j - len + 1]) {
					break;
				}
			}
			if (i == len) {
				next[j] = len;
				break;
			}
		}
		if (len < 1) {
			next[j] = 0;
		}
	}
}
int KMP(char S[], char T[]) {
	int i = 0, j = 0;
	int next[80];
	GetNext(T, next);
	while ((S[i] != '\0') && (T[j] != '\0')) {
		if (S[i] == T[j]) {
			i++;
			j++;
		}
		else {
			j = next[j];
			if (j == -1) {
				i++;
				j++;
			}
		}
	}
	if (T[j] == '\0') {
		return i - strlen(T) + 1;
	}
	else {
		return -1;
	}
}
int main() {
	system("color FD");
	char S[18] = { "ababcabccabcacbab" };
	char T[6] = { "abcac" };
	int index = KMP(S, T);
	cout << "主串S为" << S << endl;
	cout << "模式T为" << T << endl;
	if (index != -1) {
		cout << "模式T在主串S中的位置为" << index << "！" << endl;
	}
	else {
		cout << "主串S中未找到模式T！" << endl;
	}
}