/*#include <iostream>
#include <algorithm>
using namespace std;

void DFS(int A[],int B[],int flag[],int x,int len,int n){
	if(x==len){
		for(int i=0;i<len;i++){
			if(i!=len-1){
				printf("%d",B[i]);
				printf(" ");
			}
			else if(i==len-1) printf("%d",B[i]);
		}
		printf("\n");
		return ;
	}

	for(int i=0;i<n;i++){
		if(flag[i]==1) continue;
		flag[i]=1;
		B[x]=A[i];
		DFS(A,B,flag,x+1,len,n);
		flag[i]=0;
	}
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);

	int *A=new int[n];
	int *B=new int[k];
	int *flag=new int[n];

	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

	fill(flag,flag+n,0);
	sort(A,A+n);//정렬하고 DFS에 넘김
	DFS(A,B,flag,0,k,n);

}*/
