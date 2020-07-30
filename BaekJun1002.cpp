/*#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){//두 원의 교점의 개수
	int n;
	cin>>n;

	for(int i=0;i<n;i++){

		double x1,y1,r1,x2,y2,r2;

		cin>>x1>>y1>>r1>>x2>>y2>>r2;

		double d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//두 원의 중심 사이의 거리

		//cout<<d<<endl;

		if(d>r1+r2) cout<<0<<endl; //교점이 0 개

		else if(d==r1+r2) cout<<1<<endl; //두 원이 외부에서 접할 때

		else if(d<r1+r2){
			int maxr=max(r1,r2);

			int minr=min(r1,r2);

			if(d==abs(r2-r1)) {
				if(d==0) cout<<-1<<endl;
				else cout<<1<<endl;
			}

			else if(maxr>d+minr){
				cout<<0<<endl;
			}

			else cout<<2<<endl;
		}
	}
}*/
