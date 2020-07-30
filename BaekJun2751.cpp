/*#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

void quickSort(int A[],int first,int last){
	if(first>=last) return ;//이게 문제일수도 있음
	int left;
	int right;
	int pivot;

	left=first+1;
	right=last;
	pivot=A[first];

	while(left<=right){
		while(left<=last && A[left]<=pivot) left+=1;
		while(right>first && A[right]>=pivot) right-=1;
		if(left<=right){
			swap(&A[left],&A[right]);
			left+=1;
			right-=1;
		}
 	}

 	//pivot은 제자리로 감 --->정렬이 됨
 	int tmp;
	tmp=A[first];
	A[first]=A[right];
	A[right]=tmp;
	quickSort(A,first,right-1);
	quickSort(A,right+1,last);

}

int main(){
	int N;
	scanf("%d",&N);
	int *A=new int[N];

	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}

	sort(A,A+N);

	for(int i=0;i<N;i++){
		printf("%d\n",A[i]);
	}
}*/
