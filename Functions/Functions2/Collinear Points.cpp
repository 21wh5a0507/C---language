#include<bits/stdc++.h>
using namespace std;
bool isCollinear(int x1,int y1,int x2,int y2,int x3,int y3){
	int a,b;
	a=(x2-x1)/(y2-y1);
	b=(x3-x2)/(y3-y2);
	if(a==b)
	 return true;
	else
	 return false; 
}
int main(){
	int x1,x2,x3,y1,y2,y3;
	cout<<"enter x1,y1 values : ";
	cin>>x1>>y1;
	cout<<"enter x2,y2 values : ";
	cin>>x2>>y2;
	cout<<"enter x3,y3 values : ";
	cin>>x3>>y3;
	cout<<boolalpha<<isCollinear(x1,y1,x2,y2,x3,y3);
	return 0;
}
