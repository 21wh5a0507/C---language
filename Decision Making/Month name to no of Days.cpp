#include<bits/stdc++.h>
using namespace std;
int main(){
	string month;
	cout<<"enter name of the month :";
	cin>>month;
	if(month=="january" | month=="march" |month=="may"|month=="july"|month=="august"|month=="october"|month=="december")
	   cout<<"31 days";
    else if(month=="february")
	  cout<<"28 or 29 days";
	else{
		cout<<"30 days";
	}  
	return 0;
}
