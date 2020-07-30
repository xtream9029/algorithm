/*#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
	string A;
	string B;
	cin>>A>>B;

	int min;
	int cnt=0;

	for(int k=0;k<A.length();k++){
		if(A[k]!=B[k]) cnt+=1;
	}

	min=cnt;

	int i=1;
	cnt=0;

	char *x=new char[A.length()];
	//배열 x와 배열 A를 비교할거임 string 과 char 원소의 비교이긴한데 일단 시도해봄
	while(i+A.length()<=B.length()){
		for(int j=0;j<A.length();j++){
			x[j]=B[j+i];
		}

		for(int j=0;j<A.length();j++){
			if(A[j]!=x[j]) cnt+=1;
		}

		if(min>cnt) min=cnt;

		i++;
		cnt=0;
	}

	cout<<min<<endl;
}*/
