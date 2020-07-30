/*#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k;

	int maxNum=n;
	vector<char> v; //나중에 한줄씩 출력하기 위해

	bool *check=new bool[n+1];
	fill(check,check+n+1,false);

	int *A=new int[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	stack<int> s;
	//push ,pop 할때마다 문자 출력
	//push-> 해당숫자 check 해줄것(true 로)

	for(int i=0;i<n;i++){
		k=1;
		while(k<=A[i]){
			if(check[k]==false){
				s.push(k);
				check[k]=true;
				v.push_back('+');//push
			}
		}

		if(s.top()==maxNum){
			while(!s.empty()){

			}
		}
		s.pop();
		v.push_back('-');
	}

	return 0;
}*/
