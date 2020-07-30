/*#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct DATA{
	int r;
	int c;
};

int n;
int cnt;
vector<DATA> v;

bool isPutable(int x,int y){//검사만 하는 함수 벡터의 성분을 바꾸지 않음
	//(x,y)는 현재 들어갈 좌표 벡터안의 있는 모든 좌표와 검사를 해야 함
	for(int i=0;i<v.size();i++){
		if((v[i].c==y) || (abs(v[i].r-x)==abs(v[i].c-y))){//같은 열에도 있으면 안되고 대각선에도 있으면 안됨
			return false;
		}
	}

	return true;
}

void DFS(int x,int y){//똑같은 행위를 반복하므로 재귀적으로 로직을 짬
	//cout<<v.size()<<endl;
	if(v.size()==n){
		cnt++;
		//v.clear();
		return ;
	}

	for(int i=1;i<=n;i++){//열 개수만큼은 반복해야 함
		if(isPutable(x+1,i)){//x+1은 현재 처리할 행 번호
			DATA t;
			t.r=x+1;
			t.c=i;
			v.push_back(t);
			DFS(x+1,i);
			v.erase(v.begin()+v.size()-1);//마지막 원소 제거 이부분에서 런타임 에러가 발생하였음 왜 v.end()는 안되는지 고민해볼것
		}
	}


	return ;
}

int main(){

	cin>>n;

	for(int i=1;i<=n;i++){//반복문 안에서 계속 벡터를 생성 --> 초기화의 의미
		DATA t;
		t.r=1;
		t.c=i;
		v.push_back(t);
		DFS(1,i);//모든 경우를 다돌고 카운팅 해줘야 하므로
		v.clear();
	}

	cout<<cnt<<endl;

	return 0;

}*/
