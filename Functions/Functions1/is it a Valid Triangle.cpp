#include<bits/stdc++.h>
using namespace std;
bool isValidTriangle(int a,int b,int c){
	if(a==0 || b==0 || c==0)
		return false;
	else if(a>=b+c | b>=a+c | c>=a+b)
	    return false;
	else
	    return true;    	
}
int main(){
	int a,b,c;
	cout<<"enter 3 sides : ";
	cin>>a>>b>>c;
	cout<<boolalpha<<isValidTriangle(a,b,c);
	return 0;
}
