#include<bits/stdc++.h>
using namespace std;
int main(){
	int side1,side2,side3;
	cout<<"enter lengths of the triangle : ";
	cin>>side1>>side2>>side3;
	
	if(side1==side2){
		if(side1==side3)
		 cout<<"it is Equilateral triangle";
	}
	else if(side1!=side2 && side1!=side3 && side2!=side3){
		cout<<"it is scalene triangle";
	}
	else{
		cout<<"it is isosceles triangle";
	}
	return 0;
}
