/*#include <iostream>
#include <vector>
using namespace std;

int A[51][51]={0};
bool check[51][51]={false};

void graphTravel(int id1,int id2){//이게 DFS?

	//if(check[id1][id2]==true) return 0;

	check[id1][id2]=true;

	if(A[id1][id2+1]==1 && check[id1][id2+1]==false){//동
		graphTravel(id1,id2+1);
	}

	if(A[id1+1][id2]==1 && check[id1+1][id2]==false){//남
		graphTravel(id1+1,id2);
	}

	if(A[id1][id2-1]==1 && check[id1][id2-1]==false){//서
		graphTravel(id1,id2-1);
	}

	if(A[id1-1][id2]==1 && check[id1-1][id2]==false){//북
		graphTravel(id1-1,id2);
	}

	if(A[id1+1][id2+1]==1 && check[id1+1][id2+1]==false){
		graphTravel(id1+1,id2+1);
	}

	if(A[id1+1][id2-1]==1 && check[id1+1][id2-1]==false){
		graphTravel(id1+1,id2-1);
	}

	if(A[id1-1][id2+1]==1 && check[id1-1][id2+1]==false){
		graphTravel(id1-1,id2+1);
	}

	if(A[id1-1][id2-1]==1 && check[id1-1][id2-1]==false){
		graphTravel(id1-1,id2-1);
	}

}

int main(){
	int cnt;

	while(1){
		int a,b;

		cin>>a>>b;

		if(a==0 && b==0) return 0;

		cnt=0;

		for(int i=0;i<51;i++){
			for(int j=0;j<51;j++){
				A[i][j]=0;
			}
		}

		for(int i=1;i<=b;i++){//입력
			for(int j=1;j<=a;j++){
				cin>>A[i][j];
			}
		}

		for(int i=1;i<=b;i++){//check
			for(int j=1;j<=a;j++){
				check[i][j]=false;
			}
		}

		for(int i=1;i<=b;i++){
			for(int j=1;j<=a;j++){
				if(A[i][j]==1 && check[i][j]==false) {
					graphTravel(i,j);
					cnt++;
				}
			}
		}

		cout<<cnt<<endl;

	}
}*/
