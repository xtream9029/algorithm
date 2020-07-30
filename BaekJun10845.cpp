/*#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	queue<int> q;
	cin>>n;//숫자를 입력받을때는 바로 변수에 저장하기 때문에 버퍼가 필요 없음
	cin.ignore();//입력 버퍼 전체를 비우는게 아니라 맨 앞의 문자하나를 지움

	for(int i=0;i<n;i++){
		string s;
		vector<char> v;
		getline(cin,s);//공백을 포함한 문자열 입력 받기

		if(s[0]=='p' && s[1]=='u'){//push
			int index;

			for(int j=0;j<s.length();j++){
				if(s[j]==' '){
					index=j;
					break;
				}
			}

			for(int j=index+1;j<s.length();j++){
				v.push_back(s[j]);
			}

			char A[v.size()];

			for(int j=0;j<v.size();j++){
				A[j]=v[j];
			}

			q.push(atoi(A));
		}

		else if(s[0]=='p' && s[1]=='o'){//pop;
			if(q.empty()) printf("%d\n",-1);

			else{
				int x=q.front();
				printf("%d\n",x);
				q.pop();
			}
		}

		else if(s[0]=='s'){//size
			printf("%d\n",q.size());
		}

		else if(s[0]=='e'){//empty
			if(q.empty()) printf("%d\n",1);

			else printf("%d\n",0);
 		}

		else if(s[0]=='f'){//front
			if(q.empty()) printf("%d\n",-1);

			else printf("%d\n",q.front());

		}

		else if(s[0]=='b'){//back
			if(q.empty()) printf("%d\n",-1);

			else printf("%d\n",q.back());
		}

	}
}*/
