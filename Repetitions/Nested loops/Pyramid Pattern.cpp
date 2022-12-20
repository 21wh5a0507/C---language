#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,z=1;
	cout<<"enter an integer : ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
			cout<<"  ";
		}
		for(int k=0;k<i+z;k++){
			cout<<"* ";
		}
		z++;
		for(int l=i;l<n-1;l++){
			cout<<"  ";
		}
		cout<<"\n";
	}
	return 0;
}
