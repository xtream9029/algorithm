/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct data{
	int x;
	int y;
};

int main(){
	string s;
	cin>>s;

	data *A=new data[26];

	for(int i=0;i<26;i++){
		A[i].x=-1;
		A[i].y=0;
	}

	for(int i=0;i<s.length();i++){
		if(A[s[i]-'a'].y==1) continue;

		A[s[i]-'a'].x=i;
		A[s[i]-'a'].y=1;
	}

	for(int i=0;i<26;i++){
		cout<<A[i].x<<" ";
	}

}*/
