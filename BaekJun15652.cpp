/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void DFS(int A[],int flag[],int index,int x,int len,int n){
	if(x==len){
		for(int i=0;i<len;i++){
			if(i!=len) {
				printf("%d",A[i]);
				printf(" ");
			}
			else if(i==len) printf("%d",A[i]);
		}
		printf("\n");

		return ;
	}

	for(int i=index;i<=n;i++){
		if(flag[i]==1) continue;
		A[x]=i;
		DFS(A,flag,i,x+1,len,n);
		flag[i]=0;
	}
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);

	int *A=new int[k];
	int *flag=new int[n+1];
	fill(flag,flag+n+1,0);

	DFS(A,flag,1,0,k,n);
}*/
