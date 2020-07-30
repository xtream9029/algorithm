/*#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
	int k;
	stack<int> s;
	cin>>k;

	int *A=new int[k];

	for(int i=0;i<k;i++){
		cin>>A[i];
	}

	for(int i=0;i<k;i++){

		if(A[i]==0) s.pop();

		else {
			s.push(A[i]);
		}
	}

	if(s.size()==0){
		cout<<0<<endl;
	}

	else {
		int sum=0;
		while(!s.empty()){
			sum+=s.top();
			s.pop();
		}

		cout<<sum<<endl;
	}
}*/
