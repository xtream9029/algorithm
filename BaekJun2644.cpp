/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue> //for BFS
using namespace std;


//전역변수를 선언하고 함수를 이용하는 방식을 한번 생각해볼것

int main(){
	queue<int> q;
	int n;
	cin>>n;


	bool check[n+1];
	int dis[n+1];
	fill(dis,dis+n+1,0);
	fill(check,check+n+1,false);

	vector<int> graph[n+1];

	int start,end;
	cin>>start>>end;

	int n2;
	cin>>n2;

	for(int i=0;i<n2;i++){//그래프 생성
		int a,b;
		cin>>a>>b;

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for(int i=1;i<=n;i++){
		sort(graph[i].begin(),graph[i].end());
	}


	q.push(start);
	check[start]=true;


	while(!q.empty()){
		int next=q.front();

		q.pop();

		if(next==end){
			cout<<dis[next]<<endl;
			return 0;
		}

		for(int i=0;i<graph[next].size();i++){
			if(check[graph[next][i]]==false){
				check[graph[next][i]]=true;
				dis[graph[next][i]]=dis[next]+1;
				q.push(graph[next][i]);
			}
		}

	}

	cout<<-1<<endl;

	return 0;
}*/
