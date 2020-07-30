/*#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}

		for(int j=0;j<2*(n-i)-1;j++){
			cout<<"*";
		}

		cout<<endl;
	}

	for(int i=n-1;i>0;i--){
		for(int j=i-1;j>0;j--){
			cout<<" ";
		}

		for(int j=0;j<2*(n-i+1)-1;j++){
			cout<<"*";
		}

		if(i!=1) cout<<endl;//출력 초과 방지 이 부분이 없으면 불필요하게 공백 한줄이 추가로 출력됨
	}

}*/
