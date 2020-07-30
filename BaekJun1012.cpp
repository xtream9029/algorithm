/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int A[55][55] = { 0, };
bool check[55][55] = { false, };

struct dt {
	int r;
	int c;
};

void BFS(int x,int y,int a,int b) {
	check[x][y] = true;//현재 위치 방문
	queue<dt> q;
	dt d;
	d.r = x;
	d.c = y;
	q.push(d);

	while (!q.empty()) {
		dt next = q.front();
		q.pop();

		//상 하 좌 우 탐색 가능
		if ((0 <= next.r - 1 && next.r - 1 < a) && (0 <= next.c && next.c < b)) {
			if (A[next.r - 1][next.c] == 1 && check[next.r - 1][next.c] == false) {//상
				check[next.r - 1][next.c] = true;
				dt e;
				e.r = next.r - 1;
				e.c = next.c;
				q.push(e);
			}
		}


		if ((0 <= next.r + 1 && next.r +1 < a) && (0 <= next.c && next.c < b)) {
			if (A[next.r + 1][next.c] == 1 && check[next.r + 1][next.c] == false) {//하
				check[next.r + 1][next.c] = true;
				dt e;
				e.r = next.r + 1;
				e.c = next.c;
				q.push(e);
			}
		}


		if ((0 <= next.r  && next.r  < a) && (0 <= next.c-1 && next.c-1 < b)) {
			if (A[next.r][next.c - 1] == 1 && check[next.r][next.c - 1] == false) {//좌
				check[next.r][next.c - 1] = true;
				dt e;
				e.r = next.r;
				e.c = next.c - 1;
				q.push(e);
			}
		}

		if ((0 <= next.r && next.r < a) && (0 <= next.c + 1 && next.c + 1 < b)) {
			if (A[next.r][next.c + 1] == 1 && check[next.r][next.c + 1] == false) {//우
				check[next.r][next.c + 1] = true;
				dt e;
				e.r = next.r;
				e.c = next.c + 1;
				q.push(e);
			}
		}
	}//while

	return;
}


int main() {
	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		int cnt = 0;//그래프의 개수
		int n, m, k;
		int a, b;
		cin >> n >> m >> k;

		for (int j = 0; j < k; j++) {
			cin >> a >> b;
			A[a][b] = 1;
		}

		for (int j = 0; j < n; j++) {
			for (int t = 0; t < m; t++){
				if (A[j][t] == 1 && check[j][t]==false) {
					BFS(j, t,n,m);//하나의 그래프 탐색이 끝남
					cnt++;//그래프의 개수
				}
			}
		}

		for (int j = 0; j < 55; j++) {
			for (int t = 0; t < 55; t++) {
				check[j][t] = false;
				A[j][t] = 0;
			}
		}

		cout << cnt << endl;
	}
}*/
