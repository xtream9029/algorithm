/*#include <iostream>
#include <algorithm>
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

	for(int i=0;i<n;i++){
		printf("%d",A[i].x);
		printf(" ");
		printf("%d",A[i].y);

		if(i!=n-1) printf("\n");
	}

}*/
