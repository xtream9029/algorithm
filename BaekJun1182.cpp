/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//조합은 flag배열이 필요 없는거 같음

int cnt=0;


void DFS(int A[],int B[],int index,int x,int s,int len,int n){//s는 부분수열의 합 이거랑 같으면 cnt를 증가시킴
	if(x==len){
		int sum=0;

		for(int i=0;i<len;i++){
			sum+=B[i];
		}

		if(sum==s) cnt++;

		return ;
	}

	for(int i=index;i<n;i++){
		B[x]=A[i];
		DFS(A,B,i+1,x+1,s,len,n);
	}
}

int main(){
	int n,s;
	cin>>n>>s;

	int *A=new int[n];//0부터 시작
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	for(int i=1;i<=n;i++){//i는 인자로 넘길 배열 사이즈
		int *B=new int[i];//DFS에서 출력할 배열
		DFS(A,B,0,0,s,i,n);
		delete B;
	}

	cout<<cnt<<endl;

	return 0;

}*/
