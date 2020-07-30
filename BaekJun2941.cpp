/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	char *A=new char[101];

	fill(A,A+101,' ');

	cin>>A;

	int index;

	for(int i=0;i<101;i++){
		if(A[i]==' ') {
			index=i-1;//이해 안되는 부분
			break;
		}
	}

	int stringlength=index;

	int k=0;
	int cnt=0; //알파벳의 개수

	while(k<101){

		if(A[k]==' ') break;

		if(A[k]=='c' && A[k+1]=='=') {
			cnt++;
			k=(k+1)+1;
		}

		else if(A[k]=='c' && A[k+1]=='-'){
			cnt++;
			k=(k+1)+1;
		}

		else if(A[k]=='d' && A[k+1]=='z' && A[k+2]=='='){
			cnt++;
			k=(k+2)+1;
		}

		else if(A[k]=='d' && A[k+1]=='-'){
			cnt++;
			k=(k+1)+1;
		}

		else if(A[k]=='l' && A[k+1]=='j'){
			cnt++;
			k=(k+1)+1;
		}

		else if(A[k]=='n' && A[k+1]=='j'){
			cnt++;
			k=(k+1)+1;
		}

		else if(A[k]=='s' && A[k+1]=='='){
			cnt++;
			k=(k+1)+1;
		}

		else if(A[k]=='z' && A[k+1]=='='){
			cnt++;
			k=(k+1)+1;
		}

		else{
			cnt++;
			k+=1;
		}
	}

	cout<<cnt-1<<endl;
}*/
