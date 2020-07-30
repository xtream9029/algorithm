/*#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *A=new int [1001];
	A[0]=0;
	A[1]=1;
	A[2]=2;


	for(int i=3;i<1001;i++){
		A[i]=(A[i-1]+A[i-2])%10007;
	}

	cout<<A[n]<<endl;
}*/
