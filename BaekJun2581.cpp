/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int cnt=0;

int primeNum(int n){
	int d=0;

	if(n==1) return 1;

	for(int i=2;i<n;i++){
		if(n%i==0) {
			d=1;
			break;
		}
	}

	if(d==0){
		v.push_back(n);
	}

	return d;
}

int main(){
	int n,m;
	cin>>m;
	cin>>n;

	if(n==m){
		int k;
		k=primeNum(n);

		if(k==0){
			cout<<n+n<<endl;
			cout<<n<<endl;
		}

		else if(k==1){
			cout<<-1<<endl;
		}

		return 0;
	}

	else{

		for(int i=m;i<=n;i++){
			if(i==1) continue;
			int k;
			k=primeNum(i);

			if(k==0){
				cnt++;
			}
		}

		if(cnt==0){
			cout<<-1<<endl;
		}

		else{

			sort(v.begin(),v.end());

			if(v.size()==1){
				cout<<v[0]<<endl;
				cout<<v[0]<<endl;
			}

			else if(v.size()>1){
				int sum=0;
				for(int i=0;i<v.size();i++){
					sum+=v[i];
				}
				cout<<sum<<endl;
				cout<<v[0]<<endl;
			}
		}

	}

}*/

