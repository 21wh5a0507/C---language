#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0)
		   return false;
		else    
	       return true;
	}
}
int main(){
	int n;
	cout<<"enter a integer value : ";
	cin>>n;
	cout<<boolalpha<<isPrime(n);
	return 0;
}
