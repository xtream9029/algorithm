/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m, k, s;
vector<int> graph[100001];
vector<int> dangerSet;
bool check[100001] = { false, };
int dis[100001];
int cost = 0;

void bfs(int i){
	check[i] = true;
	queue<int> q;

	q.push(i);

	while (!q.empty()) {
		int next = q.front();
		q.pop();
		for (int x = 0; x < graph[next].size(); x++){
			int t = graph[next][x];
			if (check[t] == false) {
				check[t] = true;
				q.push(t);
				dis[t] += 1;
			}
		}
	}
}

void dangerFind(int i){
	check[i] = true;
	queue<int> q;

	q.push(i);

	while (!q.empty()) {
		int next = q.front();
		q.pop();
		for (int x = 0; x < graph[next].size(); x++){
			int t = graph[next][x];
			if (check[t] == false) {
				check[t] = true;
				q.push(t);
				dis[t] = dis[next] + 1;
			}
		}
	}
}

int main() {
	cin >> n >> m >> k >> s;

	int NotTakeOver, TakeOver;
	cin >> NotTakeOver >> TakeOver;

	int dangerNodeNum;
	cin >> dangerNodeNum;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	fill(dis, dis + 100001, 0);
	dangerFind(dangerNodeNum);
	fill(check, check + n, false);


	for (int i = 1; i <=n; i++) {
		if (dis[i] <= s && i!= dangerNodeNum) {
			dangerSet.push_back(i);
		}
	}

	return 0;
}*/
