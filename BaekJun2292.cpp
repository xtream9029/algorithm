/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){//규칙을 찾아야함 계차수열을 이용해서 풀었음
	int n;
	cin>>n;

	if(n==1){
		cout<<1<<endl;
		return 0;
	}

	else {
		for(int i=1;i<=1000000000;i++){
			if(3*i*i-3*i+2<=n && n<=3*i*i+3*i+1){
				cout<<i+1<<endl;
				return 0;
			}
		}
	}
}*/
