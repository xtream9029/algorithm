/*#include <iostream>
#include <vector>
using namespace std;


int sixCounting(int n){
	int cnt=0;
	int x=0;
	int d=0;

	while(n>1){
		if(n%10==6 && ((n/10)%10)==6 && ((n/100)%10)==6) cnt=1;
		n=n/10;
	}

	if(cnt==1) return 1;
	else if(cnt==0) return -1;
}

int main(){
	int N;
	vector<int> v;
	cin>>N;


	for(int i=1;i<1000000;i++){//반복문을 돌면서 함수를 호출하기 때문에 정렬은 보장이 됨
		int k=sixCounting(i);
		if(k==1) v.push_back(i);
	}

	cout<<v[N-1]<<endl;

}*/
