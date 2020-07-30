/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> v;

int Power(int n){
	if(n==0) return 1;

	return 2*Power(n-1);
}

bool AllCheck(int check[],int checkSize){
	for(int i=0;i<checkSize;i++){
		if(check[i]==0) return false;
	}

	return true;

}

void DFS(int sum,int len,int k,int A[],int check[]){
	if(len==n+1){
		v.push_back(sum);
		return ;
	}

	if(check[2*k+1]==0){
		int dataSum=sum+A[2*k+1];
		DFS(dataSum,len+1,2*k+1,A,check);
	}

	if(check[2*k+2]==0){
		int dataSum=sum+A[2*k+2];
		DFS(dataSum,len+1,2*k+2,A,check);
	}
}

int main(){
	cin>>n;
	int pn=Power(n);
	int len=0;
	int k=(n*(n+1))/2;
	int *A=new int[k];
	int *check=new int[k];

	fill(check,check+k,0);

	for(int i=0;i<k;i++){
		cin>>A[i];
	}

	for(int i=0;i<pn;i++){
		DFS(0,0,0,A,check);
	}

	sort(v.begin(),v.end());

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}*/
