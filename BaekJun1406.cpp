/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct node{
	node * front;
	char data;
	node *rear;
};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	int n;
	cin>>n;
	node *head;
	node *tail;
	node *cursor;

	for(int i=0;i<s.length();i++){
		if(i==0){
			node *newNode =new node;
			newNode->front=NULL;
			newNode->data=s[i];
			newNode->rear=NULL;
			head=newNode;
			tail=newNode;
		}

		else{
			node *newNode=new node;
			newNode->front=NULL;
			newNode->data=s[i];
			newNode->rear=NULL;
			tail->rear=newNode;
			newNode->front=tail;
			tail=newNode;
		}
	}

	node *newNode =new node;
	newNode->front=NULL;
	newNode->data=' ';
	newNode->rear=NULL;
	tail->rear=newNode;
	newNode->front=tail;
	tail=newNode;

	cursor=tail;

	for(int i=0;i<n;i++){
		char cmd;
		cin>>cmd;

		if(cmd=='L'){
			if(cursor==head){
				continue;
			}

			cursor=cursor->front;
		}

		else if(cmd=='D'){
			if(cursor==tail){
				continue;
			}

			cursor=cursor->rear;
		}

		else if(cmd=='B'){
			if(cursor==head){
				continue;
			}

			else if(cursor->front==head){
				node *delNode=head;
				head=cursor;
				head->front=NULL;

				free(delNode);
			}

			else {
				node *delNode=cursor->front;
				node *tmp=delNode;

				tmp->front->rear=cursor;
				cursor->front=tmp->front;
				free(delNode);
			}

		}

		else if(cmd=='P'){
			char c;
			cin>>c;

			if(cursor==head){
				 node *newNode =new node;
				 newNode->front=NULL;
				 newNode->data=c;
				 newNode->rear=NULL;

				 newNode->rear=head;
				 head->front=newNode;
				 head=newNode;
			}

			else if(cursor!=head){
				node *newNode =new node;
				newNode->front=NULL;
				newNode->data=c;
				newNode->rear=NULL;

				node *tmp=cursor->front;
				tmp->rear=newNode;
				newNode->front=tmp;

				newNode->rear=cursor;
				cursor->front=newNode;
			}
		}
	}

	node *tmp=head;

	while(tmp!=NULL){
		cout<<tmp->data;
		tmp=tmp->rear;
	}


	return 0;

}*/
