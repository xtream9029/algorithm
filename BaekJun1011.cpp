/*#include <iostream>
#include <vector>
using namespace std;

int main(){
	int tc;
	cin>>tc;

	for(int i=0;i<tc;i++){
		int cnt=1;//최소 횟수
		long long int x,y;
		int k=0;
		cin>>x>>y;

		int sum=x;
		long long int d=y-1;

		while(sum<=d){
			if(sum+k-1==d){
				cnt++;
				break;
			}
			else if(sum+k==d){
				cnt++;
				break;
			}
			else if(sum+k+1==d){
				cnt++;
				break;
			}

			sum=sum+k+1;//최소 횟수로 가려면 최대한 멀리 이동해야됨
			int t=k+1;
			k=t;
			cnt++;
		}

		cout<<cnt<<endl;

	}
}*/
