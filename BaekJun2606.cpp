/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int cnt=0;

void BFS(vector<int> graph[],bool check[],int v){
	queue<int> q;
	q.push(v);
	check[v]=true;
	cnt++;

	while(!q.empty()){
		for(int i=0;i<graph[v].size();i++){
			if(check[graph[v][i]]==false){
				q.push(graph[v][i]);
				check[graph[v][i]]=true;
				cnt++;
			}
		}
		q.pop();
		v=q.front();
	}

}

int main(){
	int n,m;
	vector<int> graph[n+1];
	bool check[n+1];
	fill(check,check+n+1,false);

	cin>>n;
	cin>>m;
	for(int i=0;i<m;i++){//graph
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	BFS(graph,check,1);

	cout<<cnt-1<<endl;
}*/
