/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int tc;

	cin>>tc;

	for(int i=0;i<tc;i++){//테스트 케이스 만큼 반복
		int k,n;//k층의 n호
		int x=0;
		cin>>k;
		cin>>n;

		int *A=new int[n+1];

		for(int j=1;j<=n;j++){
			A[j]=j;//0층 1호 인원 입력
		}

		for(int j=0;j<k;j++){
			for(int s=2;s<=n;s++){
				A[s]=A[s-1]+A[s];
			}
		}

		cout<<A[n]<<endl;

	}
}*/
