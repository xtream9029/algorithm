/*#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
	string s;
	int cnt=1;
	int discrim=0;
	vector<int> v;

	getline(cin,s);

	char A[1000000];

	for(int i=0;i<s.length();i++){
		if(65<=int(s[i]) && int(s[i])<=90) A[i]=s[i]+32;//문자가 소문자로 들어감
		else if(97<=int(s[i]) && int(s[i])<=122) A[i]=s[i];
	}

	sort(A,A+s.length());

	for(int i=0;i<s.length();i++){
		if(A[i]==A[i+1]) cnt+=1;
		else{
			v.push_back(cnt);
			cnt=1;
		}
	}


	int k=0;
	int max=v[0];

	for(int i=1;i<v.size();i++){
		if(max<v[i]) {
			max=v[i];
			k=i;
			discrim=0;
		}
		else if(max==v[i]){
			discrim+=1;
		}
	}

	int index=0;

	for(int i=1;i<k+1;i++){
		index+=v[i-1];
	}

	if(discrim==0) cout<<char(A[index]-32)<<endl;
	else cout<<"?"<<endl;


}*/
