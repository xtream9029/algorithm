/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

void DFS(int N,vector<int> graph[],bool check[],int start){//stack로 구현
	stack<int> s;
	bool scheck[N+1];
	fill(scheck,scheck+N+1,false);
	cout<<start<<" ";//처음 방문노드 출력
	s.push(start);
	scheck[start]=true;
	check[start]=true;
	int c=0;
	while(!s.empty()){
		for(int i=0;i<graph[start].size();i++){
			int next;
			if(scheck[graph[start][i]]==false && check[graph[start][i]]==false){
				next=graph[start][i];
				cout<<next<<" ";
				s.push(next);
				check[next]=true;//방문
				scheck[next]=true;//방문
				start=next;
				break;
			}
			for(int j=0;j<graph[start].size();j++){
				if(check[graph[start][j]]==false){
					c++;
					break;
				}
			}

			if(c==0) {
				next=s.top();
				s.pop();
			}

		}

		if(!s.empty()){
			for(int i=0;i<s.size();i++) s.pop();
		}
	}
}

void BFS(int N,vector<int> graph[],bool check[],int start){
	check[start]=true;//방문 체크
	bool qcheck[N+1];//큐에 들어왔던적 있는지 체크
	fill(qcheck,qcheck+N+1,false);
	queue<int> q;
	q.push(start);
	qcheck[start]=true;


	while(!q.empty()){
		int out=q.front();
		q.pop();
		cout<<out<<" ";

		for(int i=0;i<graph[out].size();i++){
			if(qcheck[graph[out][i]]==false){
				q.push(graph[out][i]);
				qcheck[graph[out][i]]=true;
				check[graph[out][i]]=true;
			}
		}

	}
}

int main(){
	int N,M,V;
	cin>>N>>M>>V;//first input
	vector<int> graph[N+1];
	bool check[N+1];

	fill(check,check+N+1,false);//bool 초기화

	for(int i=0;i<M;i++){//second input
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for(int i=0;i<N+1;i++){
		sort(graph[i].begin(),graph[i].end());
	}

	DFS(N,graph,check,V);
	cout<<endl;
	BFS(N,graph,check,V);

}*/
