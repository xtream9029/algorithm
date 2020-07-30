/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;//k번째 데이터 제거

	if(n==1 && k==1){//이 testcase 하나 때문에 틀렸습니다가 뜬거 엿음
		cout<<"<"<<1<<">"<<endl;
		return 0;//여기서 main문을 종료 시켜버리기 때문에 따로 else문이 필요하지 않음
	}

	queue<int> q;

	for(int i=1;i<=n;i++){
		q.push(i);
	}

	int cnt=1;

	//출력 양식만 바꿔주면 정답 처리가 될거임
	cout<<"<";
	while(!q.empty()){
		if(cnt==k){
			if(q.size()==n) cout<<q.front()<<",";
			else if(q.size()>1) cout<<" "<<q.front()<<",";
			else if(q.size()==1) cout<<" "<<q.front();
			q.pop();
			cnt=1;
		}

		else{
			int data=q.front();
			q.pop();
			q.push(data);
			cnt++;
		}
	}
	cout<<">";

}*/
