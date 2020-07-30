/*#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n;
	cin.ignore();//꼭 해줘야함
	for(int i=0;i<n;i++){
		getline(cin,s);
		int score=0;
		int cnt=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='O'){
				cnt+=1;
				score+=cnt;
			}
			else if(s[i]=='X'){
				cnt=0;
			}
		}
		cout<<score<<endl;
	}
}*/
