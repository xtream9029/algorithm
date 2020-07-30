/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){

	//바로 밑에 2줄이 어떤 의미인지 알아볼것
	cin.tie(0);
	cin.sync_with_stdio(false);//c표준 stream과 c++표준 stream의 동기화를 끊는동작 -->c와 c++ 입출력 방식을 혼용해서 쓰면 매우 위험한 코드가 됨

	queue<int> q;

	int n;
	cin>>n;
	cin.ignore();//왜 cin.clear로 하면 안되는지 잘 모르겠음

	for(int i=0;i<n;i++){//명령 개수
		string s;
		getline(cin,s);//공백을 포함한 입력,만약 printf scanf 를 이용한다면 string class를 이용할 수 없음

		if(s[0]=='p' && s[1]=='u'){//push 이 부분이 가장 어려움
			char *num=new char[6];

			for(int j=5;j<s.length();j++){
				num[j-5]=s[j]-'0'+48;
			}

			q.push(atoi(num));//문자열 배열 --> 숫자로 바꿔주는 함수 사용(atoi)

			delete(num);//동적 할당 해제

		}

		else if(s[0]=='p' && s[1]=='o'){//pop

			if(q.empty()) cout<<-1<<'\n';

			else{//큐가 비어 있지 않을 때
				int data=q.front();

				cout<<data<<'\n';

				q.pop();
			}
		}

		else if(s[0]=='s'){//size
			cout<<q.size()<<'\n';
		}


		else if(s[0]=='e'){//empty
			if(q.empty()) cout<<1<<'\n';

			else if(!q.empty()) cout<<0<<'\n';
 		}


		else if(s[0]=='f'){//front
			if(q.empty()) cout<<-1<<'\n';

			else{
				cout<<q.front()<<'\n';
			}
		}

		else if(s[0]=='b'){//back
			if(q.empty()) cout<<-1<<'\n';

			else{
				cout<<q.back()<<'\n';
			}
		}

	}

}*/
