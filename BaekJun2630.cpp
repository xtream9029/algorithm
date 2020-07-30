/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//런타임 에러

int A[129][129]={0};
int cnt1=0;
int cnt2=0;

void whitepaper(int a,int b,int c,int d){//모든 원소가 0이여야함
	int s=0;

	if(a-b==0 & c-d==0) {
		if(A[a][c]==0) {
			cnt1++;
			return ;
		}

		else if(A[a][c]==1) return;
	}

	for(int i=a;i<=b;i++){
		for(int j=c;j<=d;j++){
			if(A[i][j]==1){
				s=1;
				break;
			}
		}
	}

	if(s==0) {//주어진 구간에서 모든 값이 0
		cnt1++;
		return ;
	}

	else if(s==1){
		whitepaper(a,(a+b)/2,c,(c+d)/2);
		whitepaper((a+b)/2+1,b,c,(c+d)/2);
		whitepaper(a,(a+b)/2,(c+d)/2+1,d);
		whitepaper((a+b)/2+1,b,(c+d)/2+1,d);
	}
}

void bluepaper(int a,int b,int c,int d){//모든 원소가 1이여야함
	int s=0;

	if(a-b==0 & c-d==0) {
		if(A[a][c]==1){
		 	cnt2++;
			return ;
		}

		else if(A[a][c]==0) return ;
	}

	for(int i=a;i<=b;i++){
		for(int j=c;j<=d;j++){
			if(A[i][j]==0){
				s=1;
				break;
			}
		}
	}

	if(s==0) {//주어진 구간에서 모든 값이 1
		cnt2++;
		return ;
	}

	else if(s==1){
		bluepaper(a,(a+b)/2,c,(c+d)/2);
		bluepaper((a+b)/2+1,b,c,(c+d)/2);
		bluepaper(a,(a+b)/2,(c+d)/2+1,d);
		bluepaper((a+b)/2+1,b,(c+d)/2+1,d);

	}
}

int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>A[i][j];//0 or 1
		}
	}

	whitepaper(1,n,1,n);
	bluepaper(1,n,1,n);

	cout<<cnt1<<endl;
	cout<<cnt2<<endl;

}*/
