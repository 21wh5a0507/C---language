#include<bits/stdc++.h>
using namespace std;

string rollDice(){
	int a,b,c,d,e;
	srand(time(0)); 
		a=rand()%6+1;
		b=rand()%6+1;
		c=rand()%6+1;
		d=rand()%6+1;
		e=rand()%6+1;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
	if(a==b && a==c && a==d && a==e)
	return "Yahoo";
	else 
	return "Try Again";
}
int main(){
	cout<<rollDice();
	return 0;
}
