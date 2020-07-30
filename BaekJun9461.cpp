/*#include <iostream>
#include <vector>
using namespace std;

int main(){//그냥 규칙성 찾기
	int n;
	cin>>n;

	long long int *A=new long long int[101];

	A[1]=1;
	A[2]=1;
	A[3]=1;
	A[4]=2;
	A[5]=2;

	for(int i=6;i<=100;i++){
		A[i]=A[i-5]+A[i-1];//A[i]=A[i-2]+A[i-3] 도 되더라
	}

	for(int i=0;i<n;i++){
		int k;
		cin>>k;

		cout<<A[k]<<endl;
	}

}*/
