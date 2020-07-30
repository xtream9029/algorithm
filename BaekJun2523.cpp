/*#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=1;i<=2*n-1;i++){

		if(i>n){//문제가 발생한 부분
			int k=i-n;

			int s=n-k;

			char *A=new char[s];

			for(int j=0;j<s;j++){
				A[j]='*';
			}

			for(int j=0;j<s;j++){
				cout<<A[j];
			}

			delete A;

		}

		else if(i<=n){
			char *A=new char[i];

			for(int j=0;j<i;j++){
				A[j]='*';
			}

			for(int j=0;j<i;j++){
				cout<<A[j];
			}

			delete A;
		}

		cout<<endl;

	}
}*/
