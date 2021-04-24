#include<iostream>
using namespace std;
int SearchMid(int A[], int B[], int n) {
	int s1 = 0, e1 = n - 1, s2 = 0, e2 = n - 1;
	int mid1, mid2;
	while (s1 < e1 && s2 < e2) {
		mid1 = (s1 + e1) / 2;
		mid2 = (s2 + e2) / 2;
		if (A[mid1] == B[mid2]) {
			return A[mid1];
		}
		if (A[mid1] < B[mid2]) {
			if ((s1 + e1) % 2 == 0) {
				s1 = mid1;
			}
			else {
				s1 = mid1 + 1;
			}
			e2 = mid2;
		}
		else {
			if ((s2 + e2) % 2 == 0) {
				s2 = mid2 + 1;
			}
			else {
				s2 = mid2 + 1;
			}
			e1 = mid1;
		}
	}
	if (A[s1] < B[s2]) {
		return A[s1];
	}
	else {
		return B[s2];
	}
}
int main() {
	system("color FD");
	int A[6] = { 6,13,15,16,17,25 };
	int B[6] = { 4,14,18,22,23,26 };
	cout << "����S1Ϊ{6��13��15��16��17��25}" << endl;
	cout << "����S2Ϊ{4��14��18��22��23��26}" << endl;
	cout << "����S1��S2����λ��Ϊ" << SearchMid(A, B, 6) << endl;
	return 0;
}