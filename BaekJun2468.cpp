/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int A[103][103];
bool check[103][103] = { false, };
int n;
int cnt=0;
vector<int> v;

struct Pair {
	int x;
	int y;
};

void allFalse() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (check[i][j] == true) check[i][j] = false;
		}
	}
}

void BFS(int h,int i,int j){
	check[i][j] = true;
	queue<Pair> q;
	Pair d;
	d.x = i;
	d.y = j;

	q.push(d);

	while (!q.empty()) {
		Pair next = q.front();
		q.pop();

		//상 하 좌 우 탐색
		if ((next.x-1 >= 0 && next.x -1< n) && (next.y>= 0 && next.y < n)){//상
			Pair k;
			k.x = next.x - 1;
			k.y = next.y;
			if (check[k.x][k.y] == false && A[k.x][k.y] > h) {
				check[k.x][k.y] = true;
				q.push(k);
			}
		}

		if ((next.x+1 >= 0 && next.x+1 < n) && (next.y >= 0 && next.y < n)) {//하
			Pair k;
			k.x = next.x + 1;
			k.y = next.y;
			if (check[k.x][k.y] == false && A[k.x][k.y] > h) {
				check[k.x][k.y] = true;
				q.push(k);
			}
		}

		if ((next.x >= 0 && next.x < n) && (next.y-1 >= 0 && next.y-1 < n)) {//좌
			Pair k;
			k.x = next.x;
			k.y = next.y-1;
			if (check[k.x][k.y] == false && A[k.x][k.y] > h) {
				check[k.x][k.y] = true;
				q.push(k);
			}
		}

		if ((next.x >= 0 && next.x < n) && (next.y+1 >= 0 && next.y+1 < n)) {//우
			Pair k;
			k.x = next.x;
			k.y = next.y+1;
			if (check[k.x][k.y] == false && A[k.x][k.y] > h) {
				check[k.x][k.y] = true;
				q.push(k);
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> A[i][j];
		}
	}

	for (int h = 1; h <= 100; h++) {
		//높이가 1부터 100까지이므로 모든 경우를 다해봐야됨
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++){
				if (check[i][j] == false && A[i][j]>h) {
					BFS(h, i, j);
					cnt++;//그래프의 개수 카운팅
				}
			}
		}
		//하나의 높이에서 그래프 탐색이 전부 끝남
		//다른 높이에서 다시 탐색해야 하므로
		if (cnt != 0) {
			v.push_back(cnt);
			allFalse();
			cnt = 0;
		}
	}

	if (!v.empty()) {
		sort(v.begin(), v.end());
		cout << v[v.size() - 1] << endl;
	}

	else cout << 0 << endl;//안전 영역이 없는경우

	return 0;

}*/
