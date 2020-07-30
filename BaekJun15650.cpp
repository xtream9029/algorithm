/*#include <iostream>
#include <algorithm>
using namespace std;

void DFS(int A[],int flag[],int index,int s,int n,int k){
	if(s==k+1){
		for(int i=1;i<=k;i++){
			if(i!=k) cout<<A[i]<<" ";
			else if(i==k) cout<<A[i];
		}
		cout<<endl;

		return ;
	}

	for(int i=index;i<=n;i++){
		if(flag[i]==1) continue;

		flag[i]=1;
		A[s]=i;
		DFS(A,flag,i+1,s+1,n,k);
		flag[i]=0;
	}


}


int main(){
	int n,p;//nCr,nCp
	cin>>n>>p;

	int *flag=new int[n+1];
	int *A=new int[p+1];
	fill(flag,flag+n+1,0);

	DFS(A,flag,1,1,n,p);
}*/
