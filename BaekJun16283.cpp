/*#include <iostream>
using namespace std;

int main(){
	int a,b,n,w;
	cin>>a>>b>>n>>w;

	if(a==b){//부정 혹은 불능 가능한 경우 딱 한가지
		if(n==2 && w/a==n) cout<<1<<" "<<1<<endl;
		else cout<<-1<<endl;
	}
	else{
		double fakex=(w-b*n)/(a-b);
		double fakey=(w-a*n)/(b-a);
		int x;
		int y;
		if((fakex-int(fakex))==0 && fakex>0){
			x=int(fakex);
		}
		else x=-1;

		if((fakey-int(fakey))==0 && fakey>0){
			y=int(fakey);
		}
		else y=-1;

		if(x>=1 && y>=1 && x+y==n){
		cout<<x<<" "<<y<<endl;
		}
		else cout<<-1<<endl;
	}

}*/


