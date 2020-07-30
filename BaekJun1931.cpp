/*#include <iostream>
#include <algorithm>
using namespace std;

struct data{
	int x;
	int y;
};

bool compare(data a,data b){//정렬에서 알게된 새로운 스킬--사용자 정의 정렬

	if(a.y==b.y){
		return a.x<b.x;
	}

	return a.y < b.y;
}

int main(){
	int n;
	cin>>n;

	data *A=new data[n];

	for(int i=0;i<n;i++){
		cin>>A[i].x>>A[i].y;
	}

	//soring 좌표 정렬
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(A[i].y<A[j].y) {//좌표 배열 swap
				int tmpx,tmpy;
				tmpx=A[j].x;
				tmpy=A[j].y;

				A[j].x=A[i].x;
				A[j].y=A[i].y;

				A[i].x=tmpx;
				A[i].y=tmpy;
			}
		}
	}//

	sort(A,A+n,compare);

	int k=A[0].y;
	int cnt=1;

	for(int i=1;i<n;i++){
		if(k<=A[i].x){
			cnt++;
			k=A[i].y;
		}
	}

	cout<<cnt<<endl;

}*/
