#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,z=1;
	cout<<"enter a value : ";
	cin>>n;
	for(int i=0;i<n;i++){
			for(int j=i;j<n-1;j++)
			   cout<<" ";
			for(int k=0;k<i+z;k++){
			   cout<<"*";
		    }
			z++;
		cout<<"\n";	
	}
	for(int i=n-1;i>0;i--){
		for(int j=n;j>i;j--)cout<<" ";
		for(int k=0;k<2*i-1;k++){
			cout<<"*";
		}
	cout<<"\n";
	}
	return 0;
}
