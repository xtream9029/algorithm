/*#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N;
	vector<int> v;//heap
	scanf("%d",&N);
	int *A=new int[N];

	for(int i=0;i<N;i++){//명령 입력
		scanf("%d",&A[i]);
	}

	for(int i=0;i<N;i++){

		if(A[i]==0){//heap_delete ,max 출력 or 0 출력
			if(v.empty()) printf("%d\n",0);

			else if(!v.empty()){
				int k=v.size()-1;
				int max=v[0];
				printf("%d\n",max);
				//delete_heap
				v[0]=v[k];
				v.pop_back();

				if(v.size()==2 && v[0]<=v[1]){//노드가 2개일때는 배열과 다르게 rightchild 인덱스를 참조할수 없음 벡터라 따라서 경우를 따로 분류
					int tmp=v[0];
					v[0]=v[1];
					v[1]=tmp;
				}

				int current=0;//root 노드
				//rebuild heap
				while(2*current+2<=v.size()){
					int leftchild,rightchild,largerchild;
					leftchild=2*current+1;
					rightchild=leftchild+1;

					if(rightchild<v.size() && v[rightchild]>=v[leftchild]) largerchild=rightchild;
					else largerchild=leftchild;

					if(v[current]<=v[largerchild]){
						int tmp=v[current];
						v[current]=v[largerchild];
						v[largerchild]=tmp;
						current=largerchild;
					}

					else break;
				}
			}
		}

		else if(A[i]!=0){//heap_insert
				v.push_back(A[i]);//사이즈는 알아서 증가,일단 집어넣고봄
				int k=v.size()-1;
				int data=v[k];

				while(k!=0 && data>=v[(k-1)/2]){//새로운 데이터는 벡터 끝부분에 들어갈거임
					int tmp=v[k];
					v[k]=v[(k-1)/2];
					v[(k-1)/2]=tmp;
					k=(k-1)/2;
				}
		}
	}

}*/
