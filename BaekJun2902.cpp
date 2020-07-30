/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string s;
	vector<char> v;
	getline(cin,s);

	v.push_back(s[0]);

	for(int i=1;i<s.length()-1;i++){
		if(s[i]=='-' && s[i+1]!='-'){
			v.push_back(s[i+1]);
		}
	}

	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
}*/
