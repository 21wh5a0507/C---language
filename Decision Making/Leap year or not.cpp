#include<bits/stdc++.h>
using namespace std;
int main(){
	int year;
	cout<<"enter year: ";
	cin>>year;
	if(year%400==0 || year%4==0){
		cout<<"it is a Leap year";
	}
	else if(year%100==0){
		cout<<"it is not a Leap year";
	}
	else{
		cout<<"it is not a Leap year";
	}
	return 0;
}
