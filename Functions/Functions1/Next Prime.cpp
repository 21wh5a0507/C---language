#include<bits/stdc++.h>
using namespace std;
int nextPrime(int n)
{
	int m=n+1;
	for(int i=2;i<m;i++){
		if(m%i==0){
		m++;
		}
	}
	cout<<m; 
	return 0;
}
int main(){
	int n;
	cout<<"enter a integer : ";
	cin>>n;
	nextPrime(n);
	return 0;
}
