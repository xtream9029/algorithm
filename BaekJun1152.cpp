/*#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int cnt=0;

	char A[1000000];

	for(int i=0;i<s.length();i++){
		A[i]=s[i];
	}

	for(int i=0;i<s.length();i++){
		if(A[i]==' ') cnt+=1;
	}


	if(A[0]!=' ' && A[s.length()-1]!=' '){
		cout<<cnt+1<<endl;
	}
	else if((A[0]==' ' && A[s.length()-1]!=' ') || (A[0]!=' ' && A[s.length()-1]==' ')){
		cout<<cnt<<endl;
	}
	else if(A[0]==' ' && A[s.length()-1]==' '){
		cout<<cnt-1<<endl;
	}

}*/
