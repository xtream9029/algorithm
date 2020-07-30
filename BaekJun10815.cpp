/*#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int A[],int first,int last,int data){
	if(first>last) return -1;

	int mid=(first+last)/2;

	if(A[mid]==data) return 1;

	else if(A[mid]>data) return binarySearch(A,0,mid-1,data);

	else if(A[mid]<data) return binarySearch(A,mid+1,last,data);
}

int main(){
	int n;
	cin>>n;

	int *A=new int[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	sort(A,A+n);

	int m;
	cin>>m;
	int *B=new int[m];
	for(int i=0;i<m;i++){
		cin>>B[i];
	}

	for(int i=0;i<m;i++){
		int a=binarySearch(A,0,n-1,B[i]);
		if(a==1){
			B[i]=1;
		}
		else if(a==-1){
			B[i]=0;
		}

	 	cout<<B[i]<<" ";
	}

}*/
