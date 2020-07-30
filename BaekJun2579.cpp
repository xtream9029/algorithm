/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;

	int *A=new int[n];

	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	int *S=new int[n];

	S[0]=A[0];
	S[1]=S[0]+A[1];
	S[2]=max(S[0]+A[2],S[1]+A[2]);

	for(int i=3;i<n;i++){
		S[i]=max(S[i-3]+A[i-1]+A[i],S[i-2]+A[i]);
	}

	cout<<S[n-1]<<endl;

	return 0;
}*/
