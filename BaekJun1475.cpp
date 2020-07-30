/*#include <iostream>
#include <vector>
using namespace std;

struct set{
	int s;
	int cnt;
};

int main(){
	vector<int> v;
	int setCount=0;
	set A[10];

	for(int i=0;i<10;i++){//초기화 과정
		A[i].s=i;
		A[i].cnt=0;//얘만 건드릴거임
	}

	int n;
	cin>>n;

	if(n==0){
		cout<<1<<endl;
		return 0;
	}

	while(n>=1){
		v.push_back(n%10);
		n=n/10;
	}

	for(int i=0;i<v.size();i++){
		A[v[i]].cnt+=1;

		if(v[i]==6){
			if(A[6].cnt-A[9].cnt>=2){
				A[9].cnt+=1;
				A[6].cnt-=1;
			}
		}

		else if(v[i]==9){
			if(A[9].cnt-A[6].cnt>=2){
				A[6].cnt+=1;
				A[9].cnt-=1;
			}
		}
	}

	int max=A[0].cnt;

	for(int i=1;i<10;i++){
		if(max<A[i].cnt) max=A[i].cnt;
	}

	setCount=max;

	cout<<setCount<<endl;

}*/
