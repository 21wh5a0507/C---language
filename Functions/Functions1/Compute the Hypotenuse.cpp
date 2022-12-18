#include<bits/stdc++.h>
using namespace std;
int getHypotenuse(int a,int b)
{
	float c;
	c=sqrt((a*a)+(b*b));
	cout<<c;
	return 0;
}
int main(){
	int x,y;
	cout<<"enter two shorter sides: ";
	cin>>x>>y;
	getHypotenuse(x,y);
	return 0;
}
