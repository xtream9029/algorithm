/*#include <iostream>
#include <algorithm>
using namespace std;

void DFS(int A[],int B[],int x,int len,int n,int index){
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

	for(int i=index;i<n;i++){
		B[x]=A[i];
		DFS(A,B,x+1,len,n,i);
	}
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);

	int *A=new int[n];
	int *B=new int[k];


	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

	sort(A,A+n);//정렬하고 DFS에 넘김
	DFS(A,B,0,k,n,0);


}*/
