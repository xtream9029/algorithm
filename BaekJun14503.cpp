/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt = 0;
int T[52][52];
bool C[52][52] = { false, };
int n, m;
int r, c, d;

bool inSpace(int r, int c) {//범위 체크:현재 위치가 유효범위 안에 들어와 있는지
	return (r >= 0 && r <= n - 1) && (c >= 0 && c <= m - 1);
}

bool isFourCheck(int r, int c) {
	return ((C[r][c - 1] == true) && (C[r][c + 1] == true) && (C[r - 1][c] == true) && (C[r + 1][c] == 1));
}

//일단은 런타임 에러가 나지는 않고 있음
int DFS(int r, int c, int d) {
	//현재 위치를 청소한다
	if (C[r][c] == false && T[r][c]==0){
		C[r][c] = true;
		cnt++;
	}

	if (d == 0) {//현재 북쪽방향
		if (inSpace(r, c - 1) && inSpace(r, c + 1) && inSpace(r + 1, c) && inSpace(r - 1, c)) {
			if (((isFourCheck(r, c)) || T[r][c-1]==1)){//바닥 조건 포함
				if ((T[r + 1][c] == 1)) return cnt;//d 조건
				else return DFS(r+1,c,0);//c 조건
			}

			else if (C[r][c - 1] == false && T[r][c - 1] == 0) {//a 조건
				return DFS(r, c - 1, 3);
			}

			else if (C[r][c-1]==true || T[r][c-1]==1){//b 조건
				return DFS(r, c, 3);
			}
		}
	}

	else if (d == 1) {//현재 동쪽방향
		if (inSpace(r, c - 1) && inSpace(r, c + 1) && inSpace(r + 1, c) && inSpace(r - 1, c)) {
			if (((isFourCheck(r, c)) || T[r-1][c] == 1)) {//바닥 조건 포함
				if ((T[r][c-1] == 1)) return cnt;//d 조건
				else return DFS(r, c-1, 1);//c 조건
			}

			else if (C[r-1][c] == false && T[r-1][c] == 0) {//a 조건
				return DFS(r-1, c, 0);
			}

			else if (C[r-1][c] == true || T[r-1][c] == 1) {//b 조건
				return DFS(r, c, 0);
			}
		}
	}

	else if (d == 2) {//현재 남쪽방향
		if (inSpace(r, c - 1) && inSpace(r, c + 1) && inSpace(r + 1, c) && inSpace(r - 1, c)) {
			if (((isFourCheck(r, c)) || T[r][c+1] == 1)) {//바닥 조건 포함
				if ((T[r - 1][c] == 1)) return cnt;//d 조건
				else return DFS(r - 1, c, 2);//c 조건
			}

			else if (C[r][c + 1] == false && T[r][c + 1] == 0) {//a 조건
				return DFS(r, c+1, 1);
			}

			else if (C[r][c + 1] == true || T[r][c + 1] == 1) {//b 조건
				return DFS(r, c, 1);
			}
		}
	}

	else if (d == 3) {//현재 서쪽방향
		if (inSpace(r, c - 1) && inSpace(r, c + 1) && inSpace(r + 1, c) && inSpace(r - 1, c)) {
			if (((isFourCheck(r, c)) || T[r+1][c] == 1)) {//바닥 조건 포함
				if ((T[r][c+1] == 1)) return cnt;//d 조건
				else return DFS(r, c+1, 3);//c 조건
			}

			else if (C[r+1][c] == false && T[r+1][c] == 0) {//a 조건
				return DFS(r+1, c, 2);
			}

			else if (C[r+1][c] == true || T[r+1][c] == 1) {//b 조건
				return DFS(r, c, 2);
			}
		}
	}
}


int main() {
	cin >> n >> m;
	cin >> r >> c >> d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> T[i][j];
		}
	}

	int sol=DFS(r,c,d);

	cout << sol << endl;

	return 0;

}*/
