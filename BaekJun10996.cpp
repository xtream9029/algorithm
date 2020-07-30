/*#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;

	if(n==1){
		cout<<"*"<<endl;
	}


	else{

		if(n%2==0){

			for(int i=0;i<n;i++){

				for(int j=1;j<=n/2;j++){
					if(j%2==1) cout<<"*";

					else if(j%2==0 && j!=n/2) cout<<" ";
				}

				cout<<endl;

				for(int j=1;j<=n/2;j++){
					if(j%2==1) cout<<" ";

					else if(j%2==0) cout<<"*";
				}

			}

		}

		else if(n%2==1){

		}

	}
}*/
