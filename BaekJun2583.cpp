/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m, k;
int A[105][105] = { 0, };
bool check[105][105] = { false, };
int cnt = 0;
int s = 0;
vector<int> S;

struct Pair {
	int x;
	int y;
};

void BFS(int i,int j){
	queue<Pair> q;
	Pair d;
	d.x = i;
	d.y = j;
	check[i][j] = true;

	q.push(d);

	Pair next;
	while (!q.empty()){
		next = q.front();
		q.pop();

		int nx = next.x;
		int ny = next.y;

		if ((nx>=0 && nx<n) && (ny >= 0 && ny < m)){
			//상 하 좌 우
			if ((nx-1>=0 && nx-1<n) && (ny>=0 && ny<m)) {//상
				if (A[nx - 1][ny] == 0 && check[nx - 1][ny] == false) {
					Pair pd;
					pd.x = nx- 1;
					pd.y = ny;
					q.push(pd);
					check[nx - 1][ny] = true;
					s++;
				}
			}

			if ((nx + 1 >= 0 && nx + 1 < n) && (ny >= 0 && ny < m)) {//하
				if (A[nx + 1][ny] == 0 && check[nx + 1][ny] == false) {
					Pair pd;
					pd.x = nx + 1;
					pd.y = ny;
					q.push(pd);
					check[nx + 1][ny] = true;
					s++;
				}
			}

			if ((nx>= 0 && nx< n) && (ny -1>= 0 && ny-1 < m)) {//좌
				if (A[nx][ny-1] == 0 && check[nx][ny-1] == false) {
					Pair pd;
					pd.x = nx;
					pd.y = ny-1;
					q.push(pd);
					check[nx][ny - 1] = true;
					s++;
				}
			}

			if ((nx >= 0 && nx < n) && (ny+1 >= 0 && ny+1 < m)) {//우
				if (A[nx][ny+1] == 0 && check[nx][ny+1] == false) {
					Pair pd;
					pd.x = nx;
					pd.y = ny+1;
					q.push(pd);
					check[nx][ny + 1] = true;
					s++;
				}
			}
		}
	}
	return;
}

int main() {
	cin >> n >> m >> k;

	for (int i = 0; i < k; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		for (int j = a; j < c;j++){//열
			for (int x=n-d;x<=(n-d)+(d-b-1);x++){//행
				if (A[x][j] == 0) {
					A[x][j] = 1;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			if (check[i][j] == false && A[i][j]==0){
				BFS(i, j);
				cnt++;//그래프의 개수 --이건 맞음
				S.push_back(s);
				s = 0;
			}
		}
	}

	cout << cnt << endl;
	for (int i = 0; i < S.size(); i++) {
		if (i != S.size() - 1) cout << S[i] << " ";
		else if (i==S.size()-1) cout << S[i];
	}


	return 0;
}*/
