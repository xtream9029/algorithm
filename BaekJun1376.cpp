/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> graph[100001];
bool check[100001];

void dfs(int x){//계속해서 스택영역에 데이터들이 쌓일 거임
	int cnt = 0;

	if (check[x] == true) {
		return;
	}

	check[x] = true;
	cout << x << " ";

	for (int i = 0; i < graph[x].size(); i++) {//현재 노드에서 방문할수 있는 노드 개수를 카운팅 해줘야함
		int k = graph[x][i];
		if (check[k] == false) cnt++;
	}

	if (cnt % 2 == 0){//현재 방문하고 있는 노드에서 방문 할 수 있는
		int next;
		for (int i = 0; i < graph[x].size(); i++) {
			if (check[graph[x][i]]==false){
				//check[graph[x][i]] == true;
				next = graph[x][i];
				break;
			}
		}
		dfs(next);
	}

	else if (cnt % 2 == 1) {
		//이 경우에는 문제가 안됨
		int mid = graph[x][graph[x].size() / 2];
		if (check[mid] == false) {
			//check[mid] = true;
			dfs(mid);
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	fill(check, check + 100001, false);//false로 초기화

	//그래프 생성
	for (int i = 0; i < M; i++) {//간선의 개수만큼 반복
		int a, b;
		cin >>a>> b ;
		//양뱡향 그래프
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(1);//시작 노드는 1부터

	return 0;
}*/
