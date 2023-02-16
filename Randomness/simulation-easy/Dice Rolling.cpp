#include<bits/stdc++.h>
using namespace std;

string rollDice(){
	int a,b,c;
	srand(time(0)); 
		a=rand()%6+1;
		b=rand()%6+1;
		c=rand()%6+1;
	cout<<a<<" "<<b<<" "<<c<<"\n";
	if(a==b && a==c)
	return "Yahoo";
	else 
	return "Try Again";
}
int main(){
	cout<<rollDice();
	return 0;
}
