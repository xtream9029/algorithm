/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int f, s, g, u, d;

int dis[1000001];
bool check[1000001];

void bfs(int start,int destination){
	check[start] = true;
	int dc = 0;
	queue<int> q;
	q.push(start);

	while (!q.empty()) {
		int next=q.front();
		q.pop();

		if (next == destination) {
			cout << dis[destination] << endl;
			dc = 1;
			return;
		}

		if (next+u >= 1 && next+u <=f) {//CASE U
			int x = next + u;
			if (check[x] == false) {
				check[x] = true;
				dis[x] = dis[next] + 1;
				q.push(x);
			}
		}

		if (next - d >= 1 && next - d  <= f) {//CASE U
			int x = next -d;
			if (check[x] == false) {
				check[x] = true;
				dis[x] = dis[next] + 1;
				q.push(x);
			}
		}
	}

	if (dc == 0) {
		cout << "use the stairs" << endl;
		return;
	}
}

int main() {
	cin >> f >> s >> g >> u >> d;

	fill(dis, dis + 1000001, 0);
	fill(check, check + 1000001, false);

	bfs(s, g);

}*/
