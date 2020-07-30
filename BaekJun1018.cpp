/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char A[51][51];//문자 W와 B가 들어가야 하므로

int main(){
	int n,m;
	vector<int> v;
	cin>>n>>m;

	for(int i=1;i<=n;i++){//입력
		for(int j=1;j<=m;j++){
			cin>>A[i][j];//B or W
		}
	}

	int cnt=0;
	int a,b;
	a=1;
	b=1;



	while(a+7<=m){

		for(int i=a;i<=a+7;i++){

			if(b+7>n){
				b=1;
				a+=1;
				continue;
			}

			for(int j=b;j<=b+7;j++){
				//행렬 A를 건드리는 영역
				int k=b;

				if((j-k%2)==0 && A[i][j]=='W'){
					if((j-k%2)==0 && A[i][j]!='W') cnt++;
				}

				else if((j-k%2)==0 && A[i][j]=='B'){
					if((j-k%2)==0 && A[i][j]!='B') cnt++;
				}

				else if((j-k%2)==1 && A[i][j]=='W'){
					if((j-k%2)==1 && A[i][j]!='W') cnt++;
				}

				else if((j-k%2)==1 && A[i][j]=='B'){
					if((j-k%2)==1 && A[i][j]!='B') cnt++;
				}
			}

		}

		v.push_back(cnt);
		cnt=0;
		b++;

	}

	sort(v.begin(),v.end());//최솟값을 찾기위해 정렬을 사용

	cout<<v[0]<<endl;

}*/
