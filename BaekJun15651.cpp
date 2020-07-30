/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void DFS(int A[],int x,int len,int n){
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

	for(int i=1;i<=n;i++){
		A[x]=i;
		DFS(A,x+1,len,n);
	}
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);

	int *A=new int[k];

	DFS(A,0,k,n);
}*/
