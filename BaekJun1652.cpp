/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char graph[101][101]={' '};

int main(){
	int n;
	int a=0;//가로 탐색해서 누울 자리
	int b=0;//세로 탐색해서 누울 자리

	cin>>n;

	//입력
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>graph[i][j];
		}
	}
	//=====================

	for(int i=1;i<=n;i++){//가로 탐색
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(graph[i][j]=='.' && j<=n){
				cnt+=1;
			}

			if(graph[i][j]=='X' || j==n){
				if(cnt>=2) {
					a+=1;
				}
				cnt=0;
			}
		}
	}

	for(int i=1;i<=n;i++){//세로 탐색
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(graph[j][i]=='.' && j<=n){
				cnt+=1;
			}

			if(graph[j][i]=='X' || j==n){
				if(cnt>=2) {
					b+=1;
				}
				cnt=0;
			}
		}
	}

	cout<<a<<" "<<b<<endl;

}*/
