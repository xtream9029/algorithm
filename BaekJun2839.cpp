/*#include <iostream>
#include <vector>
using namespace std;

int sugarDeliver(int N){
	int a=3;
	int b=5;
	vector<int> v;
	int min=0;

	for(int i=0;i<=1000;i++){
		for(int j=0;j<=1000;j++){
			if(a*i+b*j==N){
				v.push_back(i+j);
			}
		}
	}

	if(v.size()==0) return -1;

	else if(v.size()==1) return v[0];

	else{
		min=v[0];
		for(int i=0;i<v.size();i++){
			if(min>v[i]) min=v[i];
		}
		return min;
	}

}

int main(){
	int N;
	cin>>N;

	int k=sugarDeliver(N);

	cout<<k<<endl;
}*/
