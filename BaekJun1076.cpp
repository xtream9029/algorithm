/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	long long int sum;

	vector<string> v;

	for(int i=0;i<3;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}

	for(int i=0;i<3;i++){
		if(i==0){
			if(v[i]=="black"){
				sum=10*0;
			}
			else if(v[i]=="brown"){
				sum=10*1;
			}
			else if(v[i]=="red"){
				sum=10*2;
			}
			else if(v[i]=="orange"){
				sum=10*3;
			}
			else if(v[i]=="yellow"){
				sum=10*4;
			}
			else if(v[i]=="green"){
				sum=10*5;
			}
			else if(v[i]=="blue"){
				sum=10*6;
			}
			else if(v[i]=="violet"){
				sum=10*7;
			}
			else if(v[i]=="grey"){
				sum=10*8;
			}
			else if(v[i]=="white"){
				sum=10*9;
			}
		}
		else if(i==1){
			if(v[i]=="black"){
				sum+=0;
			}
			else if(v[i]=="brown"){
				sum+=1;
			}
			else if(v[i]=="red"){
				sum+=2;
			}
			else if(v[i]=="orange"){
				sum+=3;
			}
			else if(v[i]=="yellow"){
				sum+=4;
			}
			else if(v[i]=="green"){
				sum+=5;
			}
			else if(v[i]=="blue"){
				sum+=6;
			}
			else if(v[i]=="violet"){
				sum+=7;
			}
			else if(v[i]=="grey"){
				sum+=8;
			}
			else if(v[i]=="white"){
				sum+=9;
			}
		}
		else if(i==2){
			if(v[i]=="black"){
				sum*=1;
			}
			else if(v[i]=="brown"){
				sum*=10;
			}
			else if(v[i]=="red"){
				sum*=100;
			}
			else if(v[i]=="orange"){
				sum*=1000;
			}
			else if(v[i]=="yellow"){
				sum*=10000;
			}
			else if(v[i]=="green"){
				sum*=100000;
			}
			else if(v[i]=="blue"){
				sum*=1000000;
			}
			else if(v[i]=="violet"){
				sum*=10000000;
			}
			else if(v[i]=="grey"){
				sum*=100000000;
			}
			else if(v[i]=="white"){
				sum*=1000000000;
			}
		}
	}

	cout<<sum<<endl;
}*/
