/*#include <iostream>
#include <algorithm>
using namespace std;

struct data{
	int age;
	char name[101];
};

bool cmp(data a,data b){
	return a.age<b.age;
}

int main(){
	int n;
	scanf("%d",&n);

	data *A=new data[n];

	for(int i=0;i<n;i++){
		scanf("%d %s",&A[i].age,A[i].name);
	}

	stable_sort(A,A+n,cmp);

	for(int i=0;i<n;i++){
		printf("%d",A[i].age);
		printf(" ");
		printf("%s",A[i].name);

		if(i!=n-1) printf("\n");
	}

}*/
