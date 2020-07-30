/*#include <iostream> //성공
#include <String.h>
using namespace std;

int main(){
	int N;
	string num;
	string copyS;
	cin>>N;
	cin.ignore();

	getline(cin,num);//한줄로 입력받기위해 문자열로 입력 받음

	int *A=new int[N];
	int x=0;
	for(int i=0;i<num.length();i++){
		if(num[i]==' '){
			A[x]=atoi(copyS.c_str());
			copyS="";
			x+=1;
		}
		else{
			copyS+=num[i];
		}
	}
	A[x]=atoi(copyS.c_str());

	int max=A[0];
	for(int i=0;i<N;i++){
		if(A[i]>=max) max=A[i];
	}

	int min=A[0];
	for(int i=1;i<N;i++){
		if(A[i]<min) min=A[i];
	}

	cout<<min<<" "<<max<<endl;
}*/
