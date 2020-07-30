/*#include <iostream>
#include <algorithm>
using namespace std;

//동작 과정을 끊임없이 생각할 것!

void DFS(int flag[],int A[],int x,int depth,int n){
	if(x==depth+1){
		for(int i=1;i<=depth;i++){
			if(i<depth){
				printf("%d",A[i]);
				printf(" ");
			}
			else if(i==depth) printf("%d",A[i]);
		}
		printf("\n");
		return ;
	}

	for(int i=1;i<=n;i++){
		if(flag[i]==1) continue;
		flag[i]=1;
		A[x]=i;
		DFS(flag,A,x+1,depth,n);
		flag[i]=0;
	}
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);

	int *A=new int[n+1];
	int *flag=new int[n+1];

	for(int i=1;i<=n;i++){
		A[i]=i;
	}

	fill(flag,flag+n+1,0);

	DFS(flag,A,1,m,n);
}*/
