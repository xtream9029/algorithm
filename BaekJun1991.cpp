/*#include <iostream>
#include <vector>
using namespace std;

struct node{
	char data;
	node *left;
	node *right;
};

node* search(node* tree,char item){//내가 짯던 search 함수랑 뭐가 다른지 비교해볼것
	if(tree!=NULL){
		if(tree->data==item) return tree;
		else{
			//결국 몾찾아 NULL이 리턴됐을때 처리하는 방식
			node *tmp=search(tree->left,item);
			if(tmp!=NULL) return tmp;

			return search(tree->right,item);
		}
	}
	return NULL;
}

void preorder(node *tree){
	if(tree!=NULL){
		cout<<tree->data;
		preorder(tree->left);
		preorder(tree->right);
	}
}

void inorder(node *tree){
	if(tree!=NULL){
		inorder(tree->left);
		cout<<tree->data;
		inorder(tree->right);
	}
}

void postorder(node *tree){
	if(tree!=NULL){
		postorder(tree->left);
		postorder(tree->right);
		cout<<tree->data;
	}
}

int main(){
	int n;
	node *root=NULL;
	node *current=NULL;
	cin>>n;
	for(int i=0;i<n;i++){

		char a,b,c;
		cin>>a>>b>>c;

		if(i==0){//첫번째 입력에서는 .이 없다고 가정
			node *newNode=new node;
			newNode->data=a;
			newNode->left=NULL;
			newNode->right=NULL;
			root=newNode;

			if(b!='.'){
				node *newNode1=new node;
				newNode1->data=b;
				newNode1->left=NULL;
				newNode1->right=NULL;
				root->left=newNode1;
			}

			if(c!='.'){
				node *newNode2=new node;
				newNode2->data=c;
				newNode2->left=NULL;
				newNode2->right=NULL;
				root->right=newNode2;
			}
		}

		else if(i>=1){
			current=search(root,a);
			//cout<<current->data<<endl;

			if(b!='.'){
				node *newNode=new node;
				newNode->data=b;
				newNode->left=NULL;
				newNode->right=NULL;
				current->left=newNode;
			}

			if(c!='.'){
				node *newNode=new node;
				newNode->data=c;
				newNode->left=NULL;
				newNode->right=NULL;
				current->right=newNode;
			}
		}
	}

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
}*/
