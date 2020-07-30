/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int *A=new int[250000];

	for(int i=2;i<250000;i++){
		A[i]=i;
	}

	for(int i=2;i*i<250000;i++){
		if(A[i]==0) continue;

		for(int j=i+i;j<250000;j+=i){
			A[j]=0;
		}
	}

	while(1){
		int n;
		cin>>n;

		if(n==0) break;

		else if(n==1) cout<<1<<endl;

		else{

			int cnt=0;

			for(int i=n+1;i<=2*n;i++){
				if(A[i]!=0) cnt++;
			}

			cout<<cnt<<endl;

		}
	}
}*/
