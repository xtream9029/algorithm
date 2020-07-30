/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
	int tc;
	cin>>tc;
	int discrem=0;


	for(int i=0;i<tc;i++){
		int h,w,n;
		cin>>h>>w>>n;
		int cnt=1;

		int finalH=0;
		int finalW=0;

		for(int a=1;a<=w;a++){

			for(int b=1;b<=h;b++){

				if(cnt==n){//discrem변수를 이용해서 여기를 거쳣는지 판별하는 방식--여러 문제에서 이용됨
					finalW=a;
					finalH=b;
					discrem=1;
					break;
				}

				cnt++;
			}

			if(cnt==n && discrem==1) break;//이 부분이 잘못됐엇음 cnt가 하나 증가되면서 위에서는 final이 결정되지 않았는데 여기서 break를 시켜버림
		}

		cout<<finalH*100+finalW<<endl;

		discrem=0;
	}

}*/
