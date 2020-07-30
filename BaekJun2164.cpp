/*#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);

	vector<int> v;
	queue<int> q;

	for(int i=1;i<=n;i++){
		q.push(i);
	}

	while(q.size()>1){
		q.pop();

		int a=q.front();

		q.push(a);

		q.pop();
	}

	cout<<q.front()<<endl;
}*/
