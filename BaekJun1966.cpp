/*#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int cnt=0;//몇번째로 나오는지를 카운팅하는 변수

struct DATA{
	int x;
	int y;
};

int main(){
	int tc;

	scanf("%d",&tc);

	for(int i=0;i<tc;i++){//tase case 만큼 loop를 돌아야하므로
		int n;
		int m;
		scanf("%d %d",&n,&m);
		int dis;
		queue <DATA> q;
		vector <DATA> v;

		int *A=new int[n];

		for(int j=0;j<n;j++){
			scanf("%d",&A[j]);
		}

		for(int j=0;j<n;j++){//초기 큐 벡터 만들기
			DATA dat;
			dat.x=A[j];
			dat.y=j;
			q.push(dat);
			v.push_back(dat);
		}

		while(1){
			dis=0;
			DATA t=q.front();

			int k=t.x;

			//vector<DATA>::iterator iter;
			for(int j=1;j<v.size();j++){
				if(k<v[j].x){
					dis=1;
					break;//for
				}
			}

			if(dis==1){
				q.pop();
				q.push(t);
				v.erase(v.begin()+0);
				v.push_back(t);
			}

			else if(dis==0 && t.y!=m){
				q.pop();
				v.erase(v.begin()+0);
				cnt++;
			}

			else if(dis==0 && t.y==m){
				cnt++;
				break;
			}
		}//while

		printf("%d\n",cnt);
		cnt=0;
	}//for tc
}*/
