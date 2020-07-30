/*#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		int *A=new int[a];
		for(int i=0;i<a;i++){
			cin>>A[i];
		}

		double sum=0;
		for(int i=0;i<a;i++){
			sum+=A[i];
		}
		double cnt=0;
		double min=sum/a;
		double p;
		for(int i=0;i<a;i++){
			if(A[i]>min) cnt+=1;
		}
		p=cnt/a;
		printf("%.3f%\n",p*100);
	}
}*/
