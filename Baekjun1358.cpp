/*#include <iostream>
#include <algorithm>
#include <cmath>//기하 알고리즘 문제에서 자주 사용될 헤더 파일
using namespace std;

struct data{
	int x;
	int y;
};

int main(){
	int W,H,X,Y,P;
	cin>>W>>H>>X>>Y>>P;
	int cnt=0;//링크안에 있는 선수들의 수
	data *A=new data[P];

	for(int i=0;i<P;i++){
		cin>>A[i].x>>A[i].y;
	}

	for(int i=0;i<P;i++){
		if(X<=A[i].x && A[i].x<=X+W && Y<=A[i].y && A[i].y<=Y+H){
			cnt++;
		}

		else if(X-H/2<=A[i].x && A[i].x<=X && Y+H/2-sqrt((H*H)/4-(A[i].x-X)*(A[i].x-X))<=A[i].y && A[i].y<=Y+H/2+sqrt((H*H)/4-(A[i].x-X)*(A[i].x-X))){
			cnt++;
		}

		else if(X+W<=A[i].x && A[i].x<=X+W+H/2 && Y+H/2-sqrt((H*H)/4-(A[i].x-(X+W))*(A[i].x-(X+W)))<=A[i].y && A[i].y<=Y+H/2+sqrt((H*H)/4-(A[i].x-(X+W))*(A[i].x-(X+W)))){
			cnt++;
		}
	}

	cout<<cnt<<endl;

}*/
