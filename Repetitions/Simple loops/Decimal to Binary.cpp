#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,r;
	string result="";
	cout<<"enter a value : ";
	cin>>q;
	while(q>0){
		r=q%2;
		result=to_string(r)+result;
		q=q/2;
	}
	cout<<result;
	return 0;
}
