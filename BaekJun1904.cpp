/*#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int A[1000000];

	A[0]=1;
	A[1]=2;
	for(int i=2;i<1000000;i++){
		A[i]=(A[i-1]+A[i-2])%15746;
	}

	cout<<A[n-1]<<endl;
}*/
