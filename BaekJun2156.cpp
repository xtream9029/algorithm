/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *A=new int [n];
	int *DP=new int [n];

	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	DP[0]=A[0];
	DP[1]=A[1];
	DP[2]=A[2];

	for(int i=3;i<n;i++){
		DP[i]=max(DP[i-3]+DP[i-1]+A[i],DP[i-2]+A[i]);
	}

	cout<<DP[n-1]<<endl;

}*/
