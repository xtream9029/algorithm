/*#include <iostream>
#include <vector>
#include <string>
using namespace std;
//매우 큰수 더하기 해당 자료형이 없음

int main(){
	vector<int> a;
	vector<int> b;
	vector<int> c;

	//주어진 숫자에 크기가 너무 크기때문에 반드시 문자열 처리를 해줘야 함
	string A;
	string B;

	cin>>A;
	cin>>B;

	for(int i=0;i<A.length();i++){
		a.push_back(int(A[i])-48);
	}

	//cout<<a.size()<<endl;

	for(int i=0;i<B.length();i++){
		b.push_back(int(B[i])-48);
	}

	//cout<<b.size()<<endl;

	if(a.size()==b.size()){//이건 맞음
		for(int i=a.size()-1;i>=0;i--){
			if(a[i]+b[i]>=10){
				if(i==0){
					c.push_back((a[i]+b[i])%10);
					c.push_back(1);
				}

				else{
					c.push_back((a[i]+b[i])%10);
					a[i-1]+=1;
				}
			}

			else if(a[i]+b[i]<10){
				c.push_back(a[i]+b[i]);
			}

		}

		for(int i=c.size()-1;i>=0;i--){
			cout<<c[i];
		}
	}

	else if(a.size()>b.size()){
		int sumfactor=0;//0 or 1 자리수 덧셈시 올림을 표현하기위해 만든 변수
		int x=a.size()-1;
		int y=b.size()-1;

		while(1){
			if(x<0) break;

			if(y<0){
				if(sumfactor+a[x]>=10){
					if(x==0){//마지막
						c.push_back(sumfactor+a[x]);
					}

					else if(x>0){
						c.push_back((sumfactor+a[x])%10);
						sumfactor=1;
					}
				}

				else if(sumfactor+a[x]<10){
					c.push_back((sumfactor+a[x])%10);
					sumfactor=0;
				}
			}

			else if(y>=0){
				if(sumfactor+a[x]+b[y]>=10){
					c.push_back((sumfactor+a[x]+b[y])%10);
					sumfactor=1;
				}

				else if(sumfactor+a[x]+b[y]<10){
					c.push_back((sumfactor+a[x]+b[y])%10);
					sumfactor=0;
				}

			}
			x--;
			y--;
		}//while

		for(int i=c.size()-1;i>=0;i--){
			cout<<c[i];
		}
	}

	else if(a.size()<b.size()){
		int sumfactor=0;//0 or 1 자리수 덧셈시 올림을 표현하기위해 만든 변수
		int x=a.size()-1;
		int y=b.size()-1;

		while(1){
			if(y<0) break;

			if(x<0){
				if(sumfactor+b[y]>=10){
					if(y==0){//마지막
						c.push_back(sumfactor+b[y]);
					}

					else if(y>0){
						c.push_back((sumfactor+b[y])%10);
						sumfactor=1;
					}
				}

				else if(sumfactor+b[y]<10){
					c.push_back((sumfactor+b[y])%10);
					sumfactor=0;
				}
			}

			else if(x>=0){
				if(sumfactor+a[x]+b[y]>=10){
					c.push_back((sumfactor+a[x]+b[y])%10);
					sumfactor=1;
				}

				else if(sumfactor+a[x]+b[y]<10){
					c.push_back((sumfactor+a[x]+b[y])%10);
					sumfactor=0;
				}

			}
			x--;
			y--;
		}//while

		for(int i=c.size()-1;i>=0;i--){
			cout<<c[i];
		}
	}

	return 0;

}*/
