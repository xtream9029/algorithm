/*#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	map<string, int> m;

	string A[100001]={"", };
	char as[21];

	int n,k;//포켓몬 종류와 문제 수
	scanf("%d" "%d",&n,&k);

	//입력
	for(int i=1;i<=n;i++){//포켓몬 도감, map에 입력
		char s[20];
		scanf("%s",s);
		m[s]=i;
		A[i]=s;
	}
	//====================

	map<string,int>::iterator iter;

	for(int i=1;i<=k;i++){
		scanf("%s",as);

		if(isdigit(as[0])){//A[i]가 숫자 일때
			int n=atoi(as);
			cout<<A[n]<<endl;
		}

		else{//A[i]가 문자열 일때
			printf("%d\n",m[as]);
		}
	}

}*/
