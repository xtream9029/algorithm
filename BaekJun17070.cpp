/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int state=0;
int cnt=0;
int A[17][17];
bool check[17][17]={false};

void DFS(int a,int b,int n){
	check[a][b]=true;

	if(a==n && b==n){
		cnt++;
		return ;
	}

	if(state==0){//현재 형태가 가로일때
		if(A[a][b+1]==0 && check[a][b+1]==false && a<=n && b+1<=n){
			state=0;
			DFS(a,b+1,n);
		}


		if(A[a][b+1]==0 && A[a+1][b]==0 && A[a+1][b+1]==0 && check[a+1][b+1]==false &&
		a+1<=n && b+1<=n){
			state=2;
			DFS(a+1,b+1,n);
		}
	}

	if(state==1){//현재 형태가 세로일때
		if(A[a+1][b]==0 && check[a+1][b]==false && a+1<=n && b<=n){
			state=1;
			DFS(a+1,b,n);
		}

		if(A[a][b+1]==0 && A[a+1][b]==0 && A[a+1][b+1]==0 && check[a+1][b+1]==false
		&& a+1<=n && b+1<=n){
			state=2;
			DFS(a+1,b+1,n);
		}
	}

	if(state==2){//현재 형태가 대각선 일때
		if(A[a][b+1]==0 && check[a][b+1]==false && a<=n && b+1<=n){
			state=0;
			DFS(a,b+1,n);
		}

		if(A[a+1][b]==0 && check[a+1][b]==false && a+1<=n && b<=n){
			state=1;
			DFS(a+1,b,n);
		}

		if(A[a][b+1]==0 && A[a+1][b]==0 && A[a+1][b+1]==0 && check[a+1][b+1]==false
		&& a+1<=n && b+1<=n){
			state=2;
			DFS(a+1,b+1,n);
		}

	}

	return ;
}

int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>A[i][j];
		}
	}

	DFS(1,2,n);
	cout<<cnt<<endl;
}*/
