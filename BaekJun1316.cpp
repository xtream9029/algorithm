/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int cnt=0;//그룹 단어가 아닌 단어의 수

	for(int i=0;i<n;i++){
		string s;//소문자로만 구성
		cin>>s;
		int *A=new int[26];
		fill(A,A+26,0);

		A[s[0]-'a']++;

		for(int i=1;i<s.length();i++){
			if(s[i]!=s[i-1] && A[s[i]-'a']>0){
				cnt++;
				break;
			}

			A[s[i]-'a']++;
		}
	}

	cout<<n-cnt<<endl;

}*/
