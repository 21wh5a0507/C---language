#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,sum,x,y,z;
	cout<<"Enter Four Digit Number : ";
	cin>>n;
	sum=0;
	m=n%10;
	sum=sum+m;
	n=n/10;
	x=n%10;
	sum=sum+x;
	n=n/10;
	y=n%10;
	sum=sum+y;
	n=n/10;
	z=n%10;
	sum=sum+z;
	cout<<z<<"+"<<y<<"+"<<x<<"+"<<m<<"="<<sum;
	
	return 0;
}
