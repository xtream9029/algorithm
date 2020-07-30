/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

//이 문제는 dfs를 써야함

int A[10001][10001]={0};
vector<int> dis;//모든 노드의 경우를 입력 거리를 푸시
int D=0;


void DFS(vector<int> graph[],int i,int j){
	//j는 도착지 노드 번호
	for(int k=0;k<graph[i].size();k++){
		if(graph[i][k]==j){
			D+=A[i][j];
			dis.push_back(D);
			return ;
		}

		D+=A[i][graph[i][k]];
		DFS(graph,graph[i][k],j);
	}


}

int main(){
	int n;
	cin>>n;

	vector<int> *v=new vector<int>[n+1];//graph

	for(int i=0;i<n-1;i++){//두번째줄부터 n번째 줄까지 입력이 들어옴
		int a,b,c;
		cin>>a>>b>>c;
		A[a][b]=c;
		v[a].push_back(b);
	}


	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i>=j) continue;

			else{
				DFS(v,i,j);
				D=0;
			}
		}
	}

	sort(dis.begin(),dis.end());

	for(int i=0;i<dis.size();i++){
		cout<<dis[i]<<endl;
	}

}*/
