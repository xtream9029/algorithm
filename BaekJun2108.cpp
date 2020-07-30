/*#include <iostream>
#include <algorithm>
#include <cmath>//반올림 함수를 사용하기 위해 포함
#include <vector>
#include <map>
#include <utility>
using namespace std;

struct data{
	int x;
	int y;
};

bool cmp1(data a,data b){
	return a.y < b.y;
}

int main(){
	int n;
	cin>>n;
	vector<data> v;//map을 vector로 옮기기 위해
	map<int,int> m;
	vector<int> t;

	double sum=0;
	double mean;//평균
	int mid;//중앙값
	int maxcnt;//최빈값
	int scope;//범위

	int *A=new int[n];

	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
		m[A[i]]=0;//처음에 숫자 1번씩은 들어가니까
		sum+=A[i];
	}

	for(int i=0;i<n;i++){
		m[A[i]]++;
	}

	map<int,int>::iterator i;
	for(i=m.begin();i!=m.end();i++){//메모리를 너무 많이 사용하는 부분
		data k;
		k.x=i->first;
		k.y=i->second;

		v.push_back(k);
	}

	sort(A,A+n);
	sort(v.begin(),v.end(),cmp1);

	cout<<"==================="<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i].x<<" "<<v[i].y<<endl;
	}
	cout<<"==================="<<endl;

	int max=v[v.size()-1].y;

	for(int i=0;i<v.size();i++){
		if(v[i].y==max){
			t.push_back(v[i].x);
		}
	}

	sort(t.begin(),t.end());

	if(t.size()==1){
		maxcnt=t[0];
	}

	else if(t.size()>=2){
		maxcnt=t[1];
	}


	min=sum/n;
	min=floor(min+0.5);

	mid=A[n/2];

	scope=A[n-1]-A[0];

	cout<<mean<<endl;
	cout<<mid<<endl;
	cout<<maxcnt<<endl;
	cout<<scope<<endl;

}*/
