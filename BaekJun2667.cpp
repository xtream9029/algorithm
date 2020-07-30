/*#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int A[26][26]={0};
bool check[26][26]={false};
int x;

void dfs(int i,int j){//Graph Travel,A와 check를 전역변수로 선언해놓고 굳이 변수로 받는 이유...?
	//대부분 다른 사람 들은 반복문을 써서 상하좌우를 확인하였는데 나는 그냥 일일이 경우를 나열함
	check[i][j]=true;
	x++;

	if(A[i][j+1]==1 && check[i][j+1]==false){//우
		dfs(i,j+1);
	}

	if(A[i][j-1]==1 && check[i][j-1]==false){//좌
		dfs(i,j-1);
	}

	if(A[i-1][j]==1 && check[i-1][j]==false){//상
		dfs(i-1,j);
	}

	if(A[i+1][j]==1 && check[i+1][j]==false){//하
		dfs(i+1,j);
	}

}


int main(){
	int n;
	vector<int> v;
	cin>>n;


	for(int i=1;i<=n;i++){//입력 처리
		string s;
		cin>>s;

		for(int j=0;j<s.length();j++){
			A[i][j+1]=s[j]-'a'+49;
		}
	}

	for(int i=1;i<=n;i++){

		for(int j=1;j<=n;j++){

			if(A[i][j]==1 && check[i][j]==false){
				dfs(i,j);
				v.push_back(x);
				x=0;
			}

		}
	}

	sort(v.begin(),v.end());

	cout<<v.size()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}


}*/
