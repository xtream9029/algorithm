/*#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int *A=new int[n];

	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	int k;
	int a=0;
	int b=0;
	int cnt=0;

	for(k=0;k<=n;k++){
		for(int i=0;i<n;i++){
			if(k<=A[i]) a+=1;//k번 이상 인용된 논문의 횟수

			if(k>=A[i]) b+=1;//k번 이하 인용된 논문의 횟수
		}

		if(a>=k && n-k<=b){//핵심 조건
			cout<<k<<endl;
			return 0;
		}

		a=0;
		b=0;
	}

}*/
