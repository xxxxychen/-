#include<iostream>
using namespace std;
const int n = 5;
int arc[100][100];
int color[100];
int Ok(int i) {
	for (int j = 0; j < n; j++) {
		if (arc[i][j] == 1 && color[i] == color[j]) {
			return 0;
		}
		return 1;
	}
}
void ColorGraph(){
	int k = 0;
	int flag = 1;
	while (flag == 1){
		k++;
		flag = 0;
		for (int i = 0; i < n; i++){
			if (color[i] == 0){
				color[i] = k;
				if (!Ok(i)){
					color[i] = 0;
					flag = 1;
				}
			}
		}
	}
}
int main() {
	system("color FD");
	int m, i, j, a;
	cout << "输入颜色的个数：";
	cin >> m;
	cout << "输入无向图点和边的关系：" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> a;
			arc[i][j] = a;
		}
	}
	ColorGraph();
	cout << "Out color is:";
	for (i = 0; i < n; i++) {
		cout << color[i] << " ";
	}
	cout << endl;
	return 0;
}