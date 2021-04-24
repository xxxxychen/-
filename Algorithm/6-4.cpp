#include<iostream>
#include<iomanip>
using namespace std;
int board[100][100];
int t = 0;
void ChessBoard(int tr, int tc, int dr, int dc, int size){
	int s, t1;
	if (size == 1){
		return;
	}
	t1 = ++t;
	s = size / 2;
	if (dr < tr + s&&dc < tc + s){
		ChessBoard(tr, tc, dr, dc, s);
	}
	else{
		board[tr + s - 1][tc + s - 1] = t1;
		ChessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
	}
	if (dr < tr + s&&dc >= tc + s){
		ChessBoard(tr, tc + s, dr, dc, s);
	}
	else{
		board[tr + s - 1][tc + s] = t1;
		ChessBoard(tr, tc + s, tr + s - 1, tc + s, s);
	}
	if (dr >= tr + s&&dc < tc + s){
		ChessBoard(tr + s, tc, dr, dc, s);
	}
	else{
		board[tr + s][tc + s - 1] = t1;
		ChessBoard(tr + s, tc, tr + s, tc + s - 1, s);
	}
	if (dr >= tr + s&&dc >= tc + s){
		ChessBoard(tr + s, tc + s, dr, dc, s);
	}
	else{
		board[tr + s][tc + s] = t1;
		ChessBoard(tr + s, tc + s, tr + s, tc + s, s);
	}
}
int main(){
	system("color FD");
	int wholeSize;
	int specialPointX, specialPointY;
	cout << "Input size:";
	cin >> wholeSize;
	cout << "Input special point X and Y:";
	cin >> specialPointX >> specialPointY;
	ChessBoard(0, 0, specialPointX, specialPointY, wholeSize);
	for (int i = 0; i < wholeSize; i++){
		for (int j = 0; j < wholeSize; j++){
			cout << setw(4) << board[i][j];
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}