#include<bits/stdc++.h>
using namespace std;
int medianOfThree(int a,int b,int c){
	if(a>b && a>c){
		if(b>c)
		   cout<<b;
		else
		   cout<<c; 
	}
	else if(b>a && b>c){
		if(a>c)
		  cout<<a;
		else
		  cout<<c;  
	}
	else if(c>a &&c>b){
		if(b>a)
		  cout<<b;
		else
		  cout<<a;  
	}
	return 0;
}
int main(){
	int a,b,c;
	cout<<"enter a,b,c values : ";
	cin>>a>>b>>c;
	medianOfThree(a,b,c);
	return 0;
}
