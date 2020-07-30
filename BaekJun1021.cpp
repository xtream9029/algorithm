/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int cnt=1;

int main(){
	//vector<int> d;
	int n,m;
	cin>>n>>m;
	int a=0;
	int b=0;

	int *A=new int[m];

	for(int i=0;i<m;i++){
		cin>>A[i];
	}

	queue<int> q1;
	queue<int> q2;

	for(int i=1;i<=n;i++){
		q1.push(i);
		q2.push(i);
	}

	for(int i=0;i<m;i++){

		if(q1.front()==A[i]){
			q1.pop();
			q2.pop();
		}

		else {
			//2번 연산

			vector<int> v;

			while(q1.front()!=A[i]){
				int x=q1.front();
				v.push_back(x);
				q1.pop();
			}

			for(int j=0;j<v.size();j++){
				q1.push(v[j]);
				a+=1;
			}

			q1.pop();


			//3번 연산
			while(q2.front()!=A[i]){
				int x=q2.front();
				q2.pop();
				q2.push(x);
				b+=1;
			}

			q2.pop();
		}
	}

	cout<<a<<endl;
	cout<<b<<endl;

	cout<<cnt<<endl;
}*/
