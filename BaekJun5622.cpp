/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){//알파벳별 케이스 분류를 할 수 밖에 없음
	string s;//대문자로 이루어진 문자열
	cin>>s;
	int *A=new int[26];
	int sumtime=0;

	for(int i=0;i<s.length();i++){

		if(s[i]=='A' || s[i]=='B' || s[i]=='C'){
			A[s[i]-'A']=3;
		}

		else if(s[i]=='D' || s[i]=='E' || s[i]=='F'){
			A[s[i]-'A']=4;
		}

		else if(s[i]=='G' || s[i]=='H' || s[i]=='I'){
			A[s[i]-'A']=5;
		}

		else if(s[i]=='J' || s[i]=='K' || s[i]=='L'){
			A[s[i]-'A']=6;
		}

		else if(s[i]=='M' || s[i]=='N' || s[i]=='O'){
			A[s[i]-'A']=7;
		}

		else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S'){
			A[s[i]-'A']=8;
		}

		else if(s[i]=='T' || s[i]=='U' || s[i]=='V'){
			A[s[i]-'A']=9;
		}

		else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z'){
			A[s[i]-'A']=10;
		}
	}

	for(int i=0;i<s.length();i++){
		sumtime+=A[s[i]-'A'];
	}

	cout<<sumtime<<endl;
}*/
