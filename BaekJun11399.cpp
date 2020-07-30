/*#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int B[n]={0};

	sort(A,A+n);

	B[0]=A[0];

	for(int i=1;i<n;i++){
		for(int j=0;j<=i;j++){
			B[i]+=A[j];
		}
	}

	int sum=0;
	for(int i=0;i<n;i++){
		sum+=B[i];
	}
	cout<<sum<<endl;

}*/
