/*#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	deque<int> dq;

	for(int i=0;i<n;i++){
		char *s=new char[10];
		scanf("%s",s);

		if(s[0]=='p' && s[1]=='u' && s[5]=='f'){//push_front
			int data;
			scanf("%d",&data);

			dq.push_front(data);
		}

		else if(s[0]=='p' && s[1]=='u' && s[5]=='b'){//push_back
			int data;
			scanf("%d",&data);

			dq.push_back(data);
		}

		else if(s[0]=='p' && s[1]=='o'){//pop
			if(dq.empty()) printf("%d\n",-1);

			else if(!dq.empty()){

				if(s[4]=='f'){//pop_front
					printf("%d\n",dq.front());
					dq.pop_front();
				}

				else if(s[4]=='b'){//pop_back
					printf("%d\n",dq.back());
					dq.pop_back();
				}
			}
		}

		else if(s[0]=='s'){
			printf("%d\n",dq.size());
		}

		else if(s[0]=='e'){

			if(dq.empty()){
				printf("%d\n",1);
			}

			else if(!dq.empty()) printf("%d\n",0);
		}

		else if(s[0]=='f'){
			if(dq.empty()) printf("%d\n",-1);

			else if(!dq.empty()) printf("%d\n",dq.front());
		}

		else if(s[0]=='b'){
			if(dq.empty()) printf("%d\n",-1);

			else if(!dq.empty()) printf("%d\n",dq.back());
		}

	}

	return 0;

}*/
