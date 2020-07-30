/*#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt=0;
bool check[100001];
int dis[100001];
int x=0;

void BFS(int n,int k){
	queue<int> q;
	check[n]=true;
	q.push(n);

	while(!q.empty()){
		int next=q.front();

		q.pop();

		if(next==k && x==0){
			int cnt=dis[next];
			x=1;
			check[next]=false;
		}

		else if(next==k && x!=0){
			if(cnt>dis[next]) cnt=dis[next];
			check[next]=false;
		}

		if(2*next<=100000 && 2*next>=0 && check[2*next]==false){
			check[2*next]=true;
			q.push(2*next);
			dis[2*next]=dis[next];
		}


		if(next-1<=100000 && next-1>=0 && check[next-1]==false){
			check[next-1]=true;
			q.push(next-1);
			dis[next-1]=dis[next]+1;
		}

		if(next+1<=100000 && next+1>=0 && check[next+1]==false){
			check[next+1]=true;
			q.push(next+1);
			dis[next+1]=dis[next]+1;
		}

	}

	return ;
}


int main(){
	int n;
	int k;
	cin>>n>>k;

	if(n==k){
		cout<<0<<endl;
		cout<<0<<endl;
		return 0;
	}

	fill(check,check+100001,false);
	fill(dis,dis+100001,0);

	BFS(n,k);

	cout<<cnt<<endl;

}*/
