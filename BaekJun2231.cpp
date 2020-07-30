/*#include <iostream>
using namespace std;

int digitSum(int N,int i){//N은 분해합
	int sum=i;
	int cap=i;
	while(i>=1){//i와 i의 자릿수를 더해주는 역할
		int tmp=i%10;
		i=i/10;
		sum+=tmp;
	}
	if(sum==N) return cap;

	else return 0;
}

int main(){
	int N;//입력은 분해합
	cin>>N;
	int output;
	int cnt=0;
	for(int i=1;i<1000000;i++){//i는 생성자
		output=digitSum(N,i);
		if(output!=0){
			cout<<i<<endl;
			return 0;
		}
		else if(output==0) continue;
	}

	cout<<0<<endl;
}*/
