/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <queue>
#include <utility>
using namespace std;

int miro[101][101]={0};
int check[101][101]={0};


struct XY{
	int x;
	int y;
};

int BFS(int i,int j,int n,int m){//bfs가 2차원 배열로 구성된 미로에서 어떻게 최단거리를 구해주는지는 이해못함
	XY data;
	data.x=i;
	data.y=j;

	queue<XY> q;
	check[i][j]=1;
	q.push(data);

	while(!q.empty()){//지금 내가 하고 있는것은 모든 노드를 탐색하면서 +1을 해주는것 당연히 최단거리 값이 나올 수가 없음

		XY next=q.front();

		if(next.x==n && next.y==m) return check[next.x][next.y];

		q.pop();

		if(miro[next.x][next.y+1]==1 && check[next.x][next.y+1]==0){//동
			XY k;
			k.x=next.x;
			k.y=next.y+1;
			check[k.x][k.y]=check[next.x][next.y]+1;
			q.push(k);
		}

		if(miro[next.x+1][next.y]==1 && check[next.x+1][next.y]==0){//남
			XY k;
			k.x=next.x+1;
			k.y=next.y;
			check[k.x][k.y]=check[next.x][next.y]+1;
			q.push(k);
		}

		if(miro[next.x][next.y-1]==1 && check[next.x][next.y-1]==0){//서
			XY k;
			k.x=next.x;
			k.y=next.y-1;
			check[k.x][k.y]=check[next.x][next.y]+1;
			q.push(k);
		}

		if(miro[next.x-1][next.y]==1 && check[next.x-1][next.y]==0){//북
			XY k;
			k.x=next.x-1;
			k.y=next.y;
			check[k.x][k.y]=check[next.x][next.y]+1;
			q.push(k);
		}
	}


}


int main(){//bfs가 어떻게 최단거리를 보장해주는지 모르겠음
	int n,m;
	cin>>n>>m;
	int output;

	for(int i=1;i<=n;i++){
		string s;
		cin>>s;

		for(int j=1;j<=m;j++){
			miro[i][j]=int(s[j-1])-48;
		}
	}

	output=BFS(1,1,n,m);

	for(int i=1;i<=n;i++){

		for(int j=1;j<=m;j++){
			cout<<check[i][j]<<" ";
		}

		cout<<endl;
	}

	cout<<"==========================="<<endl;


	cout<<output<<endl;

}*/
