/*#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

//map에 있는 데이터를 vector로 옮기기 연습해봄

struct data{
	int x;
	int y;
};

bool cmp(data a,data b){
	return a.x < b.x;
}

int main(){
	int n;
	scanf("%d",&n);

	int *A=new int[n];
	map<int,int> m;
	vector<data> v;

	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
		m[A[i]]=0;
	}

	for(int i=0;i<n;i++){
		m[A[i]]++;
	}

	map<int,int>::iterator i;
	for(i=m.begin();i!=m.end();i++){
		data k;
		k.x=i->first;
		k.y=i->second;

		v.push_back(k);
	}

	sort(v.begin(),v.end(),cmp);

	for(int i=0;i<v.size();i++){
		if(i!=v.size()-1) cout<<v[i].x<<" ";

		else if(i==v.size()-1) cout<<v[i].x;
	}
}*/
