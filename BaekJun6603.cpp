/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//조합 문제 동작과정을 확실히 떠올라야함
struct data{
	int X;
	int Y;
};

void DFS(vector<int> A,vector<data> B,int C[],int x,int index){
	if(x==6){
		for(int i=0;i<6;i++){
			if(i!=5) cout<<C[i]<<" ";
			else if(i==5) cout<<C[i];
		}
		cout<<endl;
		return ;
	}

	for(int i=index;i<A.size();i++){//A.size()==n
		if(B[i].Y==1) continue;
		B[i].Y=1;
		C[x]=B[i].X;//A[i]와 같음
		DFS(A,B,C,x+1,i+1);
		B[i].Y=0;
	}
}

int main(){
	int n;//nC6 을 구하는 문제
	cin>>n;
	while(n){
		vector<int> A;
		int C[6];

		for(int i=0;i<n;i++){
			int input;
			cin>>input;
			A.push_back(input);//오름차순으로 주어짐
		}

		vector<data> B;

		for(int i=0;i<A.size();i++){
			data t;
			t.X=A[i];
			t.Y=0;
			B.push_back(t);
		}

		DFS(A,B,C,0,0);

		cout<<endl;
		cin>>n;

	}
}*/
