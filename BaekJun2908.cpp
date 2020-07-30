/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int a,b;
	vector<int> va;
	vector<int> vb;
	cin>>a>>b;

	while(a>0){
		va.push_back(a%10);
		a/=10;
	}

	while(b>0){
		vb.push_back(b%10);
		b/=10;
	}


	int xa=100*va[0]+10*va[1]+va[2];
	int xb=100*vb[0]+10*vb[1]+vb[2];


	if(xa>xb) cout<<xa<<endl;
	else cout<<xb<<endl;
}*/
