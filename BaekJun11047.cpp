/*#include <iostream>
using namespace std;

int main(){
	int n,cost;
	scanf("%d" "%d",&n,&cost);
	int *A=new int[n];
	int *B=new int[n];

	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

	for(int i=0;i<n;i++){
		B[i]=A[n-1-i];
	}

	int cnt=0;

	if(cost>=B[0]){
		while(cost>=B[0]){
			cost-=B[0];
			cnt+=1;
		}
	}

	for(int i=0;i<n-1;i++){
		if(B[i]>cost && cost>=B[i+1]){
			while(cost>=B[i+1]){
				cost-=B[i+1];
				cnt+=1;
			}
		}
		else continue;
	}

	cout<<cnt<<endl;
}*/
