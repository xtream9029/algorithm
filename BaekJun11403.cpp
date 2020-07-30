/*#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int A[101][101]={0};
int B[101][101]={0};

int main(){
	int n;
	cin>>n;

	vector<int> v[n+1];//graph
	queue<int> q;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>A[i][j];
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(A[i][j]==1) v[i].push_back(j);
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){

			bool *check=new bool[n+1];
			fill(check,check+n+1,false);

			check[i]=true;
			q.push(i);

			while(!q.empty()){
				int	next=q.front();
				q.pop();

				for(int k=0;k<v[next].size();k++){
					if(v[next][k]==j) B[i][j]=1;

					if(check[v[next][k]]==false){
						check[v[next][k]]=true;
						q.push(v[next][k]);
					}
				}
			}

			delete check;
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
}*/
