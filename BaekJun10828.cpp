/*#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(){
	int N;
	string s;
	stack<int> t;
	cin>>N;//명령어 횟수
	cin.ignore();


	for(int i=0;i<N;i++){
		getline(cin,s);//명령어 입력 처리

		if(s=="top"){
			if(t.size()==0){
				cout<<-1<<endl;
			}
			else cout<<t.top()<<endl;
		}
		else if(s=="size"){
			cout<<t.size()<<endl;
		}
		else if(s=="empty"){
			if(t.empty()){
				cout<<1<<endl;
			}
			else if(!t.empty()){
				cout<<0<<endl;
			}
		}
		else if(s=="pop"){
			if(t.size()==0) cout<<-1<<endl;
			else{
				int a=t.top();
				t.pop();
				cout<<a<<endl;
			}
		}
		else if(s[0]=='p' && s[1]=='u'){//push
			string copy="";
			for(int i=0;i<s.length();i++){//문자열중 숫자를 처리해야함
				if(isdigit(s[i])){//공백이 나왔다는건 이제 나올게 숫자라는것
					copy+=s[i];
				}
			}
			t.push(stoi(copy));
		}
	}

}*/
