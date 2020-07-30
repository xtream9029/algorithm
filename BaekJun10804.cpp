/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int x,int y){
	return x>y;
}

int main(){
	int A[21];


	for(int i=1;i<=20;i++){
		A[i]=i;
	}

	for(int i=0;i<10;i++){
		int a,b;
		vector<int> v;
		cin>>a>>b;

		for(int i=b;i>=a;i--){
			v.push_back(A[i]);
		}

		for(int i=a;i<=b;i++){
			A[i]=v[i-a];
		}

		v.clear();
	}

	for(int i=1;i<=20;i++){
		if(i<20) cout<<A[i]<<" ";

		else if(i==20) cout<<A[i];
	}
}*/
