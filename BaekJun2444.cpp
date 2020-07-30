/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;

	char *A=new char[2*n-1];

	for(int i=0;i<2*n-1;i++){//공백으로 초기화
		A[i]=' ';
	}

	for(int i=0;i<=(2*n-1)/2;i++){
		int mid=(2*n-1)/2;

		for(int j=mid-i;j<=mid+i;j++){
			A[j]='*';
		}

		for(int j=0;j<=mid+i;j++){
			printf("%c",A[j]);
		}

		 printf("\n");
	}

	for(int i=(2*n-1)/2;i>=1;i--){
		int mid=(2*n-1)/2;

		A[mid+i]=' ';
		A[mid-i]=' ';

		for(int j=0;j<mid+i+1;j++){
			printf("%c",A[j]);
		}

		if(i!=1) printf("\n");
	}

}*/
