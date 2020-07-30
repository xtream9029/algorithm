/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int x;//몇번째 수:x번째 수
	cin>>x;

	int cnt=0;
	int n=1;

	while(1){
		if(n%2==0){
			//1/n~n/1
			for(int i=1;i<=n;i++){
				cnt++;
				if(cnt==x) {
					cout<<i<<"/"<<n+1-i<<endl;
					return 0;
				}
			}
		}

		else if(n%2==1){
			//n/1~1/n
			for(int i=1;i<=n;i++){
				cnt++;
				if(cnt==x) {
					cout<<n+1-i<<"/"<<i<<endl;
					return 0;
				}
			}
		}

		n+=1;
	}
}*/
