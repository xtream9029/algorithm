/*#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<long long int> v;

	v.push_back(1);
	v.push_back(1);

	for(int i=2;i<n;i++){
		v.push_back(v[i-2]+v[i-1]);
	}

	cout<<v[n-1]<<endl;
}*/
