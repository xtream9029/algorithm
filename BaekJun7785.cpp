/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> v;

	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		cin.ignore();
		char A[5];

		for(int j=0;j<s.length();j++){
			if(s[j]!=' '){
				A[j]=s[j];
			}
			else if(s[j]==' ' && s[j+1]=='e'){
				string l=A;
				v.push_back(l);
				break;
			}
			else if(s[j]==' ' && s[j+1]=='l'){
				for(int k=0;k<v.size();k++){
					if(v[k]==A){
						swap(v[k],v[v.size()-1]);
						v.pop_back();
						break;
					}
				}
			}
		}
	}

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}*/
