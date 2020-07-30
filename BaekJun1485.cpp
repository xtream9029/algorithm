/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct data{
	int x;
	int y;
};

int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		vector<int> v;
		data A,B,C,D;
		cin>>A.x>>A.y;
		cin>>B.x>>B.y;
		cin>>C.x>>C.y;
		cin>>D.x>>D.y;

		int d1=(A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y);//AB의 길이
		int d2=(A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y);//AC의 길이
		int d3=(A.x-D.x)*(A.x-D.x)+(A.y-D.y)*(A.y-D.y);//AD의 길이
		int d4=(B.x-C.x)*(B.x-C.x)+(B.y-C.y)*(B.y-C.y);//BC의 길이
		int d5=(B.x-D.x)*(B.x-D.x)+(B.y-D.y)*(B.y-D.y);//BD의 길이
		int d6=(C.x-D.x)*(C.x-D.x)+(C.y-D.y)*(C.y-D.y);//CD의 길이

		v.push_back(d1);
		v.push_back(d2);
		v.push_back(d3);
		v.push_back(d4);
		v.push_back(d5);
		v.push_back(d6);

		sort(v.begin(),v.end());

		if((v[0]==v[1] && v[0]==v[2] && v[0]==v[3] && v[1]==v[2] && v[1]==v[3] && v[2]==v[3] )&& (v[4]==v[5])){
			cout<<1<<endl;
		}

		else cout<<0<<endl;
	}

}*/
