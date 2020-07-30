/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;
vector<int> B;
vector<int> C;//a와 b의 공통 약수를 모아놈

int a,b;

int sosu[10001]={0,};

int gcm(vector<int> A,vector<int> B){//최대 공약수 찾는 함수

	int rt;

	if(A.size()>B.size()){
		for(int i=0;i<B.size();i++){
			for(int j=0;j<A.size();j++){
				if(B[i]==A[j]){
					C.push_back(B[i]);
					break;
				}
			}
		}
	}

	else {
		for(int i=0;i<A.size();i++){
			for(int j=0;j<B.size();j++){
				if(A[i]==B[j]){
					C.push_back(A[i]);
					break;
				}
			}
		}
	}

	sort(C.begin(),C.end());

	return C[C.size()-1];//최대 공약수 리턴
}

int lcm(vector<int> A,vector<int> B){//최소 공배수
	//소인수 분해를 해야하나?
	int rt;
	vector<int> k;

	for(int i=0;i<C.size();i++){
		if(C[i]==1) continue;

		if(sosu[C[i]]==0){//소수임
			int d=sosu[C[i]];
			while(1){
				if(a%d==0 && b%d==0){
					k.push_back(d);
					a=a/d;
					b=b/d;
				}
				else break;
			}
		}
	}
	k.push_back(a);
	k.push_back(b);

	int mul=1;
	for(int i=0;i<k.size();i++){
		mul*=k[i];
	}

	return mul;

}


int main(){
	cin>>a>>b;

	for(int i=2;i<=10000;i++){
		for(int j=i+i;j<=10000;j+=i){
			if(sosu[j]==1) continue;

			sosu[j]=1;//1이면 소수가 아님
		}
	}

	int x;//최대 공약수
	int y;//최소 공배수

	for(int i=1;i<=a;i++){
		if(a%i==0) A.push_back(i);
	}

	for(int i=1;i<=b;i++){
		if(b%i==0) B.push_back(i);
	}

	x=gcm(A,B);
	y=lcm(A,B);

	cout<<x<<endl;
	cout<<y<<endl;
	return 0;

}*/

