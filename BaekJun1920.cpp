/*#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int *A,int first,int last,int data){
	if(first>last) return 0;
	int mid=(first+last)/2;
	if(A[mid]==data) return 1;
	else if(A[mid]>data) return BinarySearch(A,0,mid-1,data);
	else if(data>A[mid]) return BinarySearch(A,mid+1,last,data);
}

int main(){
	int N,M;
	cin>>N;
	int *A=new int[N];
	for(int i=0;i<N;i++){
		cin>>A[i];
	}

	sort(A,A+N);
	cin>>M;
	int a;
	for(int i=0;i<M;i++){
		scanf("%d",&a);
		printf("%d\n",BinarySearch(A,0,N-1,a));
	}
}*/
