/*#include <iostream>
#include <vector>
using namespace std;

struct zz{
	int x;
	int y;
};

int main(){
	zz a[4];
	int s;
	vector<int> v;
	for(int i=0;i<4;i++){
		cin>>a[i].x>>a[i].y;
	}
	s=a[0].x+a[0].y;
	v.push_back(s);

	for(int i=1;i<4;i++){
		int k=v[i-1]-a[i].x+a[i].y;
		v.push_back(k);
	}

	int max=v[0];

	for(int i=1;i<v.size();i++){
		if(max<v[i]) max=v[i];
	}

	cout<<max<<endl;
}*/
