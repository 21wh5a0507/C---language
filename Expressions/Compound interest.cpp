#include<bits/stdc++.h>
using namespace std;
int main(){
	int amount;
	float x,y,z;
	cout<<"Enter Amount of money deposited in account: ";
	cin>>amount;
	x=(float)amount*4/100+amount;
	cout<<"Amount after 1 year : "<<fixed<<setprecision(2)<<x<<"\n";
	y=(float)x*4/100+x;
	cout<<"Amount after 2 years : "<<fixed<<setprecision(2)<<y<<"\n";
	z=(float)y*4/100+y;
	cout<<"Amount after 3 years : "<<fixed<<setprecision(2)<<z<<"\n";
	return 0;
}
