#include<iostream>
using namespace std;
int BF(char S[], char T[]) {
	int index = 0;
	int i = 0, j = 0;
	while ((S[i] != '\0') && (T[j] != '\0')) {
		if (S[i] == T[j]) {
			i++;
			j++;
		}
		else {
			index++;
			i = index;
			j = 0;
		}
	}
	if (T[j] == '\0') {
		return index + 1;
	}
	else {
		return -1;
	}
}
int main() {
	system("color FD");
	char S[18] = { "ababcabccabcacbab" };
	char T[6] = { "abcac" };
	int index = BF(S, T);
	cout << "主串S为" << S << endl;
	cout << "模式T为" << T << endl;
	if (index != -1) {
		cout << "模式T在主串S中的位置为" << index << "！" << endl;
	}
	else {
		cout << "主串S中未找到模式T！" << endl;
	}
}