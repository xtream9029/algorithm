/*#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

struct DATA{
	string s;
	int len;
};

bool cmp(DATA a,DATA b){
	if(a.len==b.len){//아스키 코드값을 활용한 사전식 정렬
		string sa=a.s;
		string sb=b.s;

		for(int i=0;i<a.len;i++){
			if(int(sa[i])==int(sb[i])) continue;

			return int(sa[i])<int(sb[i]);
		}
	}

	return a.len < b.len;
}

int main(){
	int n;
	cin>>n;

	DATA *A=new DATA[n];

	for(int i=0;i<n;i++){
		string ins;
		cin>>ins;

		A[i].s=ins;
		A[i].len=ins.length();
	}

	sort(A,A+n,cmp);

	for(int i=0;i<n;i++){
		if(i>=1){
			if(A[i].s==A[i-1].s) continue;
		}

		cout<<A[i].s<<endl;
	}

	return 0;
}*/
