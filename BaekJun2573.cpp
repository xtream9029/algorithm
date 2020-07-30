/*#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int A[303][303];
bool check[303][303];

struct Pair{
	int x;
	int y;
};

void bfs(int i,int j){
	check[i][j] = true;
	Pair p;
	p.x = i;
	p.y = j;
	int t;
	queue<Pair> q;
	q.push(p);

	while (!q.empty()) {
		Pair next = q.front();
		q.pop();
		int nx = next.x;
		int ny = next.y;
		t=0;

		if (A[nx - 1][ny] != 0 && check[nx - 1][ny] == false) {
			check[nx - 1][ny] = true;
			Pair data;
			data.x = nx - 1;
			data.y = ny;
			q.push(data);
			t++;
		}

		if (A[nx + 1][ny] != 0 && check[nx + 1][ny] == false) {
			check[nx + 1][ny] = true;
			Pair data;
			data.x = nx + 1;
			data.y = ny;
			q.push(data);
			t++;
		}

		if (A[nx][ny-1] != 0 && check[nx][ny-1] == false) {
			check[nx][ny-1] = true;
			Pair data;
			data.x = nx;
			data.y = ny-1;
			q.push(data);
			t++;
		}

		if (A[nx][ny+1] != 0 && check[nx][ny+1] == false) {
			check[nx][ny+1] = true;
			Pair data;
			data.x = nx;
			data.y = ny+1;
			q.push(data);
			t++;
		}

		if (A[nx][ny] - t <= 0) A[nx][ny] = 0;
		else A[nx][ny] -= t;
	}
}

bool allZero(){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			if (A[i][j] !=0) return false;
		}
	}
	return true;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	int cnt = 0;
	int year = 0;
	int allzero = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			check[i][j] = false;
		}
	}

	while (1){
		if (allZero()) {
			allzero = 1;
			break;
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++) {
				if (A[i][j] != 0 && check[i][j] == false) {
					bfs(i, j);
					cnt++;
				}
			}
		}

		if (cnt > 1) {
			cout << year << endl;
			return 0;
		}
		else cnt = 0;

		year++;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (check[i][j] == true) check[i][j] = false;
			}
		}
	}//while

	if (allzero == 1) cout << 0 << endl;

	return 0;

}*/
