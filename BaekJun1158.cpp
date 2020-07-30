/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
	int n,k;
	int count;
	cin>>n>>k;

	queue <int> q;

	vector<int> v;

	for(int i=1;i<=n;i++){
		q.push(i);
	}

	count=1;

	while(!q.empty()){
		if(count==k){
			v.push_back(q.front());
			q.pop();
			count=0;
		}

		else {
			int tmp=q.front();
			q.pop();
			q.push(tmp);
		}

		count++;
	}

	cout<<"<";
	for(int i=0;i<v.size();i++){
		if(i==0){
			cout<<v[i];
		}

		else {
			cout<<","<<" "<<v[i];
		}
	}
	cout<<">";

	return 0;

}*/
