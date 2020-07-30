/*#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main(){

	while(1){
		string s;
		getline(cin,s);

		if(s.size()==1 && s[0]=='.') break;

		else{
			stack<char> k;

			for(int i=0;i<s.length();i++){

				if(s[i]=='(' || s[i]=='['){//열린 괄호일때
					k.push(s[i]);
				}

				else if(s[i]==')' || s[i]==']'){//닫힌 괄호일때
					if(k.empty()){//닫힌괄호여도 스택이 비어있으면 그냥 따지지 않고 스택에 푸시함
						k.push(s[i]);
					}

					else if(!k.empty()){

						if(s[i]==')'){
							if(k.top()=='(') k.pop();

							else k.push(s[i]);
						}

						else if(s[i]==']'){
							if(k.top()=='[') k.pop();

							else k.push(s[i]);
						}
					}
				}
			}


			if(k.empty()) cout<<"yes"<<endl;

			else if(!k.empty()) cout<<"no"<<endl;
		}
	}

	return 0;
}*/
