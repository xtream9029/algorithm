/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;

	int *A=new int[n+1];

	for(int i=2;i<=n;i++){
		A[i]=i;
	}

	for(int i=2;i<=n;i++){

		if(A[i]==0) continue;

		for(int j=i+i;j<=n;j+=i){
			A[j]=0;
		}

	}

	for(int i=m;i<=n;i++){
		if(A[i]!=0) printf("%d\n",i);
	}
}*/
