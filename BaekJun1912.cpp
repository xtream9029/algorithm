/*#include <iostream>
#include <vector>
using namespace std;

int main(){//기억에 의존해서 품
	int n;
	vector<int> sum;
	cin>>n;
	int *A=new int[n];

	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	sum.push_back(A[0]);

	for(int i=1;i<n;i++){
		if(sum[i-1]+A[i]>A[i]) sum.push_back(sum[i-1]+A[i]);
		else sum.push_back(A[i]);
	}
	int maxsum=sum[0];

	for(int i=1;i<sum.size();i++){
		if(maxsum<sum[i]) maxsum=sum[i];
	}

	cout<<maxsum<<endl;
}*/
