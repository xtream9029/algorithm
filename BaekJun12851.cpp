//이코드가 왜맞는지 모르겠음
/*#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool check[100001];//노드 방문 여부를 검사하기 위함
int dis[100001];
bool first;
int cnt;
int cnt2;

struct DATA{
	int x;
	int y;
};

void BFS(int n,int m){
	queue<DATA> q;
	DATA t;
	t.x=n;
	t.y=dis[n];
	q.push(t);

	while(!q.empty()){
		DATA next;//int x,int y
		next=q.front();

		q.pop();
		check[next.x]=true;

		if(next.x==m && first==false){//처음 목적지에 도달 했을때
			cnt=next.y;
			cnt2++;
			first=true;
			check[next.x]=false;
	    }

		if(next.x==m && first==true && cnt==next.y){
			cnt2++;
			check[next.x]=false;
		}


		if(next.x==m && first==true && cnt<next.y){
			return ;
		}

		if(next.x+1>=0 && next.x+1<=100000 && check[next.x+1]==false){
			DATA d;
			d.x=next.x+1;
			d.y=next.y+1;
			q.push(d);
		}

		if(next.x-1>=0 && next.x-1<=100000 && check[next.x-1]==false){
			DATA d;
			d.x=next.x-1;
			d.y=next.y+1;
			q.push(d);
		}

		if(next.x*2>=0 && next.x*2<=100000 && check[next.x*2]==false){
			DATA d;
			d.x=next.x*2;
			d.y=next.y+1;
			q.push(d);
		}
	}

}

int main(){
	int n,m;
	cin>>n>>m;

	fill(check,check+100001,false);
	fill(dis,dis+100001,0);
	first=false;

	BFS(n,m);

	cout<<cnt<<endl;
	cout<<cnt2-1<<endl;
}*/
