/*#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt=0;//최종 구하려는 답
bool check[100011];
int dis[100011]; //-->답을 내는 방식

void BFS(int n,int k){//n은 시작노드 k는 목적지노드
	queue<int> q;
	check[n]=true;
	q.push(n);

	while(!q.empty()){//bfs는 큐에서 나오는 순서가 방문 순서가 아님!

		int next=q.front();

		q.pop();

		if(next==k){
			cnt=dis[next];
			break;
		}

		if(next-1<=100000 && next-1>=1 && check[next-1]==false){
			check[next-1]=true;
			q.push(next-1);
			dis[next-1]=dis[next]+1;
		}

		if(next+1<=100000 && next+1>=1 && check[next+1]==false){
			check[next+1]=true;
			q.push(next+1);
			dis[next+1]=dis[next]+1;
		}

		if(2*next<=100000 && 2*next>=1 && check[2*next]==false){
			check[2*next]=true;
			q.push(2*next);
			dis[2*next]=dis[next]+1;
		}
	}

	return ;
}

int main(){
	int n;
	int k;
	cin>>n>>k;

	fill(check,check+100001,false);
	fill(dis,dis+100001,0);

	BFS(n,k);

	cout<<cnt<<endl;
}*/
