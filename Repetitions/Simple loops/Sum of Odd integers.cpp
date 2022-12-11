#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,count=0;
	cout<<"enter a number :";
	cin>>n;
    for(int i=1;i<=100;i++)
    {
	   if(i%2!=0)
	   {
	      count++;
	      sum=sum+i;
	    if(count==n)
	   	cout<<sum;
	   }
    }
	return 0;
}
