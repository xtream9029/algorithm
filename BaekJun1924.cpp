/*#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;


	if(x==1){//1월
		if(y%7==1){
			cout<<"MON"<<endl;
		}
		else if(y%7==2){
			cout<<"TUE"<<endl;
		}
		else if(y%7==3){
			cout<<"WED"<<endl;
		}
		else if(y%7==4){
			cout<<"THU"<<endl;
		}
		else if(y%7==5){
			cout<<"FRI"<<endl;
		}
		else if(y%7==6){
			cout<<"SAT"<<endl;
		}
		else if(y%7==0){
			cout<<"SUN"<<endl;
		}
	}

	else if(x==2){//2월
		if(y%7==1){
			cout<<"THU"<<endl;
		}
		else if(y%7==2){
			cout<<"FRI"<<endl;
		}
		else if(y%7==3){
			cout<<"SAT"<<endl;
		}
		else if(y%7==4){
			cout<<"SUN"<<endl;
		}
		else if(y%7==5){
			cout<<"MON"<<endl;
		}
		else if(y%7==6){
			cout<<"TUE"<<endl;
		}
		else if(y%7==0){
			cout<<"WED"<<endl;
		}
	}

	else if(x==3){//3월
		if(y%7==1){
			cout<<"THU"<<endl;
		}
		else if(y%7==2){
			cout<<"FRI"<<endl;
		}
		else if(y%7==3){
			cout<<"SAT"<<endl;
		}
		else if(y%7==4){
			cout<<"SUN"<<endl;
		}
		else if(y%7==5){
			cout<<"MON"<<endl;
		}
		else if(y%7==6){
			cout<<"TUE"<<endl;
		}
		else if(y%7==0){
			cout<<"WED"<<endl;
		}
	}

	else if(x==4){//4월
		if(y%7==1){
			cout<<"SUN"<<endl;
		}
		else if(y%7==2){
			cout<<"MON"<<endl;
		}
		else if(y%7==3){
			cout<<"TUE"<<endl;
		}
		else if(y%7==4){
			cout<<"WED"<<endl;
		}
		else if(y%7==5){
			cout<<"THU"<<endl;
		}
		else if(y%7==6){
			cout<<"FRI"<<endl;
		}
		else if(y%7==0){
			cout<<"SAT"<<endl;
		}
	}

	else if(x==5){
		if(y%7==1){
			cout<<"TUE"<<endl;
		}
		else if(y%7==2){
			cout<<"WED"<<endl;
		}
		else if(y%7==3){
			cout<<"THU"<<endl;
		}
		else if(y%7==4){
			cout<<"FRI"<<endl;
		}
		else if(y%7==5){
			cout<<"SAT"<<endl;
		}
		else if(y%7==6){
			cout<<"SUN"<<endl;
		}
		else if(y%7==0){
			cout<<"MON"<<endl;
		}
	}
	else if(x==6){
		if(y%7==1){
			cout<<"FRI"<<endl;
		}
		else if(y%7==2){
			cout<<"SAT"<<endl;
		}
		else if(y%7==3){
			cout<<"SUN"<<endl;
		}
		else if(y%7==4){
			cout<<"MON"<<endl;
		}
		else if(y%7==5){
			cout<<"TUE"<<endl;
		}
		else if(y%7==6){
			cout<<"WED"<<endl;
		}
		else if(y%7==0){
			cout<<"THU"<<endl;
		}
	}

	else if(x==7){
		if(y%7==1){
			cout<<"SUN"<<endl;
		}
		else if(y%7==2){
			cout<<"MON"<<endl;
		}
		else if(y%7==3){
			cout<<"TUE"<<endl;
		}
		else if(y%7==4){
			cout<<"WED"<<endl;
		}
		else if(y%7==5){
			cout<<"THU"<<endl;
		}
		else if(y%7==6){
			cout<<"FRI"<<endl;
		}
		else if(y%7==0){
			cout<<"SAT"<<endl;
		}
	}

	else if(x==8){
		if(y%7==1){
			cout<<"WED"<<endl;
		}
		else if(y%7==2){
			cout<<"THU"<<endl;
		}
		else if(y%7==3){
			cout<<"FRI"<<endl;
		}
		else if(y%7==4){
			cout<<"SAT"<<endl;
		}
		else if(y%7==5){
			cout<<"SUN"<<endl;
		}
		else if(y%7==6){
			cout<<"MON"<<endl;
		}
		else if(y%7==0){
			cout<<"TUE"<<endl;
		}
	}

	else if(x==9){
		if(y%7==1){
			cout<<"SAT"<<endl;
		}
		else if(y%7==2){
			cout<<"SUN"<<endl;
		}
		else if(y%7==3){
			cout<<"MON"<<endl;
		}
		else if(y%7==4){
			cout<<"TUE"<<endl;
		}
		else if(y%7==5){
			cout<<"WED"<<endl;
		}
		else if(y%7==6){
			cout<<"THU"<<endl;
		}
		else if(y%7==0){
			cout<<"FRI"<<endl;
		}
	}

	else if(x==10){
		if(y%7==1){
			cout<<"MON"<<endl;
		}
		else if(y%7==2){
			cout<<"TUE"<<endl;
		}
		else if(y%7==3){
			cout<<"WED"<<endl;
		}
		else if(y%7==4){
			cout<<"THU"<<endl;
		}
		else if(y%7==5){
			cout<<"FRI"<<endl;
		}
		else if(y%7==6){
			cout<<"SAT"<<endl;
		}
		else if(y%7==0){
			cout<<"SUN"<<endl;
		}
	}

	else if(x==11){
		if(y%7==1){
			cout<<"THU"<<endl;
		}
		else if(y%7==2){
			cout<<"FRI"<<endl;
		}
		else if(y%7==3){
			cout<<"SAT"<<endl;
		}
		else if(y%7==4){
			cout<<"SUN"<<endl;
		}
		else if(y%7==5){
			cout<<"MON"<<endl;
		}
		else if(y%7==6){
			cout<<"TUE"<<endl;
		}
		else if(y%7==0){
			cout<<"WED"<<endl;
		}
	}

	else if(x==12){
		if(y%7==1){
			cout<<"SAT"<<endl;
		}
		else if(y%7==2){
			cout<<"SUN"<<endl;
		}
		else if(y%7==3){
			cout<<"MON"<<endl;
		}
		else if(y%7==4){
			cout<<"TUE"<<endl;
		}
		else if(y%7==5){
			cout<<"WED"<<endl;
		}
		else if(y%7==6){
			cout<<"THU"<<endl;
		}
		else if(y%7==0){
			cout<<"FRI"<<endl;
		}
	}
}*/
