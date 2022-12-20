#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,z;
	cout<<"enter an integer : ";
	cin>>n;
	z=n-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<"  ";
		}
		for(int k=0;k<n+z;k++){
			cout<<"* ";
		}
		z=z-2;
		for(int l=0;l<i;l++){
			cout<<"  ";
		}
		cout<<"\n";
	}
	return 0;
}
