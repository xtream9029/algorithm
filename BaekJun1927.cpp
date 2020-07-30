/*#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	priority_queue<int,vector<int>,greater<int> > pq;//min heap

	scanf("%d",&n);

	int *A=new int[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

	for(int i=0;i<n;i++){
		if(A[i]==0){
			if(pq.empty()){
				cout<<0<<endl;
			}
			else if(!pq.empty()){
				int x=pq.top();
				cout<<x<<endl;
				pq.pop();
			}
		}

		else if(A[i]!=0){
			pq.push(A[i]);
		}
	}

	return 0;


}*/
