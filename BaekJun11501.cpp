/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int profit=0;//최종 출력 결과
		int day;
		cin>>day;
		int *A=new int[day];

		for(int j=0;j<day;j++){
			cin>>A[j];
		}

		int max=A[0];
		int maxindex;

		for(int j=1;j<day;j++){//처음 맥스값 찾기
			if(max<A[j]){
				max=A[j];
				maxindex=j;
			}
		}

		for(int j=0;j<maxindex;j++){
			profit+=max-A[j];
		}

		while(maxindex<day-1){

			int x=maxindex+1;
			max=A[maxindex+1];

			for(int j=x+1;j<day;j++){
				if(max<A[j]) {
					max=A[j];
					maxindex=j;
				}
			}

			for(int j=x;j<maxindex;j++){
				profit+=max-A[j];
			}

		}

		cout<<profit<<endl;
	}
}*/
