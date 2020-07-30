/*#include <iostream>
#include <vector>
using namespace std;

int primenum(int n){
	int c=0;

	for(int i=2;i<n;i++){
		if(n%i==0) c++;
	}

	return c;
}

int main(){
	int n;
	cin>>n;
	int cnt=0;

	int *A=new int[n];

	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	for(int i=0;i<n;i++){
		if(A[i]==1){
			continue;
		}

		int k=primenum(A[i]);

		if(k==0) cnt++;
	}

	cout<<cnt<<endl;
}*/
