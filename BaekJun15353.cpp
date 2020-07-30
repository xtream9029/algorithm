/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	while(a>0){
		v1.push_back(a%10);
		a/=10;
	}

	while(b>0){
		v2.push_back(b%10);
		b/=10;
	}

	if(v1.size()==v2.size()){
		for(int i=0;i<v1.size();i++){
			if(v1[i]+v2[i]<10){
				v3.push_back(v1[i]+v2[i]);
			}

			else if(v1[i]+v2[i]>=10 && i==v1.size()-1){
				v3.push_back((v1[i]+v2[i])%10);
				v3.push_back(1);
			}

			else if(v1[i]+v2[i]>=10 && i<v1.size()-1){
				v3.push_back((v1[i]+v2[i])%10);
				v1[i+1]+=1;
			}
		}
	}

	for(int i=v3.size();i>=0;i--){
		cout<<v3[i];
	}
}*/
