#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,a=1;
	cout<<"enter a number :";
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	sum=sum+a;
		a=a+2; 
    }
    cout<<"Sum of Odd Integer : "<<sum;
	return 0;
}
