/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int A[10001];

int main(){
	int tc;
	cin>>tc;

	fill(A,A+10001,1);//1이면 소수고 0이면 소수가 아님

	for(int i=2;i<=100;i++){
		if(A[i]==0) continue;

		for(int j=i+i;j<=10000;j+=i){
			A[j]=0;
		}
	}

	for(int i=2;i<=10000;i++){
		if(A[i]==1) cout<<i<<endl;
	}

	for(int i=0;i<tc;i++){


	}
}*/
