#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter an integer : ";
	cin>>n;
	for(int i=0;i<=n;i++){
		sum=sum+i;
	}
	cout<<"Sum of n integers : "<<sum;
	return 0;
}
