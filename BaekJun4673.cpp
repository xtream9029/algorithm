/*#include <iostream>
using namespace std;

int digitSum(int n){
	for(int i=1;i<n;i++){//생성자 있는지 찾기 생성자는 i가 될 수 있음
		int k=i;
		int sum=i;
		while(k>=1){
			sum+=(k%10);
			k/=10;
		}
		if(sum==n) return 1;
	}
	return -1;
}

int main(){
	//주어진 힌트를 최대한 이용해서 배낌
	cout<<1<<endl;
	cout<<3<<endl;
	cout<<5<<endl;
	cout<<7<<endl;
	cout<<9<<endl;
	cout<<20<<endl;
	cout<<31<<endl;
	cout<<42<<endl;
	cout<<53<<endl;
	cout<<64<<endl;
	cout<<75<<endl;
	cout<<86<<endl;
	cout<<97<<endl;

	for(int i=98;i<10001;i++){
		int j=14;
		int k=digitSum(i);
		if(k==-1) cout<<i<<endl;
		else if(k==1) continue;//1이 리턴 됐다는건 생성자가 있다는 뜻임
	}

}*/
