/*#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int read;
	int cost[n][3];

	for(int i=0;i<n;i++){
		cin>>cost[i][0]>>cost[i][1]>>cost[i][2];
	}

	int sum=0;//최종 출력 값

	for(int i=0;i<n;i++){
		if(i==0){//i==0일때만 3개중 최소를 찾아야 함
			int min=cost[0][0];
			for(int j=1;j<3;j++){
				if(min>cost[0][j]) {
					min=cost[0][j];
					read=j;
				}
			}
			sum+=min;
		}

		else{//i==1일때부터 이곳을 돌게됨
			if(read==0){
				if(cost[i][1]>cost[i][2]) {
					sum+=cost[i][2];
					read=2;
				}
				else {
					sum+=cost[i][1];
					read=1;
				}
			}

			else if(read==1){
				if(cost[i][0]>cost[i][2]){
					sum+=cost[i][2];
					read=2;
				}
				else {
					sum+=cost[i][0];
					read=0;
				}
			}

			else if(read==2){
				if(cost[i][1]>cost[i][0]){
					sum+=cost[i][0];
					read=0;
				}
				else {
					sum+=cost[i][1];
					read=1;
				}
			}
		}
	}

	cout<<sum<<endl;

}*/
