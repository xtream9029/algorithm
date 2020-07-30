/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define MAX 210000000

struct node {
	int a;
	int b;
};

struct cmp {
	bool operator()(node  x, node y){
		return x.b < y.b;//거리가 작은순으로 min heap에삽입
	}
};

int d[20001];
vector<node> graph[20001];
int n, m;

void dijkstra_bfs(int start){
	priority_queue <node, vector<node>, cmp > q;

	node ins;
	ins.a = start;
	ins.b = 0;
	q.push(ins);

	while (!q.empty()) {
		node cur = q.top();
		q.pop();

		int curNode = cur.a;
		int curDis = cur.b;

		for (int i = 0; i < graph[curNode].size(); i++) {
			int k = graph[curNode][i].a;
			if (d[k] > d[curNode] + graph[curNode][i].b) {
				d[k] = d[curNode] + graph[curNode][i].b;//비용 갱신
			}
		}

		//현재 노드에서 인접한 노드중 최소거리로 갈수 있는 노드를 우선순위 큐에 삽입 해야함
		int minDis = d[graph[curNode][0].b];
		int idx = -1;
		for (int i = 1; i < graph[curNode].size(); i++) {
			if (minDis > d[graph[curNode][i].b]) {
				idx = i;
			}
		}

		if (idx == -1){
			node k;
			k.a =graph[curNode][0].a;
			k.b= graph[curNode][0].b;
			q.push(k);
		}
		else {
			node k;
			k.a = graph[curNode][idx].a;
			k.b = graph[curNode][idx].b;
			q.push(k);
		}
	}
}

int main() {
	cin >> n>>m;
	int first;
	cin >> first;
	for (int i = 0; i < m; i++) {
		int s, d, c;
		cin >> s >> d >> c;
		node data;
		data.a = d;
		data.b = c;
		graph[s].push_back(data);
	}

	fill(d, d + 20001, MAX);

	dijkstra_bfs(first);

	for (int i = 1; i <= n; i++) {
		if (d[i] == MAX) {
			cout << "INF" << endl;
		}

		else {
			cout << d[i] << endl;
		}
	}

	return 0;

}*/
