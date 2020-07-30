/*#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
	int N;
	cin>>N;
	int oneNumber=0;
	int a,b,c;
	if(N/10 <10) {
		oneNumber=N;
		cout<<oneNumber<<endl;
		return 0;
	}
	else{
		for(int i=100;i<=N;i++){
			a=i/100;//백의자리수
			b=(i-a*100)/10;//십의자리수
			c=(i-a*100)-b*10;//일의자리수
			if((b-a)==(c-b)){
				oneNumber+=1;
			}
		}
		cout<<99+oneNumber<<endl;
		return 0;
	}
}*/
