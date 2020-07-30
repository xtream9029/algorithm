/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int n;
	cin>>n;

	int *A=new int[n];
	int *DP=new int[n];

	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	fill(DP,DP+n,1);
	int c=0;

	for(int i=1;i<n;i++){
		vector<int> v;

		int k=A[i];

		for(int j=0;j<i;j++){
			if(k>A[j]) v.push_back(j);
		}

		if(!v.empty()){
			int max=DP[v[0]];

			for(int j=1;j<v.size();j++){
				if(max<DP[v[j]]) max=DP[v[j]];
			}

			c=max;
		}

		DP[i]=c+1;
		c=0;
	}

	sort(DP,DP+n);

	cout<<DP[n-1]<<endl;

}*/
