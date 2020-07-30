/*#include <iostream>
using namespace std;

struct zeroOne{
	int x;
	int y;
};

int main(){
	int N;
	cin>>N;
	zeroOne A[41];

	A[0].x=1;
	A[0].y=0;

	A[1].x=0;
	A[1].y=1;

	for(int i=2;i<41;i++){
		A[i].x=A[i-2].x+A[i-1].x;
		A[i].y=A[i-2].y+A[i-1].y;
	}

	for(int i=0;i<N;i++){
		int a;
		cin>>a;
		cout<<A[a].x<<" "<<A[a].y<<endl;
	}

}*/
