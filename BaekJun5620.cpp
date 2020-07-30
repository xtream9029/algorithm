/*#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

struct data{
	int x;
	int y;
};

bool cmp(data a,data b){
	if(a.x==b.x) return a.y<b.y;

	return a.x<b.x;
}

int main(){
	int n;
	scanf("%d",&n);
	data *A=new data[n];

	for(int i=0;i<n;i++){
		scanf("%d %d",&A[i].x,&A[i].y);
	}

	sort(A,A+n,cmp);

	int min;//가장 가까운 두점 사이의 거리의 제곱
	min=(A[1].x-A[0].x)*(A[1].x-A[0].x)+(A[1].y-A[0].y)*(A[1].y-A[0].y);

	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(i==j) continue;

			else{
				int d=(A[i].x-A[j].x)*(A[i].x-A[j].x)+(A[i].y-A[j].y)*(A[i].y-A[j].y);
				if(min>d) min=d;
			}
		}
	}

	cout<<min<<endl;
}*/
