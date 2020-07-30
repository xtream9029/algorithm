/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int cnt=0;
int A[1010][1010];
bool check[1010][1010] = { false, };

struct dt {
	int r;
	int c;
};

bool isAllOneValue(int a,int b) {
	int dis = 0;

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			if (A[i][j] == 0){
				dis = 1;
				return false;
			}
		}
	}
	if (dis == 0) return true;


}

void BFS(int x,int y) {
	check[x][y] = true;
	queue<dt> q;
	dt d;
	d.r = x;
	d.c = y;

	while (!q.empty()) {
		dt next = q.front();
		q.pop();
		next.r = x;
		next.c = y;

		//상하좌우 값이 1일떄만 탐색이 가능함

		if((1<=next.r-1 && next.r-1<=n) && (1 <= next.c && next.c <= m)) {
			if (A[next.r - 1][next.c] == 0) {
				A[next.r - 1][next.c] = 1;
				dt e;
				e.r = next.r - 1;
				e.c = next.c;
				q.push(e);
			}
		}

		if ((1 <= next.r + 1 && next.r+1 <= n) && (1 <= next.c && next.c <= m)) {
			if (A[next.r + 1][next.c] ==0) {
				A[next.r + 1][next.c] = 1;
				dt e;
				e.r = next.r + 1;
				e.c = next.c;
				q.push(e);
			}
		}

		if ((1 <= next.r  && next.r <= n) && (1 <= next.c-1 && next.c-1 <= m)) {
			if (A[next.r ][next.c-1] == 0) {
				A[next.r][next.c - 1] = 1;
				dt e;
				e.r = next.r ;
				e.c = next.c-1;
				q.push(e);
			}
		}

		if ((1 <= next.r  && next.r <= n) && (1 <= next.c+1 && next.c+1 <= m)) {
			if (A[next.r][next.c+1] == 0) {
				A[next.r][next.c + 1] = 1;
				dt e;
				e.r = next.r ;
				e.c = next.c+1;
				q.push(e);
			}
		}
		cnt++;
	}//while

	return;
}

int main(){
	int dis = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> A[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (A[i][j] == 0) {
				dis = 1;
			}
		}
	}

	if (dis == 1) {//0이 한번이라도 나온경우 ,토마토가 익지 않은 개수가 1개라도 있는 경우
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (A[i][j] == 1){
					BFS(i, j);
				}
			}
		}
		 cout << cnt << endl;
	}

	else if (dis == 0) {//0이 한번도 나오지 않았을때
		cout << 0 << endl;
	}
}*/
