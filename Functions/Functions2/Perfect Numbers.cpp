#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
	    }
	}
	if(sum==n)
	   return true;
	else
	   return false;  
}
int main(){
	int n;
	cout<<"enter an integer : ";
	cin>>n;
	cout<<boolalpha<<isPerfect(n);
	cout<<"\n";
	for(int i=1;i<10000;i++){
		if(isPerfect(i))
		cout<<i<<"\n";
	}
	return 0;
}
