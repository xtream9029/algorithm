/*#include <iostream>  배열 없이 데이터들을 정렬해야함 메모리 제한 때문에
#include <algorithm>
using namespace std;

int main(){
	int N;//auto는 초기화 한 값에따라 알아서 자료형을 결정해줌
	cin>>N;
	auto *A=new int[N];
	for(int i=0;i<N;i++){
		cin>>A[i];
	}

	sort(A,A+N);

	for(int i=0;i<N;i++){
		cout<<A[i]<<endl;
	}
}*/
