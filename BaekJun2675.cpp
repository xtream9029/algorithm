/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore(1,'\n');

	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);//공백을 포함한 문자열을 입력받을때 getline으로 입력 받아야함

		int a=s[0]-'0';//반복횟수

		//cout<<a<<endl;
		//cout<<s<<endl;

		int index=0;

		for(int j=0;j<s.length();j++){
			if(s[j]==' ') {
				index=j+1;
				break;
			}
		}

		for(int j=index;j<s.length();j++){
			char c=s[j];
			for(int k=0;k<a;k++){
				cout<<c;
			}
		}

		cout<<endl;
	}

}*/
