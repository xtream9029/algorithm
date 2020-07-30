/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int d=0;
	int rcnt=0;
	int tc;
	cin>>tc;

	for(int i=0;i<tc;i++){
		deque<int> dv;
		vector<int> v;

		string func;//RDD
		int n;
		string numS;

		cin>>func;
		cin>>n;
		cin>>numS;

		for(int j=0;j<numS.length();j++){
			if(numS[j]!='[' && numS[j]!=']' && numS[j]!=','){
				v.push_back(int(numS[j])-48);
			}

			else if(numS[j]==']' || numS[j]==',') {//이 부분을 과연 어떻게 구현할것인가
				if(v.size()==1){
					dv.push_back(v[0]);
				}
				else if(v.size()==2){
					dv.push_back(v[0]*10+v[1]);
				}
				else if(v.size()==3){
					dv.push_back(100);
				}

				v.clear();
			}
		}


		for(int j=0;j<func.length();j++){
			if(func[j]=='R'){//뒤집기
				rcnt++;
			}

			else if(func[j]=='D'){//삭제
				if(!dv.empty()){
					if(rcnt%2==0){
						dv.pop_front();
					}
					else if(rcnt%2==1){
						dv.pop_back();
					}
				}
				else {
					d=1;
				}
			}
		}

		if(d!=1){

			if(rcnt%2==0){
				cout<<"[";
				for(int j=0;j<dv.size();j++){
					if(j!=dv.size()-1) cout<<dv[j]<<",";
					else if(j==dv.size()-1) cout<<dv[j];
				}
				cout<<"]";
			}

			else if(rcnt%2==1){
				cout<<"[";
				for(int j=dv.size()-1;j>=0;j--){
					if(j!=0)cout<<dv[j]<<",";
					else if(j==0) cout<<dv[j];
				}
				cout<<"]";
			}

			cout<<endl;
		}

		else cout<<"error"<<endl;

		d=0;
		rcnt=0;

	}

}*/


