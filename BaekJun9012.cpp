/*#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		stack<char> k;
		string s;
		cin>>s;

		for(int j=0;j<s.length();j++){
			if(s[j]=='('){
				k.push(s[j]);
			}
			else if(s[j]==')'){
				if(k.empty() || k.top()==')'){
					k.push(s[j]);
				}
				else k.pop();
			}
		}

		if(k.empty()) cout<<"YES"<<endl;
		else  cout<<"NO"<<endl;
	}
}*/
