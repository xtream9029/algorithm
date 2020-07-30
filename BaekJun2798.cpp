/*#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	int *A = new int[N];
	for(int i= 0; i < N; i++) {//백준 기본입력 방식
		cin >> A[i];
	}

	int sum=0;
	int min=M;
	int final;
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			for(int k=j+1;k<N;k++){
				sum=A[i]+A[j]+A[k];
				if(sum<=M && min>abs(M-sum)) {
					min=abs(M-sum);
					final=sum;
				}
			}
		}
	}

	cout<<final<<endl;
}*/
